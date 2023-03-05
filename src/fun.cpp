// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t powered = 1;

    for (size_t i = 0; i < n; i++)
    {
        powered *= x;
    }

    return powered;
}
