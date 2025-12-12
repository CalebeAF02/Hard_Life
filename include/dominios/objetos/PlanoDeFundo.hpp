//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_PLANODEFUNDO_HPP
#define HARD_LIFE_PLANODEFUNDO_HPP

#include "raylib.h"
#include <iostream>

using namespace std;

class PlanoDeFundo {
private:
  Texture2D textura;
  float posx, posy;

public:
  PlanoDeFundo(const char *caminho, float startX, float startY)
      : posx(startX), posy(startY) {
    textura = LoadTexture(caminho);
  }

  void desenhar() { DrawTexture(textura, (int)posx, (int)posy, WHITE); }
};

#endif // HARD_LIFE_PLANODEFUNDO_HPP
