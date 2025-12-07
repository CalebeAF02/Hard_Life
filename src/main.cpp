#include <iostream>
#include <raylib.h>

using namespace std;

int main() {
  InitWindow(1200, 720, "Primeiros passos com a Raylib");

  Texture2D baome_1;
  baome_1 = LoadTexture("C:/Users/caleb/OneDrive/Desktop/repositorios/Hard_Life/docs/imagens/baome/baome_verde_de_frente.png");
  float posx = 50.f;

  while (!WindowShouldClose()) {
    BeginDrawing();
      DrawText("Primeiros passos com a Raylib",50,100,30,RED);
      DrawTexture(baome_1,posx,720 - baome_1.height, WHITE);
    EndDrawing();

  }
  CloseWindow();

  return 0;
}