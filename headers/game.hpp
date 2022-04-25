#include <iostream>

struct Graphics {
  void image(int x, int y);
};

struct Game {
  bool fullscreen;
  bool paused;
  void (*update)(double);
  void (*render)();
  void setSize(int width, int height);
  void setUpdate(void (*callback)(double));
  void setRender(void (*callback)());
  void start();
};

Game createGame();
