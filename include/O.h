#ifndef O_H
#define O_H
#include "/home/nils/workspace/tetris/include/GameObject.h"

class O : public GameObject
{
    public:
        O();
        virtual ~O();
        void moveLeft();
        void moveRight();
        void moveDown();
        void rotate();
    private:
        int position[3];
        char ImagePath[4] = "O.bmp";
};

#endif // O_H
