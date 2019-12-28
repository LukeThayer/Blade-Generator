
#ifndef BLADEGEN
#define BLADEGEN

#include "pngDraw.h"

class BladeGenerator
{
public:
  BladeGenerator(uint32_t width, uint32_t height, uint32_t pWidth,
                 uint32_t pHeight);
  void generateBlade(int seed);
  void generateHilt(int seed);
  void generateSword(int seed);
  void initializeRange(float startXVar, float startYVAr, float changeYVar, float changeXVar, float endXVar, float endYVar);

private:
  uint32_t mHeight;
  uint32_t mWidth;
  PNGDrawer drawer;

  uint32_t mBladeHeight;
  uint32_t mHiltHeight;

  float mStartXVar;
  float mStartYVar;
  float mChangeYVar;
  float mChangeXVar;
  float mEndXVar;
  float mEndYVar;
};

#endif