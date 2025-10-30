#include "can_if.h"
#include "can_driver.h"

// CAN Interface just wraps the driver
Std_ReturnType CanIf_Transmit(CanIdType id, CanDataType* data, uint8_t length) {
    return Can_Write(id, data, length);
}

Std_ReturnType CanIf_Receive(CanIdType id, CanDataType* data, uint8_t* length) {
    return Can_Read(id, data, length);
}
