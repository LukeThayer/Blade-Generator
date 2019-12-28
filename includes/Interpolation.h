#pragma once

#include <stdint.h>

//Assume x 0-1
static float lerpf(float x, float s, float e)
{
    return s + (e * x + ((1.0 - x) * s));
}

// Returns a 0-1 normalized location
static float normalizedLocation(float x, float s, float e)
{
    float r = e - s;
    if (r == 0)
        return 0;
    return (x - s) / r;
}

//assume x 0-1
static int32_t quantizef(float x, int32_t r)
{
    return (int32_t)roundf(x * (float)r);
}