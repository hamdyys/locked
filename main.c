#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <time.h>
#include "enigme.h" 


int main()
{
 Imm ecran,enigme_fond;
 reponse r;
SDL_Event event;
SDL_Init(SDL_INIT_EVERYTHING);
 int done=0;


SDL_WM_SetCaption(" .. enigme.." ,NULL);

init(&ecran,&enigme_fond,&r);
ecran.srf[0]=SDL_SetVideoMode(640,480,32,SDL_HWSURFACE);
load(&enigme_fond,&r);

while(!done)
{
display(&ecran,&enigme_fond,&r);
}


SDL_FreeSurface(enigme_fond.srf[0]); 
SDL_FreeSurface(r.reponse1.srf[0]); 
SDL_FreeSurface(r.reponse2.srf[0]); 
SDL_FreeSurface(r.reponse3.srf[0]); 
SDL_FreeSurface(r.reponse3.srf[0]); 

SDL_Quit();







return 0;
}

