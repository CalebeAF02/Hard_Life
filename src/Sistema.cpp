//
// Created by caleb on 07/12/2025.
//

#include "../include/Sistema.hpp"

#include "Sistema.hpp"

void Sistema::executar() {
  InitWindow(1200, 720, "Hard Life");

  Cenario cenario_1;
  while (!WindowShouldClose()) {
    BeginDrawing();
    cenario_1.Desenhar();
    cenario_1.Update();
    EndDrawing();
  }
  CloseWindow();
}
