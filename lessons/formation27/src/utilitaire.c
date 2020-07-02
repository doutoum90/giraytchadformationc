#include "utilitaire.h"
void detruireContexteEtQuitter(SDL_Window *fenetre, SDL_Renderer *rendu, unsigned cond, char *message)
{
    if (cond)
    {
        detruireContexte(fenetre, rendu);
        LoggerMessageErreur(cond, message);
    }
}
void detruireContexte(SDL_Window *fenetre, SDL_Renderer *rendu)
{
    // destruction de la lib TTF
    TTF_Quit();
    // destruction du container
    SDL_DestroyRenderer(rendu);
    // destruction de la fenêtre
    SDL_DestroyWindow(fenetre);
}