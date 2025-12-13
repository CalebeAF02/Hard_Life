//
// Created by caleb on 07/12/2025.
//

#ifndef HARD_LIFE_PERSONAGEM_HPP
#define HARD_LIFE_PERSONAGEM_HPP
#include "../../utils/utilitarios.hpp"
#include "Movimento.hpp"
#include "raylib.h"

class Personagem
{
private:
    Texture2D textura;
    Movimento movimento;
    int largura;
    int altura;

public:
    Personagem(const char* caminho, float x, float y)
        : largura(0), altura(0),movimento({x, y}, {0, 0}, 0, GetScreenHeight(), 0,GetScreenWidth())
    {
        // Carrega imagem
        Image img = LoadImage(caminho);
        largura = img.width / 2;
        altura = img.height / 2;

        // Redimensiona textura
        textura = utilitarios::redimensiona(caminho, largura, altura);
        UnloadImage(img);

        // Atualiza limites com tamanho real
        movimento = Movimento({x, y}, {0, 0}, 0, GetScreenHeight() - altura, 0, GetScreenWidth() - largura);
    }

    void update()
    {
        if (IsKeyDown(KEY_UP))
            movimento.SetVelocidade({0, -6});
        else if (IsKeyDown(KEY_DOWN))
            movimento.SetVelocidade({0, 6});
        else if (IsKeyDown(KEY_LEFT))
            movimento.SetVelocidade({-6, 0});
        else if (IsKeyDown(KEY_RIGHT))
            movimento.SetVelocidade({6, 0});
        else
            movimento.SetVelocidade({0, 0});

        movimento.Atualizar();
    }

    void desenhar()
    {
        Vector2 pos = movimento.GetPosicao();
        DrawTexture(textura, (int)pos.x, (int)pos.y, WHITE);
    }

    void unload() { UnloadTexture(textura); }
};

#endif // HARD_LIFE_PERSONAGEM_HPP
