//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_FALA_HPP
#define HARD_LIFE_FALA_HPP
#include "raylib.h"
#include <iostream>

using namespace std;

class Texto
{
private:
    string conteudo;
    int x, y;
    Color cor;

public:
    Texto(string texto, int px, int py, int t, Color color)
        : conteudo(texto), x(px), y(py), cor(color)
    {
    }

    void Desenhar() { DrawText(conteudo.c_str(), x, y, 50, cor); }
};

#endif // HARD_LIFE_FALA_HPP
