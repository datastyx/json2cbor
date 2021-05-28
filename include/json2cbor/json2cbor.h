#pragma once

#include "cn-cbor/cn-cbor.h"

#ifdef __cplusplus
extern "C"{
#endif 

cn_cbor *ParseJsonString(char *jsonString, int offset, int length);

#ifdef __cplusplus
}
#endif

