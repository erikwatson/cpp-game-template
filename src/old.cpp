// #include <SDL2/SDL.h>
// #include <SDL2/SDL_image.h>
// #include <stdio.h>

// struct GameWindow {
//   bool fullScreen = false;

//   int x = SDL_WINDOWPOS_UNDEFINED;
//   int y = SDL_WINDOWPOS_UNDEFINED;

//   int width = 1280;
//   int height = 720;

//   char const* title = "Play With Me";

//   Uint64 prevFrameTime = 0;
//   Uint64 currentFrameTime = 0;
//   float deltaTime = 0;
// };

// int main (int argc, char* argv[]) {
//   SDL_Init(SDL_INIT_VIDEO);

//   SDL_Window *window;
//   GameWindow gameWindow;

//   window = SDL_CreateWindow(
//     gameWindow.title,
//     gameWindow.x,
//     gameWindow.y,
//     gameWindow.width,
//     gameWindow.height,
//     SDL_WINDOW_SHOWN
//   );

//   if (window == NULL) {
//     printf("Error creating window: %s\n", SDL_GetError());
//     return 1;
//   }

//   if (IMG_Init(IMG_INIT_PNG) == 0) {
//     printf("Error SDL2_image Initialization");
//     return 2;
//   }

//   SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

//   if (renderer == NULL) {
//     printf("Error renderer creation");
//     return 3;
//   }

//   SDL_Surface* greenHillsSurface = IMG_Load("./assets/textures/green-hills.png");
  
//   if (greenHillsSurface == NULL) {
//     printf("Error loading image: %s\n", IMG_GetError());
//     return 4;
//   }

//   SDL_Texture* greenHillsTexture = SDL_CreateTextureFromSurface(renderer, greenHillsSurface);
//   SDL_FreeSurface(greenHillsSurface);

//   if (greenHillsTexture == NULL) {
//     printf("Error creating texture");
//     return 5;
//   }

//   // Game Loop 
//   bool running = true;

//   while (running) { 
//     gameWindow.prevFrameTime = gameWindow.currentFrameTime;
//     gameWindow.currentFrameTime = SDL_GetPerformanceCounter();

//     gameWindow.deltaTime = 
//       ((gameWindow.currentFrameTime - gameWindow.prevFrameTime) * 1000) / 
//       SDL_GetPerformanceFrequency();

//     // Input 
//     SDL_Event event;

//     while (SDL_PollEvent(&event)) {
//       switch (event.type) {
//         case (SDL_QUIT):
//           running = false;
//           break;

//         case SDL_KEYDOWN:
//           break;

//         case SDL_KEYUP:
//           switch (event.key.keysym.sym) {
//             case SDLK_ESCAPE:  
//               running = false;
//               break;

//             case SDLK_f:
//               gameWindow.fullScreen = !gameWindow.fullScreen;

//               if (gameWindow.fullScreen) {
//                 SDL_SetWindowFullscreen(
//                   window,
//                   0
//                 );
//               } else {
//                 SDL_SetWindowFullscreen(
//                   window,
//                   SDL_WINDOW_FULLSCREEN_DESKTOP
//                 );
//               }
              
//               break;
//           }

//           break;
//       }
//     }

//     // Update 

//     // Render
//     SDL_RenderClear(renderer);
// 	  SDL_RenderCopy(renderer, greenHillsTexture, NULL, NULL);
// 	  SDL_RenderPresent(renderer);
//   }

//   SDL_DestroyTexture(greenHillsTexture);
//   SDL_DestroyRenderer(renderer);
//   SDL_DestroyWindow(window);
//   IMG_Quit();
//   SDL_Quit();

//   return 0;
// }