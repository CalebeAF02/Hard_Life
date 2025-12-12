//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_PERSONAGEM_HPP
#define HARD_LIFE_PERSONAGEM_HPP
#include "raylib.h"

class Personagem {
private:
  Texture2D textura;
  float posx, posy;
  float destinoX;

public:
  Personagem(const char *caminho, float startX, float startY, float destino)
      : posx(startX), posy(startY), destinoX(destino)
  {
      textura = LoadTexture(caminho);
  }

  void update() {
    // Move até o centro
    if (posx != destinoX)
    {
        posx += 1.0f; // velocidade
    }
  }

  void desenhar() { DrawTexture(textura, (int)posx, (int)posy, WHITE); }

  void unload() { UnloadTexture(textura); }
};

#endif // HARD_LIFE_PERSONAGEM_HPP
