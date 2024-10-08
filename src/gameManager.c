
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
        Animation(&(game->textureManager.arrayTexture[0]),skyAnimation);
        hoverEvent(game);
        clickEvent(game);

    } else if (game->state == 1) {
        // Lógica para quando o jogo está em andamento
        HandleInput(game);
        

    } else if (game->state == -1) {
        // Lógica para quando o jogo terminou
        printf("Game End");
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
          //hoverAnimation(&(game->textureManager.arrayTexture[2]));
          Animation(&(game->textureManager.arrayTexture[2]),hoverAnimation);
        }else if (GetMouseX() >= 50 && GetMouseX() <= 105 && GetMouseY() >= 400 && GetMouseY() <= 453){ // Cursor nas Configurações
          //clicou em settings
           Animation(&(game->textureManager.arrayTexture[4]),hoverAnimation);
        } else if (GetMouseX() >= 700 && GetMouseX() <= 755 && GetMouseY() >= 400 && GetMouseY() <= 453) { // Cursor nas Informações
          //clicou em info
          Animation(&(game->textureManager.arrayTexture[1]),hoverAnimation);
          
        } else if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 311 && GetMouseY() <= 371) { // Cursor em Sair
         //clicou em sair
          Animation(&(game->textureManager.arrayTexture[3]),hoverAnimation);
        }else{
            resetAnim(game);
        }

}

void clickEvent(Game *game){
     if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 230 && GetMouseY() <= 290) { // Cursor no Play
           //clicou play
           printf("Play\n");
           game->state=1;
           UnLoadGameTextures(game);
           // dar clear a tudo


        }else if (GetMouseX() >= 50 && GetMouseX() <= 105 && GetMouseY() >= 400 && GetMouseY() <= 453){ // Cursor nas Configurações
          //clicou em settings
           printf("Settings\n");
        } else if (GetMouseX() >= 700 && GetMouseX() <= 755 && GetMouseY() >= 400 && GetMouseY() <= 453) { // Cursor nas Informações
          //clicou em info
           printf("Info\n");
        } else if (GetMouseX() >= 279 && GetMouseX() <= 524 && GetMouseY() >= 311 && GetMouseY() <= 371) { // Cursor em Sair
         //clicou em sair
          printf("Quit\n");
          game->state=-1;
        }
    }
}

void HandleInput(Game *game){
    if (IsKeyDown(KEY_W)) {
      
    } else if (IsKeyDown(KEY_S)) {
        
    } else if (IsKeyDown(KEY_A)) {
      
    } else if (IsKeyDown(KEY_D)) {
     
    }
}