#include "/home/nils/workspace/tetris/include/GameField.h"

GameField::GameField()
{
    for(int i = 0; i<200; i++)
    {
        FieldSurface[i] = NULL;
    }
}

GameField::~GameField()
{
    //dtor
}
