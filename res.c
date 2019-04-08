#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <time.h>
#include "res.h"

void init(Imm* ecran,Imm* enigme_fond,reponse* r,Imm* succ,Imm* fail,Imm* ecran2)
{
 ecran2->srf[0]=NULL;
 ecran->srf[0]=NULL;
 enigme_fond->srf[0]=NULL;
 succ->srf[0]=NULL;
 fail->srf[0]=NULL;

 enigme_fond->pos.x=60;
  enigme_fond->pos.y=75;

  succ->pos.x=60;
    succ->pos.y=75;
   fail->pos.x=60;
    fail->pos.y=75;

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

void load(Imm* enigme_fond,reponse* r,Imm* succ,Imm* fail)
{

enigme_fond->srf[0]=IMG_Load("enigme.png");
r->reponse1.srf[0]=IMG_Load("8.png");
r->reponse2.srf[0]=IMG_Load("11.png");
r->reponse3.srf[0]=IMG_Load("14.png");
r->reponse4.srf[0]=IMG_Load("17.png");
succ->srf[0]=IMG_Load("bravo.jpg");
fail->srf[0]=IMG_Load("fail.jpg");
}  

void display(Imm* ecran,Imm* enigme_fond,reponse* r,Imm* succ,Imm* fail,int* test,Imm* ecran2)
{
SDL_BlitSurface(enigme_fond->srf[0],NULL,ecran->srf[0],&enigme_fond->pos);
SDL_BlitSurface(r->reponse1.srf[0],NULL,ecran->srf[0],&r->reponse1.pos);
SDL_BlitSurface(r->reponse2.srf[0],NULL,ecran->srf[0],&r->reponse2.pos);
SDL_BlitSurface(r->reponse3.srf[0],NULL,ecran->srf[0],&r->reponse3.pos);
SDL_BlitSurface(r->reponse4.srf[0],NULL,ecran->srf[0],&r->reponse4.pos);
 if(*test==1)
  {
  ecran2->srf[0]=SDL_SetVideoMode(640,480,32,SDL_HWSURFACE);
  SDL_BlitSurface(succ->srf[0],NULL,ecran2->srf[0],&succ->pos);
   }

  if(*test==2){
    ecran2->srf[0]=SDL_SetVideoMode(640,480,32,SDL_HWSURFACE);
  SDL_BlitSurface(fail->srf[0],NULL,ecran2->srf[0],&fail->pos);
   }

SDL_Flip(ecran->srf[0]);
}




int check_input(SDL_Event event,int done,int* test,Imm* ecran,reponse* r)
{

while( SDL_PollEvent( &event )){
		switch( event.type )
                    { 
                      case SDL_QUIT:
                          done=1;
                            break;

                       case SDL_MOUSEBUTTONDOWN:
 

if( distance(event.motion.x,r->reponse2.pos.x+r->reponse2.srf[0]->w,r->reponse2.pos.x) && distance(event.motion.y,r->reponse2.pos.y+r->reponse2.srf[0]->h,r->reponse2.pos.y) )
	 (*test)=1;
          
 
else if(distance(event.motion.x,r->reponse1.pos.x+r->reponse1.srf[0]->w,r->reponse1.pos.x) && distance(event.motion.y,r->reponse1.pos.y+r->reponse1.srf[0]->h,r->reponse1.pos.y) )

         (*test)=2;

else if(distance(event.motion.x,r->reponse3.pos.x+r->reponse3.srf[0]->w,r->reponse3.pos.x) && distance(event.motion.y,r->reponse3.pos.y+r->reponse3.srf[0]->h,r->reponse3.pos.y) )


         (*test)=2;

else if(distance(event.motion.x,r->reponse4.pos.x+r->reponse4.srf[0]->w,r->reponse4.pos.x) && distance(event.motion.y,r->reponse4.pos.y+r->reponse4.srf[0]->h,r->reponse4.pos.y) )
         (*test)=2;
  
                  

break;
}
}
return done;
}


int distance(int a, int b,int c)
{
if (a<b && a>c)
return 1;
else
return 0;
}
