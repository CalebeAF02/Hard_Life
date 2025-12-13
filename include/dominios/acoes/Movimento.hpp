//
// Created by caleb on 13/12/2025.
//

#ifndef HARD_LIFE_MOVIMENTO_HPP
#define HARD_LIFE_MOVIMENTO_HPP

#include "raylib.h"

class Movimento
{
private:
    Vector2 posicao;
    Vector2 velocidade;
    float limiteSuperior;
    float limiteInferior;
    float limiteEsquerda;
    float limiteDireita;

public:
    Movimento(Vector2 posInicial, Vector2 velInicial,
              float limiteSup, float limiteInf,
              float limiteEsq, float limiteDir)
        : posicao(posInicial), velocidade(velInicial),
          limiteSuperior(limiteSup), limiteInferior(limiteInf),
          limiteEsquerda(limiteEsq), limiteDireita(limiteDir)
    {
    }

    void Atualizar()
    {
        posicao.x += velocidade.x;
        posicao.y += velocidade.y;

        // Mantém dentro dos limites da tela
        if (posicao.y < limiteSuperior) posicao.y = limiteSuperior;
        if (posicao.y > limiteInferior) posicao.y = limiteInferior;
        if (posicao.x < limiteEsquerda) posicao.x = limiteEsquerda;
        if (posicao.x > limiteDireita) posicao.x = limiteDireita;
    }

    void SetVelocidade(Vector2 novaVel) { velocidade = novaVel; }
    Vector2 GetPosicao() const { return posicao; }
};

#endif // HARD_LIFE_MOVIMENTO_HPP
