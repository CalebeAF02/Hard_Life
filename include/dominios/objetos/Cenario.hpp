//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_CENARIO_HPP
#define HARD_LIFE_CENARIO_HPP

#include "Personagem.hpp"
#include "PlanoDeFundo.hpp"
#include "Texto.hpp"
#include "raylib.h"

class Cenario {
private:
  PlanoDeFundo plano_de_fundo;
  Texto texto;
  Personagem personagem;

public:
  // Construtor flexível: recebe caminhos e mensagem
  Cenario(const char *fundoPath, const char *mensagem,
          const char *personagemPath, int alturaJanela, int larguraJanela)
      : plano_de_fundo(fundoPath, 0, 0), texto(mensagem, 50, 100, 70, WHITE),
        personagem(personagemPath, -335, (alturaJanela - 745) / 2,
                   larguraJanela / 2) {}

  void update() { personagem.update(); }

  void desenhar() {
    plano_de_fundo.desenhar();
    personagem.desenhar();
    texto.Desenhar();
  }

  void unload() { personagem.unload(); }
};

#endif // HARD_LIFE_CENARIO_HPP
