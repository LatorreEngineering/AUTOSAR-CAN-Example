#ifndef CAN_DRIVER_H
#define CAN_DRIVER_H

#include "types.h"

Std_ReturnType Can_Init(void);
Std_ReturnType Can_Write(CanIdType id, CanDataType* data, uint8_t length);
Std_ReturnType Can_Read(CanIdType id, CanDataType* data, uint8_t* length);

#endif
