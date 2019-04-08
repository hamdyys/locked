#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>

typedef struct 
{
 SDL_Surface * srf;
 SDL_Rect pos;
}Imm;

void init(Imm * e) ;
void  load (Imm* screen  , char image [],Imm *e,int *alea) ;
 int solution_e (char image []) ;
int check_input (int * running,int *run);
void display (Imm* screen,int s,int r,Imm *en) ;
