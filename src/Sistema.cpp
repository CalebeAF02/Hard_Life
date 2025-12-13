//
// Created by caleb on 07/12/2025.
//

#include "../include/Sistema.hpp"

#include "../include/utils/utilitarios.hpp"
#include "Sistema.hpp"

void Sistema::executar() {
  const int LARGURA = 1800;
  const int ALTURA = 900;

  InitWindow(LARGURA, ALTURA, "Hard Life");

  SetTargetFPS(60);

  Personagem personagem_1(utilitarios::local("asset/imagens/teste/africa/Leao_1.png"),0,700);

  PlanoDeFundo plano_de_fundo(utilitarios::local("asset/imagens/plano_de_fundo/1.jpg"), 0,0);

  while (!WindowShouldClose()) {
    personagem_1.update();

    ClearBackground(RAYWHITE);
    BeginDrawing();
      plano_de_fundo.desenhar();
      personagem_1.desenhar();
    EndDrawing();
  }
  plano_de_fundo.unload();
  personagem_1.unload();

  CloseWindow();
}