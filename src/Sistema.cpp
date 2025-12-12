//
// Created by caleb on 07/12/2025.
//

#include "../include/Sistema.hpp"

#include "Sistema.hpp"

void Sistema::executar() {
  InitWindow(1200, 720, "Hard Life");
  SetTargetFPS(60);

  const char *fundoPath = "C:/Users/caleb/OneDrive/Desktop/repositorios/Hard_Life/docs/imagens/africa/Por do Sol.png";
  const char *mensagem = "Seja Bem Vindo";
  const char *personagemPath = "C:/Users/caleb/OneDrive/Desktop/repositorios/Hard_"
                          "Life/docs/imagens/baome/baome_verde_de_frente.png";

  Cenario cenario_1(fundoPath, mensagem, personagemPath, 750, 100);

  while (!WindowShouldClose()) {
    cenario_1.update();

    ClearBackground(RAYWHITE);
    BeginDrawing();
    cenario_1.desenhar();
    EndDrawing();
  }
  cenario_1.unload();
  CloseWindow();
}