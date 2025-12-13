//
// Created by caleb on 13/12/2025.
//

#ifndef HARD_LIFE_UTILITARIOS_HPP
#define HARD_LIFE_UTILITARIOS_HPP

#include "../raylib.h"

#include <string>

using namespace std;

namespace utilitarios {

  const char *local(string nome);

  Texture2D redimensiona(const char *nome_arquivo, int nova_largura, int nova_altura);

};

#endif // HARD_LIFE_UTILITARIOS_HPP
