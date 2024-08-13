#include "game.h"
#include "data.h"
#include "ui.h"
#include "audio.h"
#include "raylib.h"

static GameData gameData;

void InitGame(void) {
    InitWindow(800, 600, "My Farm Game");
    InitAudioSystem();
    LoadAudioAssets();
    InitGameData(&gameData);
    InitUI();
}

void UpdateGame(void) {
    HandleUIInput();
    UpdateGameData(&gameData);
}

void DrawGame(void) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawMainMenu();  // ou DrawGameUI(), dependendo do estado do jogo
    EndDrawing();
}

void UnloadGame(void) {
    UnloadGameData(&gameData);
    UnloadAudioAssets();
    CloseAudioDevice();
    CloseWindow();
}
