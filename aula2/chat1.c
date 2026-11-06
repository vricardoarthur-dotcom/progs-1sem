#include <stdio.h>
#include <string.h>

int main(void) {
  int resposta = 0;
  // fazer um pedido e o usuario conseguir escolher um ou mais itens
  // 321,33321

  printf("o que voce quer pedir ?\n");
  printf("para pedir coca cola digite 1 ?\n");
  printf("para pedir batata frita digite 2 ?\n");
  printf("para pedir hamburguer digite 3 ?\n");
  scanf("%d", &resposta);

  if (resposta == 1) {
    printf("voce pediu coca cola\n");
  } else if (resposta == 2) {
    printf("voce pediu batata frita\n");
  } else if (resposta == 3) {
    printf("voce pediu hamburguer\n");

  } else if (resposta == 12) {
    printf("voce pediu coca cola e batata frita\n");
  } else if (resposta == 13) {
    printf("voce pediu coca cola e hamburguer\n");
  } else if (resposta == 23) {
    printf("voce pediu batata frita e hamburguer\n");
  } else if (resposta == 31) {
    printf("voce pediu hamburguer e coca cola\n");
  } else if (resposta == 32) {
    printf("voce pediu hamburguer e batata frita\n");
  } else if (resposta == 123) {
    printf("voce pediu coca cola, batata frita e hamburguer\n");
  } else if (resposta == 321) {
    printf("voce pediu coca cola, batata frita e hamburguer\n");
  } else if (resposta == 231) {
    printf("voce pediu coca cola, batata frita e hamburguer\n");
  } else {
    printf("opcao invalida\n");
  }
}