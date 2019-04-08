#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <time.h>
#include "enigme.h"

void init(Imm* ecran,Imm* enigme_fond,reponse* r)
{
 ecran->srf[0]=NULL;
 enigme_fond->srf[0]=NULL;
  
 enigme_fond->pos.x=60;
  enigme_fond->pos.y=75;

  r->reponse1.pos.y= 337;
  r->reponse2.pos.y= 337;
  r->reponse3.pos.y= 337;
  r->reponse4.pos.y= 337;

  r->reponse1.pos.x= 60;
  r->reponse2.pos.x= 195;
  r->reponse3.pos.x= 330;
  r->reponse4.pos.x= 465;
  //r->state = 0;
  
}

void load(Imm* enigme_fond,reponse* r)
{

enigme_fond->srf[0]=IMG_Load("enigme.png");
r->reponse1.srf[0]=IMG_Load("8.png");
r->reponse2.srf[0]=IMG_Load("11.png");
r->reponse3.srf[0]=IMG_Load("14.png");
r->reponse4.srf[0]=IMG_Load("17.png");
}  

void display(Imm* ecran,Imm* enigme_fond,reponse* r)
{
SDL_BlitSurface(enigme_fond->srf[0],NULL,ecran->srf[0],&enigme_fond->pos);
SDL_BlitSurface(r->reponse1.srf[0],NULL,ecran->srf[0],&r->reponse1.pos);
SDL_BlitSurface(r->reponse2.srf[0],NULL,ecran->srf[0],&r->reponse2.pos);
SDL_BlitSurface(r->reponse3.srf[0],NULL,ecran->srf[0],&r->reponse3.pos);
SDL_BlitSurface(r->reponse4.srf[0],NULL,ecran->srf[0],&r->reponse4.pos);
SDL_Flip(ecran->srf[0]);
}


