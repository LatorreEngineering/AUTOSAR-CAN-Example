#include "can_driver.h"
#include <stdio.h>

static CanDataType can_mailbox[8]; // simple loopback mailbox

Std_ReturnType Can_Init(void) {
    printf("CAN driver initialized.\n");
    return E_OK;
}

Std_ReturnType Can_Write(CanIdType id, CanDataType* data, uint8_t length) {
    if (length > 8) return E_NOT_OK; // CAN max 8 bytes
    for (int i = 0; i < length; i++) {
        can_mailbox[i] = data[i];
    }
    printf("CAN message sent: ID 0x%X\n", id);
    return E_OK;
}

Std_ReturnType Can_Read(CanIdType id, CanDataType* data, uint8_t* length) {
    for (int i = 0; i < *length; i++) {
        data[i] = can_mailbox[i];
    }
    printf("CAN message received: ID 0x%X\n", id);
    return E_OK;
}
