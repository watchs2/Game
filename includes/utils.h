// utils.h
#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <raylib.h>
#include <stdlib.h>

#define FPS 60
#define ALTURA 500
#define LARGURA 800
#define MAX_TEXTURES 100

typedef struct{
    Texture2D texture;
    float xPosition;
    float yPosition;
}Textures;

typedef struct TextureManager {
    Textures arrayTexture[MAX_TEXTURES];
    int count;
} TextureManager;

// Estrutura para o gerenciamento do jogo
typedef struct Game {
    int state; // 0-> Game Not Started, 1-> Game Started, -1-> End Game
    // Adicione outros dados relacionados ao jogo aqui
    TextureManager textureManager;
} Game;

typedef struct{
    float x;
    float y;
    //Pointer functions para animações
}Player;






#endif /* UTILS_H */
