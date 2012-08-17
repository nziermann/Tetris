#include "/home/nils/workspace/tetris/include/GameField.h"
#include <SDL/SDL.h>
#include <string>

GameField::GameField()
{
    for(int i = 0; i<200; i++)
    {
        FieldSurface[i] = NULL;
    }
    for(int i = 0; i<240; i++)
    {
        fieldOccupied[i] = false;
    }
}

bool GameField::isfieldOccupied(int Field)
{
    return fieldOccupied[Field];
}

GameField::~GameField()
{
    //dtor
}

void GameField::setField(string ImagePath, int Field)
{
    FieldSurface[Field] = SDL_LoadBMP((char*) ImagePath.c_str());
    fieldOccupied[Field] = true;
}
