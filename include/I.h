#ifndef I_H
#define I_H
#include "GameObject.h"


class I: public GameObject
{
    public:
        I();
        virtual ~I();
        bool moveLeft();
        bool moveRight();
        bool moveDown();
        bool rotate();
    private:
        int position[3];
        string ImagePath;
};

#endif // I_H
