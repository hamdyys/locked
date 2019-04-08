#ifndef HEADERNAME_H_INCLUDED
#define HEADERNAME_H_INCLUDED

typedef struct
{
 SDL_Surface *srf[4];
 SDL_Rect pos;
}Imm;
typedef struct
{
Imm reponse1;
Imm reponse2;
Imm reponse3;
Imm reponse4;
int state;
}reponse;


void init(Imm* ecran,Imm* enigme_fond,reponse* r,Imm* succ,Imm* fail,Imm* ecran2);
void load(Imm* enigme_fond,reponse* r,Imm* succ,Imm* fail); 
void display(Imm* ecran,Imm* enigme_fond,reponse* r,Imm* succ,Imm* fail,int* test,Imm* ecran2);
int check_input(SDL_Event event,int done,int* test,Imm* ecran,reponse* r);
int distance(int a, int b,int c);


#endif // HEADERNAME_H_INCLUDED0
