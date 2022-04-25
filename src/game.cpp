#include "../headers/game.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

struct GameWindow {
  bool fullScreen = false;

  int x = SDL_WINDOWPOS_UNDEFINED;
  int y = SDL_WINDOWPOS_UNDEFINED;

  int width = 1280;
  int height = 720;

  char const* title = "Play With Me";

  Uint64 prevFrameTime = 0;
  Uint64 currentFrameTime = 0;
  float deltaTime = 0;
};

Game createGame () {
  Game g;
  return g;
}