#ifndef O_H
#define O_H
#include "GameObject.h"
#include "GameField.h"
#include <string>

using namespace std;

class O : public GameObject
{
    public:
        O(GameField* Field);
        virtual ~O();
        bool rotate();
        bool spawn();
    private:
        int position[3];
        string ImagePath;
};

#endif // O_H
