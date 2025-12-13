//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_PLANODEFUNDO_HPP
#define HARD_LIFE_PLANODEFUNDO_HPP

#include "../../utils/utilitarios.hpp"
#include "raylib.h"

#include <iostream>

using namespace std;

class PlanoDeFundo
{
private:
    Texture2D textura;
    float x, y;

public:
    PlanoDeFundo(const char* caminho, float x, float y)
        : x(x), y(y)
    {
        int largura = GetScreenWidth();
        int altura = GetScreenHeight();

        textura = utilitarios::redimensiona(caminho, largura, altura);
    }

    void desenhar() { DrawTexture(textura, (int)x, (int)y, WHITE); }

    void unload() { UnloadTexture(textura); }
};

#endif // HARD_LIFE_PLANODEFUNDO_HPP
