#include <SDL2/SDL.h>
#include <iostream>

bool Quit = false;
int BkW = 900;
int BkH = 900;
int BrickW = 80;
int BrickH = 35;
int Ball_X = 40;
int Ball_Y = 400;
int Bat_X = 300/2;
int Bat_Y = 900 - 250;
int Ball_X_Vel = 1;
int Ball_Y_Vel = 1;
int TotalBrickCount = 40;
int BrickDestroyCount = 0;

 SDL_Surface* Brick;
 SDL_Texture* BrickTexture;
 SDL_Rect BrickRect[5][8];

 void InitializeBrick()
 {
     
     BrickRect[0][0].x = 50;
     BrickRect[0][0].y = 50;
     BrickRect[0][0].h = BrickH;
     BrickRect[0][0].w = BrickW;

        BrickRect[0][1].x = 150;
     BrickRect[0][1].y = 50;
     BrickRect[0][1].h = BrickH;
     BrickRect[0][1].w = BrickW;

        BrickRect[0][2].x = 250;
     BrickRect[0][2].y = 50;
     BrickRect[0][2].h = BrickH;
     BrickRect[0][2].w = BrickW;

        BrickRect[0][3].x = 350;
     BrickRect[0][3].y = 50;
     BrickRect[0][3].h = BrickH;
     BrickRect[0][3].w = BrickW;

       BrickRect[0][4].x = 450;
     BrickRect[0][4].y = 50;
     BrickRect[0][4].h = BrickH;
     BrickRect[0][4].w = BrickW;

      BrickRect[0][5].x = 550;
     BrickRect[0][5].y = 50;
     BrickRect[0][5].h = BrickH;
     BrickRect[0][5].w = BrickW;

      BrickRect[0][6].x = 650;
     BrickRect[0][6].y = 50;
     BrickRect[0][6].h = BrickH;
     BrickRect[0][6].w = BrickW;

     BrickRect[0][7].x = 750;
     BrickRect[0][7].y = 50;
     BrickRect[0][7].h = BrickH;
     BrickRect[0][7].w = BrickW;

 


       BrickRect[1][0].x = 50;
     BrickRect[1][0].y = 100;
     BrickRect[1][0].h = BrickH;
     BrickRect[1][0].w = BrickW;

        BrickRect[1][1].x = 150;
     BrickRect[1][1].y = 100;
     BrickRect[1][1].h = BrickH;
     BrickRect[1][1].w = BrickW;

        BrickRect[1][2].x = 250;
     BrickRect[1][2].y = 100;
     BrickRect[1][2].h = BrickH;
     BrickRect[1][2].w = BrickW;

        BrickRect[1][3].x = 350;
     BrickRect[1][3].y = 100;
     BrickRect[1][3].h = BrickH;
     BrickRect[1][3].w = BrickW;

       BrickRect[1][4].x = 450;
     BrickRect[1][4].y = 100;
     BrickRect[1][4].h = BrickH;
     BrickRect[1][4].w = BrickW;

     BrickRect[1][5].x = 550;
     BrickRect[1][5].y = 100;
     BrickRect[1][5].h = BrickH;
     BrickRect[1][5].w = BrickW;

      BrickRect[1][6].x = 650;
     BrickRect[1][6].y = 100;
     BrickRect[1][6].h = BrickH;
     BrickRect[1][6].w = BrickW;

      BrickRect[1][7].x = 750;
     BrickRect[1][7].y = 100;
     BrickRect[1][7].h = BrickH;
     BrickRect[1][7].w = BrickW;






     BrickRect[2][0].x = 50;
     BrickRect[2][0].y = 150;
     BrickRect[2][0].h = BrickH;
     BrickRect[2][0].w = BrickW;

     BrickRect[2][1].x = 150;
     BrickRect[2][1].y = 150;
     BrickRect[2][1].h = BrickH;
     BrickRect[2][1].w = BrickW;

     BrickRect[2][2].x = 250;
     BrickRect[2][2].y = 150;
     BrickRect[2][2].h = BrickH;
     BrickRect[2][2].w = BrickW;

     BrickRect[2][3].x = 350;
     BrickRect[2][3].y = 150;
     BrickRect[2][3].h = BrickH;
     BrickRect[2][3].w = BrickW;

     BrickRect[2][4].x = 450;
     BrickRect[2][4].y = 150;
     BrickRect[2][4].h = BrickH;
     BrickRect[2][4].w = BrickW;

     BrickRect[2][5].x = 550;
     BrickRect[2][5].y = 150;
     BrickRect[2][5].h = BrickH;
     BrickRect[2][5].w = BrickW;

     BrickRect[2][6].x = 650;
     BrickRect[2][6].y = 150;
     BrickRect[2][6].h = BrickH;
     BrickRect[2][6].w = BrickW;


     BrickRect[2][7].x = 750;
     BrickRect[2][7].y = 150;
     BrickRect[2][7].h = BrickH;
     BrickRect[2][7].w = BrickW;





     BrickRect[3][0].x = 50;
     BrickRect[3][0].y = 200;
     BrickRect[3][0].h = BrickH;
     BrickRect[3][0].w = BrickW;

     BrickRect[3][1].x = 150;
     BrickRect[3][1].y = 200;
     BrickRect[3][1].h = BrickH;
     BrickRect[3][1].w = BrickW;

     BrickRect[3][2].x = 250;
     BrickRect[3][2].y = 200;
     BrickRect[3][2].h = BrickH;
     BrickRect[3][2].w = BrickW;

     BrickRect[3][3].x = 350;
     BrickRect[3][3].y = 200;
     BrickRect[3][3].h = BrickH;
     BrickRect[3][3].w = BrickW;

     BrickRect[3][4].x = 450;
     BrickRect[3][4].y = 200;
     BrickRect[3][4].h = BrickH;
     BrickRect[3][4].w = BrickW;

     BrickRect[3][5].x = 550;
     BrickRect[3][5].y = 200;
     BrickRect[3][5].h = BrickH;
     BrickRect[3][5].w = BrickW;

     BrickRect[3][6].x = 650;
     BrickRect[3][6].y = 200;
     BrickRect[3][6].h = BrickH;
     BrickRect[3][6].w = BrickW;


     BrickRect[3][7].x = 750;
     BrickRect[3][7].y = 200;
     BrickRect[3][7].h = BrickH;
     BrickRect[3][7].w = BrickW;

     

     BrickRect[4][0].x = 50;
     BrickRect[4][0].y = 250;
     BrickRect[4][0].h = BrickH;
     BrickRect[4][0].w = BrickW;

     BrickRect[4][1].x = 150;
     BrickRect[4][1].y = 250;
     BrickRect[4][1].h = BrickH;
     BrickRect[4][1].w = BrickW;

     BrickRect[4][2].x = 250;
     BrickRect[4][2].y = 250;
     BrickRect[4][2].h = BrickH;
     BrickRect[4][2].w = BrickW;

     BrickRect[4][3].x = 350;
     BrickRect[4][3].y = 250;
     BrickRect[4][3].h = BrickH;
     BrickRect[4][3].w = BrickW;

     BrickRect[4][4].x = 450;
     BrickRect[4][4].y = 250;
     BrickRect[4][4].h = BrickH;
     BrickRect[4][4].w = BrickW;

     BrickRect[4][5].x = 550;
     BrickRect[4][5].y = 250;
     BrickRect[4][5].h = BrickH;
     BrickRect[4][5].w = BrickW;

     BrickRect[4][6].x = 650;
     BrickRect[4][6].y = 250;
     BrickRect[4][6].h = BrickH;
     BrickRect[4][6].w = BrickW;

     BrickRect[4][7].x = 750;
     BrickRect[4][7].y = 250;
     BrickRect[4][7].h = BrickH;
     BrickRect[4][7].w = BrickW;

     

 }
   

void HandleEvent()
{
        SDL_Event event;
        if(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                Quit = true;
            }
            else if(event.type ==   SDL_KEYDOWN)
            {
                if(event.key.keysym.sym == SDLK_LEFT && Bat_X >= 0)
                {
                    Bat_X -= 80;
                }
                else if(event.key.keysym.sym == SDLK_RIGHT && Bat_X <= BkW - 60)
                {
                    Bat_X += 80;
                }
            }
        }
}

void MoveBall()
{
    Ball_X+=Ball_X_Vel * 5;
    Ball_Y+=Ball_Y_Vel * 5;
}

bool CheckBatBallCollision()
{
    if(Ball_X + 10 < Bat_X || Ball_X > Bat_X + 80||Ball_Y + 10 < Bat_Y )
    {
        return false;
    }
    

    return true;
}

bool CheckBallBrickCollision(SDL_Rect BrickRect)
{
    if(Ball_X + 10 < BrickRect.x || Ball_X > BrickRect.x + BrickW || Ball_Y + 10 < BrickRect.y || Ball_Y > BrickRect.y + BrickH)
    {
        return false;
    }
    return true;
}


void BallBrickCollision()
{
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 8;j++)
        {
            if(CheckBallBrickCollision(BrickRect[i][j]))
            {
                SDL_Log("COLLIDE");
                BrickRect[i][j].x = 10000;
                BrickDestroyCount += 1;
                Ball_Y_Vel = -Ball_Y_Vel;
            }
        }
    }
}

void ShowWinScreen(SDL_Renderer* rend)
{
    if(TotalBrickCount == BrickDestroyCount)
    {
        SDL_SetRenderDrawColor(rend,255,255,255,255);
        SDL_RenderClear(rend);
        SDL_Surface* WinScreen = SDL_LoadBMP("win.bmp");
        SDL_Texture* WinTexture = SDL_CreateTextureFromSurface(rend,WinScreen);
        SDL_Rect rect;
        rect.x = 0;
        rect.y = 0;
        rect.w = 900;
        rect.h = 900;
        SDL_RenderCopy(rend,WinTexture,NULL,&rect);
        
    }
}


void ShowGameOver(SDL_Renderer* rend)
{
    if(Ball_Y >= BkH)
    {
    SDL_Surface* GameOverScreen = SDL_LoadBMP("d.bmp");
    SDL_Texture* GameOverTexture = SDL_CreateTextureFromSurface(rend,GameOverScreen);
     SDL_Rect rect;
        rect.x = 0;
        rect.y = 0;
        rect.w = 900;
        rect.h = 900;
    SDL_RenderCopy(rend,GameOverTexture,NULL,&rect);
    }

}


void BallCollision()
{
    if(Ball_X <= 0 || Ball_X >= BkW - 10)
    {
        Ball_X_Vel = -Ball_X_Vel;
    }
    else if(Ball_Y <= 0)
    {
        Ball_Y_Vel = -Ball_Y_Vel;
    }
    else if(CheckBatBallCollision())
    {
        //SDL_Log("Collide");
        Ball_Y_Vel = -Ball_Y_Vel;
    }
    
}






int main()
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER);

    SDL_Window* Window = SDL_CreateWindow("Demo",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,900,900,SDL_WINDOW_OPENGL);
        

    SDL_Renderer* Renderer = SDL_CreateRenderer(Window,-1,SDL_RENDERER_PRESENTVSYNC);

    SDL_Surface* Background = SDL_LoadBMP("bk.bmp");
    SDL_Texture* BackgroundTexture = SDL_CreateTextureFromSurface(Renderer,Background);
    SDL_Rect Bkrect;
    Bkrect.x = 0;
    Bkrect.y = 0;
    Bkrect.w = BkW;
    Bkrect.h = BkH;

    SDL_Surface* Ball = SDL_LoadBMP("ball.bmp");
    SDL_Texture* BallTexture = SDL_CreateTextureFromSurface(Renderer,Ball);   
    SDL_Rect Ballrect;
    Ballrect.w = 30;
    Ballrect.h = 30;

    SDL_Surface* Bat = SDL_LoadBMP("bat.bmp");
    SDL_Texture* BatTexture = SDL_CreateTextureFromSurface(Renderer,Bat);
    SDL_Rect Batrect;
    Batrect.w = 80;
    Batrect.h = 30;

    Brick = SDL_LoadBMP("brick.bmp");
    BrickTexture = SDL_CreateTextureFromSurface(Renderer,Brick);
   InitializeBrick();


    


    while (!Quit)
    {
        HandleEvent();
        MoveBall();
        BallCollision();
        BallBrickCollision();
        
         Ballrect.x = Ball_X;
         Ballrect.y = Ball_Y;
         Batrect.x = Bat_X;
         Batrect.y = Bat_Y;
        
        SDL_RenderCopy(Renderer,BackgroundTexture,NULL,&Bkrect);
        SDL_RenderCopy(Renderer,BallTexture,NULL,&Ballrect);
        SDL_RenderCopy(Renderer,BatTexture,NULL,&Batrect);
        for(int i = 0;i<5;i++)
        {
        for(int j=0;j<8;j++)
        {
            SDL_RenderCopy(Renderer,BrickTexture,NULL,&BrickRect[i][j]);
        }
        }
        ShowWinScreen(Renderer);
        ShowGameOver(Renderer);
        SDL_RenderPresent(Renderer);
        SDL_RenderClear(Renderer);


        
    }

    SDL_DestroyWindow(Window);
    
    SDL_Quit();
    



     return 0;


}