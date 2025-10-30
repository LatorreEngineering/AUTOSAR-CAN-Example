#ifndef CAN_IF_H
#define CAN_IF_H

#include "types.h"

Std_ReturnType CanIf_Transmit(CanIdType id, CanDataType* data, uint8_t length);
Std_ReturnType CanIf_Receive(CanIdType id, CanDataType* data, uint8_t* length);

#endif
