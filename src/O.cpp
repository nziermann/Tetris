#include "O.h"
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
        if(position[i] % 10 == 0)
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        if(gameField.isfieldOccupied(position[i] - 1))
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i]--;
        gameField.setField(ImagePath, position[i]);
    }
    return true;
}

bool O::moveRight()
{
    for(int i = 0; i<4; i++)
    {
        if((position[i] + 1) % 10 == 0)
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        if(gameField.isfieldOccupied(position[i] + 1))
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i]++;
        gameField.setField(ImagePath, position[i]);
    }
    return true;
}

bool O::moveDown()
{
    for(int i = 0; i<4; i++)
    {
        if(position[i] > 189)
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        if(gameField.isfieldOccupied(position[i] + 10))
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i] = position[i] + 10;
        gameField.setField(ImagePath, position[i]);
    }
    return true;
}

bool O::rotate()
{
    return true;
}

