#ifndef RGBTOHSV
#define RGBTOHSV

#include <stdint.h>
#include <math.h>
#include <Interpolation.h>

struct Vector4
{
    uint32_t r;
    uint32_t g;
    uint32_t b;
    uint32_t a;

    Vector4 lerp(float x, Vector4 other)
    {
        return Vector4{
            (uint32_t)lerpf(x, (float)r, (float)other.r),
            (uint32_t)lerpf(x, (float)g, (float)other.g),
            (uint32_t)lerpf(x, (float)b, (float)other.b),
            (uint32_t)lerpf(x, (float)a, (float)other.a),
        };
    }

    Vector4 qlerp(float x, int32_t steps, Vector4 other)
    {
        float qx = quantizef(x, steps);
        return Vector4{
            (uint32_t)lerpf(qx, (float)r, (float)other.r),
            (uint32_t)lerpf(qx, (float)g, (float)other.g),
            (uint32_t)lerpf(qx, (float)b, (float)other.b),
            (uint32_t)lerpf(qx, (float)a, (float)other.a),
        };
    }
};

#endif