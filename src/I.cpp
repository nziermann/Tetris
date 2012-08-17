#include "I.h"

I::I()
{
    //ctor
}

I::~I()
{
    //dtor
}

bool I::moveLeft()
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
        if(gameField.isfieldOccupied(position[i]--))
        {
           return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i]--;
    }
    return true;
}

bool I::moveRight()
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
        if(gameField.isfieldOccupied(position[i]++))
        {
           return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i]++;
    }
    return true;
}

bool I::moveDown()
{
    for(int i = 0; i<4; i++)
    {
        if(gameField.isfieldOccupied(position[i] +10))
        {
           return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i] = position[i] + 10;
    }
    return true;
}

bool I::rotate()
{
    return true;
}


