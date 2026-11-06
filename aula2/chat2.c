#include <stdio.h>
#include <string.h>

int main(void) {
  char modelo[100] = "cobalto";
  // fazer um pedido e o usuario conseguir escolher um ou mais itens
  printf("1.o valor da variavel modelo e: %s\n", modelo);
  printf("qual o modelo do seu carro ?\n");
  printf("2.o valor da variavel modelo e: %s\n", modelo);

  scanf("%s", modelo);
  printf("3.o valor da variavel modelo e: %s\n", modelo);
}