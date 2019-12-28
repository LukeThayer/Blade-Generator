
#include <pngDraw.h>

Image::Image(uint32_t width, uint32_t height) : mWidth(width), mHeight(height)
{
    mBuffer.reserve(width * height);
    for (size_t i = 0; i < width * height; i++)
    {
        mBuffer.push_back(Color{.data = 0x00});
    }
}

Image::Image(){

};

// Image::Image(const std::string &filename)
// {
//     load(filename);
// }

uint32_t Image::getWidth()
{
    return mWidth;
}

uint32_t Image::getHeight()
{
    return mHeight;
}

size_t Image::indexFromXY(uint32_t x, uint32_t y)
{
    return x + y * mWidth;
}

Pixel Image::getPixel(uint32_t x, uint32_t y)
{
    return Pixel{mBuffer[indexFromXY(x, y)],
                 x,
                 y};
}

void Image::writePixel(Pixel pixel)
{
    mBuffer[indexFromXY(pixel.x, pixel.y)] = pixel.color;
}

void Image::save(const std::string &filename)
{
    unsigned char *image = (unsigned char *)mBuffer.data();
    unsigned error = lodepng::encode(filename, image, mWidth, mHeight);

    if (error)
    {
        std::cout << "encoder error " << error << ": " << lodepng_error_text(error) << std::endl;
    }
}

// void Image::load(const std::string &filename)
// {
//     unsigned w;
//     unsigned h;
//     std::vector<unsigned char> buff;
//     unsigned error = lodepng::decode(buff, w, h, filename);

//     if (error)
//     {
//         std::cout << "encoder error " << error << ": " << lodepng_error_text(error) << std::endl;
//     }
//     else
//     {
//         printf("Loaded image: { w:%d, h:%d }", w, h);
//         mBuffer.reserve(w * h);
//         for (size_t i = 0; i < w * h; i++)
//         {
//             size_t j = i * 4;
//             Color c;
//             c.components[0] = buff[j];
//             c.components[1] = buff[j + 1];
//             c.components[2] = buff[j + 2];
//             c.components[3] = buff[j + 3];
//             mBuffer.push_back(c);
//         }
//     }
// }