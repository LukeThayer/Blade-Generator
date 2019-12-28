

#ifndef PNGDRAW
#define PNGDRAW

#include <vector>
#include <math.h>
#include "lodepng.h"
#include <iostream>
#include <chrono>
#include <thread>
#include "RGBtoHSV.h"

struct Vector2
{
    int32_t x;
    int32_t y;
};

enum Component
{
    Red = 0,
    Green,
    Blue,
    Alpha
};

union Color {
    uint32_t data;
    uint8_t components[4];
};
struct Pixel
{
    Color color;
    uint32_t x;
    uint32_t y;
};

class Image
{
public:
    Image(uint32_t width, uint32_t height);

    Image(const std::string &filename);

    Image();

    uint32_t getWidth();

    uint32_t getHeight();

    size_t indexFromXY(uint32_t x, uint32_t y);

    Pixel getPixel(uint32_t x, uint32_t y);

    void writePixel(Pixel pixel);

    void save(const std::string &filename);

private:
    uint32_t mWidth;
    uint32_t mHeight;
    std::vector<Color> mBuffer;
};

class PNGDrawer
{
public:
    PNGDrawer(uint32_t width, uint32_t height, uint32_t pixelHeight, uint32_t pixelWidth);
    PNGDrawer();
    void drawLine(float x1, float y1, float x2, float y2, Vector4 color);

    void drawParabola(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color);

    void drawSin(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color);

    void fillRect(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color);

    void drawPixel(int32_t x, int32_t y, Vector4 color);

    void savePNG(std::string filename);

    void gradientLine(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color1, Vector4 color2);

private:
    Image image;
    uint32_t mWidth;
    uint32_t mHeight;
    uint32_t mPixelHeight;
    uint32_t mPixelWidth;
};

#endif