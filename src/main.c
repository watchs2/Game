/*MAIN*/

#include "..\includes\gameManager.h"


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

        BeginDrawing();
        ClearBackground(BLACK);

        // Desenhe o jogo
        DrawGame(&game);

        EndDrawing();
    }

    // Feche a janela
    CloseWindow();

    return 0;
}
