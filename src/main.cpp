
#include "BladeGen.h"
#include "time.h"
int main()
{
    BladeGenerator Gen(64, 160, 2, 2);
    Gen.initializeRange(.5, .1, .1, .2, .2, .9);
    Gen.generateSword(time(NULL));
    return 0;
}
