#include <stdio.h>
#include <string.h>

char pedido[10][100] = {
      "status: estamos preparando seu pedido\nnumero de pedido "
      "e: 1\nmetodo de pagamento: pix",
      "status: seu pedido saiu para entrega\nnumero de pedido "
      "e: 2\nmetodo de pagamento: dinheiro",
      "status: seu pedido chegou\nnumero de pedido e: "
      "3\nmetodo de pagamento: cartao"};

int quebrarlinha() {
  printf("\n");
  printf("\n");
  printf("=====================================================");
  printf("\n");
  printf("\n");
}

int mostrarcardapio() {
  quebrarlinha();
  printf("o cardapio do central hamburguer e:\n");
  printf("1 - coca cola\n");
  printf("2 - batata frita\n");
  printf("3 - hamburguer\n");
}

char *escolheritem(int resposta) {

  if (resposta == 1) {
    return "seus itens: coca cola\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 1\nmetodo de pagamento: pix";
  } else if (resposta == 2) {
    return "seus itens: batata frita\nstatus: seu pedido saiu para entrega\nnumero de pedido "
           "e: 2\nmetodo de pagamento: dinheiro";
  } else if (resposta == 3) {
    return "seus itens: hamburguer\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 3\nmetodo de pagamento: cartao";
  } else if (resposta == 12) {
    return "seus itens: coca cola e batata frita\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 12\nmetodo de pagamento: pix";
  } else if (resposta == 13) {
    return "seus itens: coca cola e hamburguer\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 13\nmetodo de pagamento: pix";
  } else if (resposta == 23) {
    return "seus itens: batata frita e hamburguer\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 23\nmetodo de pagamento: dinheiro";
  } else if (resposta == 31) {
    return "seus itens: hamburguer e coca cola\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 31\nmetodo de pagamento: cartao";
  } else if (resposta == 32) {
    return "seus itens: hamburguer e batata frita\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 32\nmetodo de pagamento: cartao";
  } else if (resposta == 123) {
    return "seus itens: coca cola, batata frita e hamburguer\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 123\nmetodo de pagamento: pix";
  } else if (resposta == 321) {
    return "seus itens: coca cola, batata frita e hamburguer\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 321\nmetodo de pagamento: pix";
  } else if (resposta == 231) {
    return "seus itens: coca cola, batata frita e hamburguer\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 231\nmetodo de pagamento: dinheiro";
  } else {
    return "opcao invalida\n";
  }
}

int fazerpedido() {
  mostrarcardapio();
  int resposta = 0;
  quebrarlinha();
  printf("o que voce quer pedir ?\n");
  scanf("%d", &resposta);
  quebrarlinha();
  strcpy(pedido[resposta - 1], escolheritem(resposta));
  quebrarlinha();
}

int horariodeatendimento() {
  quebrarlinha();
  printf("horario de atendimento:\n");
  printf("segunda a sexta: 10h - 22h\n");
  printf("sabado e domingo: 12h - 20h\n");
  quebrarlinha();
}

int detalhesdopedido() {
  int numpedido = 0;
  
  quebrarlinha();
  printf("digite o numero do seu pedido:\n");
  scanf("%d", &numpedido);
  quebrarlinha();
  printf("detalhes do seu pedido\n");
  printf("%s\n", pedido[numpedido - 1]);
  quebrarlinha();
}

int saindodoprograma() { printf("saindo do programa...\n"); }

int main(void) {
  int resposta = 0;

  while (resposta != 5) {
    printf("como posso te ajudar hoje?\n");
    printf("as opcoes disponiveis sao:\n");
    printf("1 - fazer pedido\n");
    printf("2 - detalhes do pedido\n");
    printf("3 - horario de atendimento\n");
    printf("5 - sair\n");
    scanf("%d", &resposta);

    if (resposta == 1) {
      fazerpedido();
    } else if (resposta == 2) {
      detalhesdopedido();
    } else if (resposta == 3) {
      horariodeatendimento();
    } else if (resposta == 5) {
      saindodoprograma();
    } else {
      printf("opcao invalida\n");
    }
  }

  return 0;
}