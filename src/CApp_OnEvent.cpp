//==============================================================================
#include "CApp.h"

//==============================================================================
void CApp::OnEvent(SDL_Event* Event) {
    switch (Event->type)
    {
        case SDL_QUIT:
            Running = false;
            break;
        case SDL_KEYDOWN:
            switch (Event->key.keysym.sym)
            {
                case SDLK_LEFT:
                    gameObject.moveLeft();
                    break;

                case SDLK_RIGHT:

                    break;

                case SDLK_DOWN:

                    break;

                case SDLK_SPACE:

                    break;

                default:
                    break;
            }
        default:
            break;
    }
}

//==============================================================================
