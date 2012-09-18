#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL.h>
#include "GameField.h"
#include "GameObject.h"

//==============================================================================
class CApp {

    public:
        CApp();
        int OnExecute();
        bool OnInit();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();

    private:
        bool            Running;
        SDL_Surface*    Surf_Display;
        GameField*      gameField;
        GameObject      gameObject;
};

//==============================================================================

#endif
