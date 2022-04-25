#include <stdio.h>
#include <iostream>

#include "../headers/game.h"

void update (double dt) {
  printf("%f \n", dt);
}

void render () {
  printf("Rendering \n");
  // SDL_RenderClear(renderer);
// 	  SDL_RenderCopy(renderer, greenHillsTexture, NULL, NULL);
// 	  SDL_RenderPresent(renderer);
}

int main (int argc, char* argv[]) {
  static Game game = createGame();
  
  game.setSize(1280, 1080);

  game.setUpdate(update);
  game.setRender(render);
  
  game.start();

  return 0;
}
