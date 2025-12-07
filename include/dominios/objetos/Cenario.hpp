//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_CENARIO_HPP
#define HARD_LIFE_CENARIO_HPP

#include "PlanoDeFundo.hpp"
#include "Personagem.hpp"
#include "Texto.hpp"
#include "raylib.h"

class Cenario {
private:
  PlanoDeFundo fundo;
  Texto texto;
  Personagem baome;

public:
  Cenario() : fundo(
                  "C:/Users/caleb/OneDrive/Desktop/repositorios/Hard_Life/docs/imagens/africa/plano de fundo.png",
                  0, 0),
              texto("Primeiros passos com a Raylib", 50, 100, 70, WHITE),
              baome(
                  "C:/Users/caleb/OneDrive/Desktop/repositorios/Hard_Life/docs/imagens/baome/baome_verde_de_frente.png",
                  0, 720, 500) {
  }

  void Update() {
    baome.Update();
  }

  void Desenhar() {
    fundo.Desenhar();
    texto.Desenhar();
    baome.Desenhar();
  }

  void Unload() {
    baome.Unload();
  }
};


#endif //HARD_LIFE_CENARIO_HPP