#ifndef UI_H
#define UI_H
#include "utils.h"
//Texture Manager


//functions
void LoadGameTextures(Game* game); //com sprites pode dar problemas
void UnLoadGameTextures(Game* game);
void Render(Game* game); //organizar no jogo o que fica à frente e o que fica atras

//animation


void Animation(Textures* obj,void(*animationFun)(Textures* obj));
void resetAnim(Game* game);
//animation functions
void hoverAnimation(Textures* obj);
void skyAnimation(Textures* obj);

//Player Animation Functions
void A_StandingAnimation(Textures* obj);
void W_StandingAnimation(Textures* obj);
void S_StandingAnimation(Textures* obj);
void D_StandingAnimation(Textures* obj);

void A_WalkingAnimation(Textures* obj);
void W_WalkingAnimation(Textures* obj);
void S_WalkingAnimation(Textures* obj);
void D_WalkingAnimation(Textures* obj);





#endif /* UI_H */