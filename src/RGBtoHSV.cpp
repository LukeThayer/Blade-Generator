#include "RGBtoHSV.h"

Vector4 HsvToRgb(Vector4 hsv)
{
    Vector4 rgba;
    unsigned char region, p, q, t;
    unsigned int h, s, v, remainder;

    if (hsv.g == 0)
    {
        rgba.r = hsv.b;
        rgba.g = hsv.b;
        rgba.b = hsv.b;
        return rgba;
    }

    // converting to 16 bit to prevent overflow
    h = hsv.r;
    s = hsv.g;
    v = hsv.b;

    region = h / 43;
    remainder = (h - (region * 43)) * 6;

    p = (v * (255 - s)) >> 8;
    q = (v * (255 - ((s * remainder) >> 8))) >> 8;
    t = (v * (255 - ((s * (255 - remainder)) >> 8))) >> 8;

    switch (region)
    {
    case 0:
        rgba.r = v;
        rgba.g = t;
        rgba.b = p;
        break;
    case 1:
        rgba.r = q;
        rgba.g = v;
        rgba.b = p;
        break;
    case 2:
        rgba.r = p;
        rgba.g = v;
        rgba.b = t;
        break;
    case 3:
        rgba.r = p;
        rgba.g = q;
        rgba.b = v;
        break;
    case 4:
        rgba.r = t;
        rgba.g = p;
        rgba.b = v;
        break;
    default:
        rgba.r = v;
        rgba.g = p;
        rgba.b = q;
        break;
    }

    rgba.a = 255;

    return rgba;
}

Vector4 RgbToHsv(Vector4 rgb)
{
    Vector4 hsv;
    unsigned char rgbMin, rgbMax;

    rgbMin = rgb.r < rgb.g ? (rgb.r < rgb.b ? rgb.r : rgb.b) : (rgb.g < rgb.b ? rgb.g : rgb.b);
    rgbMax = rgb.r > rgb.g ? (rgb.r > rgb.b ? rgb.r : rgb.b) : (rgb.g > rgb.b ? rgb.g : rgb.b);

    hsv.b = rgbMax;
    if (hsv.b == 0)
    {
        hsv.r = 0;
        hsv.g = 0;
        return hsv;
    }

    hsv.g = 255 * ((long)(rgbMax - rgbMin)) / hsv.b;
    if (hsv.g == 0)
    {
        hsv.r = 0;
        return hsv;
    }

    if (rgbMax == rgb.r)
        hsv.r = 0 + 43 * (rgb.g - rgb.b) / (rgbMax - rgbMin);
    else if (rgbMax == rgb.g)
        hsv.r = 85 + 43 * (rgb.b - rgb.r) / (rgbMax - rgbMin);
    else
        hsv.r = 171 + 43 * (rgb.r - rgb.g) / (rgbMax - rgbMin);

    return hsv;
}