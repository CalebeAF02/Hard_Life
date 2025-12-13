//
// Created by caleb on 13/12/2025.
//

#include "../../include/utils/utilitarios.hpp"

namespace utilitarios {
const char *local(string nome) {
  return ("C:/Users/caleb/OneDrive/Desktop/repositorios/Hard_Life/" + nome).c_str();
}

Texture2D redimensiona(const char *nome_arquivo, int nova_largura, int nova_altura) {
  Image img = LoadImage(nome_arquivo);   // carrega a imagem
  ImageResize(&img, nova_largura, nova_altura);   // redimensiona para caber na tela
  Texture2D textura = LoadTextureFromImage(img); // cria textura
  UnloadImage(img); // libera a imagem da RAM

  return textura;
}
} // namespace utilitarios