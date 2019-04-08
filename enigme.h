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
//int state;
}reponse;


void init(Imm* ecran,Imm* enigme_fond,reponse* r);
void load(Imm* enigme_fond,reponse* r);
void display(Imm* ecran,Imm* enigme_fond,reponse* r);




#endif // HEADERNAME_H_INCLUDED0
