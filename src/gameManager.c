
#include "..\includes\gameManager.h"    
#include "..\includes\ui.h"


void InitGame(Game *game) {
    game->state = 0; // Inicializa o estado como "Game Not Started"
    game->textureManager = NULL;
    // Inicialize outros dados do jogo aqui
}

void UpdateGame(Game *game) {
  
    if (game->state == 0) {
        // Lógica para quando o jogo não está iniciado
        //data etc

    } else if (game->state == 1) {
        // Lógica para quando o jogo está em andamento
    } else if (game->state == -1) {
        // Lógica para quando o jogo terminou
    }
}

void DrawGame(Game *game) {
    // Desenhe o jogo na tela com base no estado atual
    if (game->state == 0) {
        
        //if(game->textureManager==NULL){LoadGameTextures(game);} //provisorio
        Texture2D myTexture = LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/sky2.png");
         DrawTexture(myTexture,0,0,WHITE);

    } else if (game->state == 1) {
        // Desenhe o conteúdo do jogo
    } else if (game->state == -1) {
        // Desenhe a tela de fim de jogo
    }
}