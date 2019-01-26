#ifndef AVUTIL_AVUTIL_H
#define AVUTIL_AVUTIL_H

#include <stdint.h>
/* IEEE 80 bits extended float */
typedef struct AVExtFloat  {
    uint8_t exponent[2];
    uint8_t mantissa[8];
} AVExtFloat;

typedef struct AVRational{
    int num; ///< numerator
    int den; ///< denominator
} AVRational;

struct AVBufferRef;

#endif /* AVUTIL_AVUTIL_H */
