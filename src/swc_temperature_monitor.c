#include "can_if.h"
#include <stdio.h>

void TemperatureMonitor_Task(void) {
    CanDataType temp_data[1];
    temp_data[0] = 25; // Simulated temperature sensor

    // Send temperature over CAN via CAN Interface
    if (CanIf_Transmit(0x100, temp_data, 1) != E_OK) {
        printf("Failed to send CAN message\n");
        return;
    }

    // Receive the same message (loopback simulation)
    CanDataType rx_data[1];
    uint8_t length = 1;
    if (CanIf_Receive(0x100, rx_data, &length) != E_OK) {
        printf("Failed to read CAN message\n");
        return;
    }

    printf("Temperature received over CAN: %d°C\n", rx_data[0]);
}
