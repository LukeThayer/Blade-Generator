
#include <pngDraw.h>
PNGDrawer::PNGDrawer(uint32_t width, uint32_t height, uint32_t pixelHeight, uint32_t pixelWidth)
    : mWidth(width), mHeight(height), mPixelHeight(pixelHeight), mPixelWidth(pixelWidth)
{
    mHeight += mPixelHeight;
    mWidth += mPixelWidth;
    image = Image((mWidth * mPixelWidth), (mHeight * mPixelHeight));
};
PNGDrawer::PNGDrawer(){};

void PNGDrawer::drawLine(float x1, float y1, float x2, float y2, Vector4 color)
{
    // Bresenham's line algorithm
    const bool steep = (fabs(y2 - y1) > fabs(x2 - x1));
    if (steep)
    {
        std::swap(x1, y1);
        std::swap(x2, y2);
    }

    if (x1 > x2)
    {
        std::swap(x1, x2);
        std::swap(y1, y2);
    }

    const float dx = x2 - x1;
    const float dy = fabs(y2 - y1);

    float error = dx / 2.0f;
    const int ystep = (y1 < y2) ? 1 : -1;
    int y = (int)y1;

    const int maxX = (int)x2;

    for (int x = (int)x1; x <= maxX; x++)
    {
        if (steep)
        {
            drawPixel(y, x, color);
        }
        else
        {
            drawPixel(x, y, color);
        }

        error -= dy;
        if (error < 0)
        {
            y += ystep;
            error += dx;
        }
    }
};
void PNGDrawer::drawParabola(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color) {}
void PNGDrawer::drawSin(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color) {}
void PNGDrawer::fillRect(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color) {}
void PNGDrawer::drawPixel(int32_t x, int32_t y, Vector4 color)
{
    Vector2 origin;
    origin.x = (mWidth * mPixelWidth) / 2;
    origin.y = (mHeight * mPixelHeight);

    int32_t xI;
    int32_t yI;

    xI = x * mPixelWidth + origin.x;
    yI = (origin.y) - y * mPixelHeight;

    for (size_t pW = 0; pW < mPixelWidth; pW++)
    {
        for (size_t pH = 0; pH < mPixelHeight; pH++)
        {
            auto p = image.getPixel(xI - pW, yI - pH);

            p.color.components[Component::Red] = color.r;
            p.color.components[Component::Green] = color.b;
            p.color.components[Component::Blue] = color.g;
            p.color.components[Component::Alpha] = color.a;

            image.writePixel(p);
        }
    }
}

void PNGDrawer::gradientLine(int32_t x1, int32_t x2, int32_t y1, int32_t y2, Vector4 color1, Vector4 color2)
{
    //approximate steps
    uint32_t squareX = pow(x2 - x1, 2);
    uint32_t squareY = pow(y2 - y1, 2);
    uint32_t distance = sqrt(squareX + squareY);
    Vector4 HSV1 = RGBTOHSV(color1);
    Vector4 HSV2 = RGBTOHSV(color2);

    // Bresenham's line algorithm
    const bool steep = (fabs(y2 - y1) > fabs(x2 - x1));
    if (steep)
    {
        std::swap(x1, y1);
        std::swap(x2, y2);
    }

    if (x1 > x2)
    {
        std::swap(x1, x2);
        std::swap(y1, y2);
    }

    const float dx = x2 - x1;
    const float dy = fabs(y2 - y1);

    float error = dx / 2.0f;
    const int ystep = (y1 < y2) ? 1 : -1;
    int y = (int)y1;

    const int maxX = (int)x2;

    for (int x = (int)x1; x <= maxX; x++)
    {
        auto xn = normalizedLocation(x, x1, x2);
        auto yn = normalizedLocation(y, y1, y2);
        auto d = sqrt((pow(xn, 2) + pow(yn, 2)));
        if (steep)
        {
            drawPixel(y, x, color1.qlerp(d, 10, color2));
        }
        else
        {
            drawPixel(x, y, color1.qlerp(d, 10, color2));
        }

        error -= dy;
        if (error < 0)
        {
            y += ystep;
            error += dx;
        }
    }
}

void PNGDrawer::savePNG(std::string filename)
{

    image.save(std::string(filename));
}
//rgba <-> hsv