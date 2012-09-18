#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "GameField.h"
#include <string>


class GameObject
{
    public:
        GameObject(GameField* Field);
        virtual ~GameObject();
        bool moveLeft();
        bool moveRight();
        bool moveDown();
        bool rotate();
        bool spawn();
    protected:
        int position[3];
        string ImagePath;
        GameField* gameField;
};

#endif // GAMEOBJECT_H
