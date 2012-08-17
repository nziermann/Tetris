#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "GameField.h"


class GameObject
{
    public:
        GameObject();
        virtual ~GameObject();
        bool moveLeft();
        bool moveRight();
        bool moveDown();
        bool rotate();
    private:
        static GameField gameField;
};

#endif // GAMEOBJECT_H
