#include "GameObject.h"

GameObject::GameObject(GameField* Field)
{
    gameField = Field;
}

GameObject::~GameObject()
{
    //dtor
}

bool GameObject::moveLeft()
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
        if(gameField->isfieldOccupied(position[i] - 1))
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i]--;
        gameField->setField(ImagePath, position[i]);
    }
    return true;
}

bool GameObject::moveRight()
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
        if(gameField->isfieldOccupied(position[i] + 1))
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i]++;
        gameField->setField(ImagePath, position[i]);
    }
    return true;
}

bool GameObject::moveDown()
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
        if(gameField->isfieldOccupied(position[i] + 10))
        {
            return false;
        }
    }
    for(int i = 0; i<4; i++)
    {
        position[i] = position[i] + 10;
        gameField->setField(ImagePath, position[i]);
    }
    return true;
}

bool GameObject::rotate()
{
    return true;
}

bool GameObject::spawn()
{
    return true;
}
