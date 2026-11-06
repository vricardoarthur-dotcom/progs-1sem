#include <stdio.h>
#include <string.h>

int main(void) {
  int resposta = 0;

  while (resposta != 5) {

    printf("como posso te ajudar hoje?\n");
    printf("as opcoes disponiveis sao:\n");
    printf("1 - ver cardapio\n");
    printf("2 - detalhes do pedido\n");
    printf("3 - horario de atendimento\n");
    printf("4 - falar com humano\n");
    printf("5 - sair\n");
    scanf("%d", &resposta);

    if (resposta == 1) {
      printf("o cardapio do kfc e:\n");
      printf("1 - frango frito\n");
      printf("2 - batata frita\n");
      printf("3 - refrigerante\n");
    } else if (resposta == 2) {
      printf("detalhes do pedido:\n");
      printf("pedido em andamento\n");
    } else if (resposta == 3) {
      printf("horario de atendimento:\n");
      printf("segunda a sexta: 10h - 22h\n");
      printf("sabado e domingo: 12h - 20h\n");
    } else if (resposta == 4) {
      printf("falando com humano...\n");
    } else if (resposta == 5) {
      printf("saindo do programa...\n");
    } else {
      printf("opcao invalida\n");
    }
  }

  return 0;
}