#include <hal/debug.h>
#include <hal/xbox.h>
#include <hal/video.h>
#include <windows.h>
#include "game.h"
#include <SDL.h>


int ball_x = 20;
int ball_y = 140;
int ball_vel_x = 1;
int ball_vel_y = 1;
int BrickW = 80;
int BrickH = 30;
int bkw = 640;
int bkh = 480;
int bat_x = bkw / 2;
int bat_y = 480 - 50;
int TotalBrickCount = 18;
int BrickDestroyCount = 0;

 SDL_Surface* Brick;
 SDL_Texture* BrickTexture;
 SDL_Rect BrickRect[3][6];

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

  





    /* BrickRect[3][0].x = 50;
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
     BrickRect[4][5].w = BrickW;*/

   

     

 }
   
void RebootXbox()
{
  debugPrint("Rebooting Xbox in 5 seconds");
  Sleep(5000);
  XReboot();
}
void MoveBall()
{
    ball_x+=ball_vel_x * 4;
    ball_y+=ball_vel_y * 4;
}

void HandleEvent()
{
  SDL_GameController *pad = NULL;
           
  
  SDL_Event Event;
  if(SDL_PollEvent(&Event))
  {
       if (Event.type == SDL_CONTROLLERDEVICEADDED) {
        SDL_GameController *new_pad = SDL_GameControllerOpen(Event.cdevice.which);
        if (pad == NULL) {
          pad = new_pad;
        }
      }

       else if (Event.type == SDL_CONTROLLERDEVICEREMOVED) {
        if (pad == SDL_GameControllerFromInstanceID(Event.cdevice.which)) {
          pad = NULL;
        }
        SDL_GameControllerClose(SDL_GameControllerFromInstanceID(Event.cdevice.which));
      }

       else if (Event.type == SDL_JOYAXISMOTION && Event.caxis.axis == 0 || Event.type == SDL_CONTROLLERBUTTONDOWN) {
        
        if (Event.caxis.value < 0 && bat_x > 0 || Event.cbutton.button == SDL_CONTROLLER_BUTTON_DPAD_LEFT && bat_x > 0) {
          bat_x -= 50;
        }
        else if(Event.caxis.value > 0 && bat_x < bkw - 60 || Event.cbutton.button == SDL_CONTROLLER_BUTTON_DPAD_RIGHT && bat_x < bkw - 60)
        {
          bat_x += 50;
        }
        
      }
    }

  }




void BounceBallWithBounds()
{
  if(ball_x <= 0 || ball_x >= bkw - 20)
  {
    ball_vel_x = -ball_vel_x;
  }
  else if(ball_y <=0)
  {
    ball_vel_y = -ball_vel_y;
  }
}

bool CheckBatBallCollision()
{
  if(ball_x + 20 < bat_x || ball_x > bat_x + 60 || ball_y + 20 < bat_y)
  {
    return false;
  }
  return true;
}

void HandleBatBallCollision()
{
  if(CheckBatBallCollision())
  {
   
    ball_vel_y = -ball_vel_y;
  }
}






bool IsBallCollidingWithBrick(SDL_Rect BrickRect)
{
  
       if(ball_x + 20 < BrickRect.x || ball_x > BrickRect.x + BrickW || ball_y + 20 < BrickRect.y || ball_y > BrickRect.y)
       {
         return false;
       }

       return true;
}

void HandleBallBrickCollision()
{
  for(int i = 0;i < 3;i++)
  {
    for(int j = 0;j < 6;j++)
    {
       if(IsBallCollidingWithBrick(BrickRect[i][j]))
       {
         
         ball_vel_y = -ball_vel_y;
         BrickRect[i][j].x = 3000;
         
         BrickDestroyCount += 1;
       }
    }
  }
 

}



void WinHandle(SDL_Renderer* rend)
{
  if(BrickDestroyCount == TotalBrickCount)
  {

      SDL_SetRenderDrawColor(rend,255,255,255,255);
      SDL_RenderClear(rend);  
      SDL_Surface* WinScreen = SDL_LoadBMP("D:\\resources\\win.bmp");
      SDL_Texture* WinScreenTexture = SDL_CreateTextureFromSurface(rend,WinScreen);
      SDL_Rect rect;
      rect.x = 0;
      rect.y = 0;
      rect.w = 640;
      rect.h = 480;
      SDL_RenderCopy(rend,WinScreenTexture,NULL,&rect);
      SDL_RenderPresent(rend);
      RebootXbox();
  }
}

void GameOverHandle(SDL_Renderer* Rend)
{
  if(ball_y > bkh)
  {
     SDL_SetRenderDrawColor(Rend,0,0,0,255);
     SDL_RenderClear(Rend); 
     SDL_Surface* GameOver = SDL_LoadBMP("D:\\resources\\d.bmp");
     SDL_Texture* GameOverTexture = SDL_CreateTextureFromSurface(Rend,GameOver);
     SDL_Rect rect;
     rect.x = 0;
     rect.y = 0;
     rect.w = 640;
     rect.h = 480;
     SDL_RenderCopy(Rend,GameOverTexture,NULL,&rect);
     SDL_RenderPresent(Rend);
     RebootXbox();
  }

}




int main(void)
{
    XVideoSetMode(640, 480, 32, REFRESH_DEFAULT);

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER);

    game obj = game(2);
    int a = 34;

    
    

    SDL_Window* window      = nullptr;
    SDL_Renderer* renderer  = nullptr;
    
    window = SDL_CreateWindow("demo",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,640,480,0);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);
  
    //SDL_SetRenderDrawColor(renderer, 0x1d, 0x1d, 0x1d, 0xff);

    
    SDL_Surface* Ball = SDL_LoadBMP("D:\\resources\\ball.bmp");
    if(Ball == NULL)
    {
      debugPrint("%s",SDL_GetError());
      while(true) SwitchToThread();
      return 0;

    }

    SDL_Texture* BallTexture = SDL_CreateTextureFromSurface(renderer,Ball);
    if(BallTexture == NULL)
    {
      debugPrint("%s",SDL_GetError());
      while(true) SwitchToThread();
      return 0;
    }

    SDL_Rect BallRect;
    BallRect.w = 20;
    BallRect.h = 20;

    


    SDL_Surface* Background = SDL_LoadBMP("D:\\resources\\bk.bmp");
    if(Background == NULL)
    {
      debugPrint("%s",SDL_GetError());
      while (true) SwitchToThread();
      return 0;
    }

    SDL_Texture* BackgroundTexture = SDL_CreateTextureFromSurface(renderer,Background);
    if(BackgroundTexture == NULL)
    {
      debugPrint("%s",SDL_GetError());
      while(true) SwitchToThread();
      return 0;
    }
    
  SDL_Rect BkRect;
  BkRect.x = 0;
  BkRect.y = 0;
  BkRect.w = 640;
  BkRect.h = 480;

  SDL_Surface* Bat = SDL_LoadBMP("D:\\resources\\bat.bmp");
  if(Bat == NULL)
  {
      debugPrint("%s",SDL_GetError());
      while (true) SwitchToThread();
      return 0;

  }

  SDL_Texture* BatTexture = SDL_CreateTextureFromSurface(renderer,Bat);
  if(BatTexture == NULL)
  {
      debugPrint("%s",SDL_GetError());
      while (true) SwitchToThread();
      return 0;
  }

  SDL_Rect BatRect;
  BatRect.w = 60;
  BatRect.h = 30;

    Brick = SDL_LoadBMP("D:\\resources\\brick.bmp");
    BrickTexture = SDL_CreateTextureFromSurface(renderer,Brick);
    InitializeBrick();



    while (true)
    {
        HandleEvent();
        MoveBall();
        BounceBallWithBounds();
        HandleBatBallCollision();
        HandleBallBrickCollision();
       
        BallRect.x = ball_x;
        BallRect.y = ball_y;
        BatRect.x = bat_x;
        BatRect.y = bat_y;
        
       
        SDL_RenderCopy(renderer, BackgroundTexture, NULL, &BkRect);
         SDL_RenderCopy(renderer, BallTexture, NULL, &BallRect);
         SDL_RenderCopy(renderer,BatTexture,NULL,&BatRect);
          WinHandle(renderer);
          GameOverHandle(renderer);
        for(int i = 0;i<3;i++)
        {
        for(int j=0;j<6;j++)
        {
            SDL_RenderCopy(renderer,BrickTexture,NULL,&BrickRect[i][j]);
        }
        }
         SDL_RenderPresent(renderer);
         SDL_RenderClear(renderer);
         
    }

    SDL_Quit();

    return 0;
}
