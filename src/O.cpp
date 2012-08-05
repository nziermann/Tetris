#include "/home/nils/workspace/tetris/include/O.h"

//need function to set position of the objects
O::O()
{
    //ctor
}

O::~O()
{
    //dtor
}

void O::moveLeft()
{
    for(int i = 0; i<4; i++)
    {
        position[i]--;
    }
}

void O::moveRight()
{
    for(int i = 0; i<4; i++)
    {
        position[i]++;
    }
}

void O::moveDown()
{
    for(int i = 0; i<4; i++)
    {
        position[i] = position[i] + 10;
    }
}

void O::rotate()
{

}
