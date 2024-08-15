#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

//includes
#include "utils.h"

//functions
void InitGame(Game *game);
void UpdateGame(Game *game);
void DrawGame(Game *game);
//User interactions
void clickEvent();
void hoverEvent();


#endif /* GAMEMANAGER_H */
