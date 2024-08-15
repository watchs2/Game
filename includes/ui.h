#ifndef UI_H
#define UI_H
#include "utils.h"
//Texture Manager


//functions
void LoadGameTextures(Game* game);
void UnLoadGameTextures(Game* game);
void Render(Game* game); //organizar no jogo o que fica à frente e o que fica atras

//animation

bool Anim(Textures* obj, void (*fun_ptr)(Texture2D*));
void resetAnim(Game* game);
//animation functions
void hoverAnimation(Textures* obj);
void skyAnimation(Textures* obj);




#endif /* UI_H */