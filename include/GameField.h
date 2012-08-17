#ifndef GAMEFIELD_H
#define GAMEFIELD_H
#include <SDL/SDL.h>
#include <string>
using namespace std;

class GameField
{
    public:
        GameField();
        virtual ~GameField();
        void setField(string ImagePath, int Field);
        bool isfieldOccupied(int Field);
    protected:
    private:
        bool fieldOccupied[239];
        SDL_Surface* FieldSurface[199];
};

#endif // GAMEFIELD_H
