#include "BladeGen.h"

BladeGenerator::BladeGenerator(uint32_t width, uint32_t height, uint32_t pWidth,
                               uint32_t pHeight)
{
    mHeight = height;
    mWidth = width;

    mBladeHeight = .75 * mHeight;
    mHiltHeight = height - mBladeHeight;

    drawer = PNGDrawer(width, height, pWidth, pHeight);
};

void BladeGenerator::initializeRange(float startXVar, float startYVar, float changeYVar, float changeXVar, float endXVar, float endYVar)
{
    mStartXVar = startXVar;
    mStartYVar = startYVar;
    mChangeXVar = changeXVar;
    mChangeYVar = changeYVar;
    mEndXVar = endXVar;
    mEndYVar = endYVar;
}
void BladeGenerator::generateSword(int seed)
{

    drawer.gradientLine(0, 0, 0, 100, Vector4{255, 0, 0, 255}, Vector4{0, 255, 0, 255});
    srand(seed);
    generateBlade(seed);
    generateHilt(seed);

    std::string filename;
    filename = "_test.png";
    drawer.savePNG(filename);
};
void BladeGenerator::generateHilt(int seed){};
void BladeGenerator::generateBlade(int seed)
{
    bool sym;

    //the color used to draw the sword outline
    Vector4 color;
    color.r = 0;
    color.b = 0;
    color.g = 0;
    color.a = 255;

    //determines if the sword is symmetric
    sym = rand() % 2;
    if (sym)
    {
        //determines a random start and end point using the given parameters when initialized
        Vector2 startPoint;
        startPoint.x = rand() % int(mWidth * mStartXVar) + int(mWidth * .05);
        startPoint.y = rand() % int(mBladeHeight * mStartYVar) + mHiltHeight;
        Vector2 endPoint;
        endPoint.x = 0;
        endPoint.y = rand() % int(mBladeHeight * mEndYVar) + mHiltHeight;

        //determines the amount of times the line changes on its path to the end point
        int32_t changes;
        changes = rand() % 4;

        //draws all the lines between each change point until the end point is reached
        Vector2 newPoint;
        Vector2 oldPoint;
        oldPoint = startPoint;
        for (size_t i = 0; i < changes; i++)
        {
            newPoint.x = abs(oldPoint.x + rand() % int(mWidth * mChangeXVar) -
                             int(mWidth * (.5 * mChangeXVar)));
            newPoint.y = oldPoint.y + rand() % int(mBladeHeight * mChangeYVar) +
                         int(mBladeHeight * .05);

            drawer.drawLine(oldPoint.x, oldPoint.y, newPoint.x,
                            newPoint.y, color);
            drawer.drawLine(oldPoint.x * -1, oldPoint.y,
                            newPoint.x * -1, newPoint.y, color);

            oldPoint = newPoint;
        }
        drawer.drawLine(oldPoint.x * -1, oldPoint.y, endPoint.x * -1,
                        endPoint.y, color);
        drawer.drawLine(oldPoint.x, oldPoint.y, endPoint.x, endPoint.y,
                        color);
    }
    else
    {
        Vector2 startPointR;
        startPointR.x = rand() % int(mWidth * mStartXVar) + int(mWidth * .05);
        startPointR.y = rand() % int(mBladeHeight * mStartYVar) + mHiltHeight;

        Vector2 startPointL;
        startPointL.x = (rand() % int(mWidth * mStartXVar) + int(mWidth * .05)) * -1;
        startPointL.y = rand() % int(mBladeHeight * mStartYVar) + mHiltHeight;

        Vector2 endPoint;
        endPoint.x = rand() % int(mWidth * mEndXVar) - int(mWidth * mEndXVar * .5);
        endPoint.y = rand() % int(mBladeHeight * mEndYVar) + mHiltHeight;

        int32_t changesR;
        changesR = rand() % 3 + 1;

        int32_t changesL;
        changesL = rand() % 3 + 1;

        Vector2 newPoint;
        Vector2 oldPoint;

        oldPoint = startPointR;
        for (size_t i = 0; i < changesR; i++)
        {
            newPoint.x = abs(oldPoint.x + rand() % int(mWidth * mChangeXVar) -
                             int(mWidth * mChangeXVar * .5));
            newPoint.y = oldPoint.y + rand() % int(mBladeHeight * mChangeYVar) +
                         int(mBladeHeight * .05);

            drawer.drawLine(oldPoint.x, oldPoint.y, newPoint.x,
                            newPoint.y, color);

            oldPoint = newPoint;
        }

        drawer.drawLine(oldPoint.x, oldPoint.y, endPoint.x, endPoint.y,
                        color);

        oldPoint = startPointL;
        for (size_t i = 0; i < changesL; i++)
        {
            newPoint.x =
                -1 * abs(oldPoint.x + rand() % int(mWidth * mChangeXVar) -
                         int(mWidth * mChangeXVar * .5));
            newPoint.y = oldPoint.y + rand() % int(mBladeHeight * mChangeYVar) +
                         int(mBladeHeight * .05);

            drawer.drawLine(oldPoint.x, oldPoint.y, newPoint.x,
                            newPoint.y, color);

            oldPoint = newPoint;
        }

        drawer.drawLine(oldPoint.x, oldPoint.y, endPoint.x, endPoint.y,
                        color);
    }
};
