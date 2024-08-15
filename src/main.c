/*MAIN*/

#include "..\includes\gameManager.h"
#include "..\includes\ui.h"


int main() {
    //WINDOW 
    InitWindow(LARGURA, ALTURA, "Game");
    SetTargetFPS(FPS);

    // CREATING A GAME
    Game game;
    InitGame(&game);

    while (!WindowShouldClose()) {
        // Atualize o estado do jogo
        UpdateGame(&game);
        if(game.state==-1){break;}
        BeginDrawing();
        ClearBackground(BLACK);

        // Desenhe o jogo
        DrawGame(&game);

        EndDrawing();
    }

    // Feche a janela
    CloseWindow();
    UnLoadGameTextures(&game);
    return 0;
}
