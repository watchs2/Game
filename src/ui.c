#include "..\includes\ui.h"

void LoadGameTextures(Game* game){
if(game->state==0){
    //loadMenuTextures
    game->textureManager.arrayTexture[0].texture= LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/sky2.png");
    game->textureManager.arrayTexture[1].texture= LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/info.png");
    game->textureManager.arrayTexture[2].texture= LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/play.png");
    game->textureManager.arrayTexture[3].texture= LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/quit.png");
    game->textureManager.arrayTexture[4].texture= LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/setings.png");
    game->textureManager.arrayTexture[5].texture= LoadTexture("C:/Users/ruben/projetos/NewProjects/Game/assets/menuUi/table.png");
    
    game->textureManager.count=6;

    //Set Textures
    //SKY
    game->textureManager.arrayTexture[0].xPosition=-800;
    game->textureManager.arrayTexture[0].yPosition=0;
    //Button Info
    game->textureManager.arrayTexture[1].xPosition=700;
    game->textureManager.arrayTexture[1].yPosition=400;
    game->textureManager.arrayTexture[1].texture.width*= 0.5;
    game->textureManager.arrayTexture[1].texture.height*= 0.5;
    //Button Play
    game->textureManager.arrayTexture[2].xPosition=279;
    game->textureManager.arrayTexture[2].yPosition=230;
    //Button Quit
    game->textureManager.arrayTexture[3].xPosition=279;
    game->textureManager.arrayTexture[3].yPosition=311;

    //Button Settings
    game->textureManager.arrayTexture[4].xPosition=50;
    game->textureManager.arrayTexture[4].yPosition=400;
    game->textureManager.arrayTexture[4].texture.width*= 0.5;
    game->textureManager.arrayTexture[4].texture.height*= 0.5;
    //size 53-53
    //Titulo
    game->textureManager.arrayTexture[5].xPosition=211;
    game->textureManager.arrayTexture[5].yPosition=70;

}else{

}

}
void UnLoadGameTextures(Game* game){
    for(int i=0;i<game->textureManager.count;i++){
        UnloadTexture(game->textureManager.arrayTexture[i].texture);
        
    }
}

void Render(Game* game){
for(int i=0;i<game->textureManager.count;i++){
        DrawTexture(game->textureManager.arrayTexture[i].texture,game->textureManager.arrayTexture[i].xPosition,game->textureManager.arrayTexture[i].yPosition,WHITE);
}
}

void skyAnimation(Textures* obj){
    if(obj->xPosition>=-0.10){
        obj->xPosition=-800;
    }else{
        obj->xPosition+=0.37;
    }
}


void hoverAnimation(Textures* obj){
    if(obj->xPosition==279){
    obj->texture.width=257;
    obj->texture.height=63;
    }else{
    obj->texture.width=56;
    obj->texture.height=56;
    }

}

void resetAnim(Game* game){

     game->textureManager.arrayTexture[1].texture.width= 53;
    game->textureManager.arrayTexture[1].texture.height= 53;
    //Button Play
    game->textureManager.arrayTexture[2].texture.width=245;
    game->textureManager.arrayTexture[2].texture.height=60;
    //Button Quit
    game->textureManager.arrayTexture[3].texture.width=245;
    game->textureManager.arrayTexture[3].texture.height=60;

    game->textureManager.arrayTexture[4].texture.width= 53;
    game->textureManager.arrayTexture[4].texture.height= 53;
}