#ifndef L_H
#define L_H
#include "GameObject.h"
#include "GameField.h"
#include <string>

using namespace std;

class L : public GameObject
{
    public:
        L();
        virtual ~L();
        bool moveLeft();
        bool moveRight();
        bool moveDown();
        bool rotate();
        bool spawn();
    protected:
    private:
        int position[3];
        string ImagePath;
};

#endif // L_H
