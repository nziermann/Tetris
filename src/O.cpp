#include "O.h"
#include <string>

//need function to set position of the objects
O::O(GameField* Field) : GameObject(Field)
{
    ImagePath = "O.bmp";
}

O::~O()
{
    //dtor
}



bool O::rotate()
{
    return true;
}

bool O::spawn()
{
    position[0] = 204;
    position[1] = 205,
    position[2] = 214;
    position[3] = 215;
    return true;
}
