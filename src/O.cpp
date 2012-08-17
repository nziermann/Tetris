#include "/home/nils/workspace/tetris/include/O.h"
#include <string>

//need function to set position of the objects
O::O()
{
    ImagePath = "O.bmp";
}

O::~O()
{
    //dtor
}

bool O::moveLeft()
{
    for(int i = 0; i<4; i++)
    {
        position[i]--;
    }
    return true;
}

bool O::moveRight()
{
    for(int i = 0; i<4; i++)
    {
        position[i]++;
    }
    return true;
}

bool O::moveDown()
{
    for(int i = 0; i<4; i++)
    {
        position[i] = position[i] + 10;
    }
    return true;
}

bool O::rotate()
{
    return true;
}

