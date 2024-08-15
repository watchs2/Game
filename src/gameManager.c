
#include "..\includes\gameManager.h"    
#include "..\includes\ui.h"


void InitGame(Game *game) {
    (game->state) = 0; // Inicializa o estado como "Game Not Started"
    game->textureManager.count=0;
    // Inicialize outros dados do jogo aqui
}

void UpdateGame(Game *game) {
  
    if (game->state == 0) {
        // Lógica para quando o jogo não está iniciado
        //GetMouseX()
        skyAnimation(&(game->textureManager.arrayTexture[0]));//animações devem ser na anim
        hoverEvent(game);
        clickEvent(game);

    } else if (game->state == 1) {
        // Lógica para quando o jogo está em andamento
    } else if (game->state == -1) {
        // Lógica para quando o jogo terminou
    }
}

void DrawGame(Game *game) {
    // Desenhe o jogo na tela com base no estado atual
    if(game->textureManager.count==0)
        LoadGameTextures(game);
    Render(game);
}

void hoverEvent(Game *game){
     if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 230 && GetMouseY() <= 290) { // Cursor no Play
           //clicou play
          hoverAnimation(&(game->textureManager.arrayTexture[2]));
        }else if (GetMouseX() >= 50 && GetMouseX() <= 105 && GetMouseY() >= 400 && GetMouseY() <= 453){ // Cursor nas Configurações
          //clicou em settings
          hoverAnimation(&(game->textureManager.arrayTexture[4]));
        } else if (GetMouseX() >= 700 && GetMouseX() <= 755 && GetMouseY() >= 400 && GetMouseY() <= 453) { // Cursor nas Informações
          //clicou em info
          hoverAnimation(&(game->textureManager.arrayTexture[1]));
        } else if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 311 && GetMouseY() <= 371) { // Cursor em Sair
         //clicou em sair
          hoverAnimation(&(game->textureManager.arrayTexture[3]));
        }else{
            resetAnim(game);
        }

}

void clickEvent(){
     if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 230 && GetMouseY() <= 290) { // Cursor no Play
           //clicou play
           printf("Play\n");

        }else if (GetMouseX() >= 50 && GetMouseX() <= 105 && GetMouseY() >= 400 && GetMouseY() <= 453){ // Cursor nas Configurações
          //clicou em settings
           printf("Settings\n");
        } else if (GetMouseX() >= 700 && GetMouseX() <= 755 && GetMouseY() >= 400 && GetMouseY() <= 453) { // Cursor nas Informações
          //clicou em info
           printf("Info\n");
        } else if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 311 && GetMouseY() <= 371) { // Cursor em Sair
         //clicou em sair
          printf("Quit\n");
        }
    }
}


