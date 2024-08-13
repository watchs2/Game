#ifndef UI_H
#define UI_H
#include "utils.h"
//Texture Manager


//functions
void LoadGameTextures(int);
void UnLoadGameTextures(void);
void Render(void); //organizar no jogo o que fica à frente e o que fica atras

//animation

bool Anim(Texture2D* textures, void (*fun_ptr)(Texture2D*));

//animation functions
void hooverAnimation(Texture2D* textures);
void hooverAnimation(Texture2D* textures);




#endif /* UI_H */