#ifndef GAMEFIELD_H
#define GAMEFIELD_H
#include <SDL/SDL.h>

class GameField
{
    public:
        GameField();
        virtual ~GameField();

    protected:
    private:
        bool Field[239];
        SDL_Surface* FieldSurface[199];
};

#endif // GAMEFIELD_H
