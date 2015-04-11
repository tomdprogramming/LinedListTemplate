#include "TomPointClass.h"
#include <cstdio>

TomPointClass::TomPointClass()
{
    this->XCoord = 0;
    this->YCoord = 0;
}

TomPointClass::TomPointClass(int x, int y)
{
    this->XCoord = x;
    this->YCoord = y;
}

TomPointClass::~TomPointClass()
{
    
}

void TomPointClass::PrintCoords(void)
{
    printf("%d, %d\n", this->XCoord, this->YCoord);
}


