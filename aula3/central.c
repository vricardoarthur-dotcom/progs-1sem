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
  printf("2 - guarana antarctica\n");
  printf("3 - fanta laranja\n");
  printf("4 - agua mineral\n");
  printf("5 - central cheddar\n");
  printf("6 - central especial\n");
  printf("7 - central vegetariano\n");
  printf("8 - central bacon\n");
  printf("9 - central duplo\n");
  printf("10 - central classico\n");
}

char *escolheritem(int resposta) {

  if (resposta == 1) {
    return "seus itens: coca cola\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 1\nmetodo de pagamento: pix";
  } else if (resposta == 2) {
    return "seus itens: guarana antarctica\nstatus: seu pedido saiu para "
           "entrega\nnumero de pedido "
           "e: 2\nmetodo de pagamento: dinheiro";
  } else if (resposta == 3) {
    return "seus itens: fanta laranja\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 3\nmetodo de pagamento: cartao";
  } else if (resposta == 4) {
    return "seus itens: agua mineral\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 4\nmetodo de pagamento: pix";
  } else if (resposta == 5) {
    return "seus itens: central cheddar\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 5\nmetodo de pagamento: dinheiro";
  } else if (resposta == 6) {
    return "seus itens: central especial\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 6\nmetodo de pagamento: cartao";
  } else if (resposta == 7) {
    return "seus itens: central vegetariano\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 7\nmetodo de pagamento: pix";
  } else if (resposta == 8) {
    return "seus itens: central bacon\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 8\nmetodo de pagamento: dinheiro";
  } else if (resposta == 9) {
    return "seus itens: central duplo\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 9\nmetodo de pagamento: cartao";
  } else if (resposta == 10) {
    return "seus itens: central classico\nstatus: estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 10\nmetodo de pagamento: pix";
  } else if (resposta == 15) {
    return "seus itens: coca cola e central cheddar\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 15\nmetodo de pagamento: pix";
  } else if (resposta == 16) {
    return "seus itens: coca cola e central especial\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 16\nmetodo de pagamento: pix";
  } else if (resposta == 17) {
    return "seus itens: coca cola e central vegetariano\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 17\nmetodo de pagamento: pix";
  } else if (resposta == 18) {
    return "seus itens: coca cola e central bacon\nstatus: estamos preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 18\nmetodo de pagamento: pix";
  } else if (resposta == 19) {
    return "seus itens: coca cola e central duplo\nstatus: estamos preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 19\nmetodo de pagamento: cartao";
  } else if (resposta == 110) {
    return "seus itens: coca cola e central classico\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 110\nmetodo de pagamento: pix";
  } else if (resposta == 25) {
    return "seus itens: guarana antarctica e central cheddar\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 25\nmetodo de pagamento: dinheiro";
  } else if (resposta == 26) {
    return "seus itens: guarana antarctica e central especial\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 26\nmetodo de pagamento: dinheiro";
  } else if (resposta == 27) {
    return "seus itens: guarana antarctica e central vegetariano\nstatus: "
           "estamos preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 27\nmetodo de pagamento: dinheiro";
  } else if (resposta == 28) {
    return "seus itens: guarana antarctica e central bacon\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 28\nmetodo de pagamento: dinheiro";
  } else if (resposta == 29) {
    return "seus itens: guarana antarctica e central duplo\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 29\nmetodo de pagamento: cartao";
  } else if (resposta == 210) {
    return "seus itens: guarana antarctica e central classico\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 210\nmetodo de pagamento: dinheiro";
  } else if (resposta == 35) {
    return "seus itens: fanta laranja e central cheddar\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 35\nmetodo de pagamento: pix";
  } else if (resposta == 36) {
    return "seus itens: fanta laranja e central especial\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 36\nmetodo de pagamento: pix";
  } else if (resposta == 37) {
    return "seus itens: fanta laranja e central vegetariano\nstatus: estamos  "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 37\nmetodo de pagamento: pix";
  } else if (resposta == 38) {
    return "seus itens: fanta laranja e central bacon\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 38\nmetodo de pagamento: pix";
  } else if (resposta == 39) {
    return "seus itens: fanta laranja e central duplo\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 39\nmetodo de pagamento: cartao";
  } else if (resposta == 310) {
    return "seus itens: fanta laranja e central classico\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 310\nmetodo de pagamento: pix";
  } else if (resposta == 45) {
    return "seus itens: agua mineral e central cheddar\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 45\nmetodo de pagamento: pix";
  } else if (resposta == 46) {
    return "seus itens: agua mineral e central especial\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 46\nmetodo de pagamento: pix";
  } else if (resposta == 47) {
    return "seus itens: agua mineral e central vegetariano\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 47\nmetodo de pagamento: pix";
  } else if (resposta == 48) {
    return "seus itens: agua mineral e central bacon\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 48\nmetodo de pagamento: pix";
  } else if (resposta == 49) {
    return "seus itens: agua mineral e central duplo\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 49\nmetodo de pagamento: cartao";
  } else if (resposta == 410) {
    return "seus itens: agua mineral e central classico\nstatus: estamos "
           "preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 410\nmetodo de pagamento: pix";
  } else if (resposta == 23) {
    return "seus itens: guarana antarctica e fanta laranja    \nstatus: "
           "estamos "
           "preparando seu "
           "pedido\nnumero de pedido "
           "e: 23\nmetodo de pagamento: dinheiro";
  } else if (resposta == 31) {
    return "seus itens: fanta laranja e coca cola\nstatus: estamos preparando "
           "seu "
           "pedido\nnumero de pedido "
           "e: 31\nmetodo de pagamento: cartao";
  } else if (resposta == 32) {
    return "seus itens: fanta laranja e guarana antarctica\nstatus: estamos "
           "preparando seu "
           "pedido\nnumero de pedido "
           "e: 32\nmetodo de pagamento: cartao";
  } else if (resposta == 123) {
    return "seus itens: coca cola, guarana antarctica e fanta laranja\nstatus: "
           "estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 123\nmetodo de pagamento: pix";
  } else if (resposta == 321) {
    return "seus itens: coca cola, guarana antarctica e fanta laranja\nstatus: "
           "estamos preparando seu "
           "pedido\nnumero de pedido "
           "e: 321\nmetodo de pagamento: pix";
  } else if (resposta == 231) {
    return "seus itens: coca cola, guarana antarctica e fanta laranja\nstatus: "
           "estamos preparando seu "
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
  printf("seu pedido foi feito com sucesso\n");
  strcpy(pedido[resposta - 1], escolheritem(resposta));
  quebrarlinha();
}

int horariodeatendimento() {
  quebrarlinha();
  printf("horario de atendimento:\n");
  printf("segunda a sexta: 19h - 22h\n");
  printf("sabado e domingo: 19h - 23h\n");
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

int saindodoprograma() { printf("finalizando seu atendimento...\n"); }

int main(void) {
  int resposta = 0;

  while (resposta != 5) {
    printf("como posso te ajudar hoje?\n");
    printf("as opcoes disponiveis sao:\n");
    printf("1 - fazer pedido\n");
    printf("2 - detalhes do pedido\n");
    printf("3 - horario de atendimento\n");
    printf("4 - sair\n");
    scanf("%d", &resposta);

    if (resposta == 1) {
      fazerpedido();
    } else if (resposta == 2) {
      detalhesdopedido();
    } else if (resposta == 3) {
      horariodeatendimento();
    } else if (resposta == 4) {
      saindodoprograma();
    } else {
      printf("opcao invalida\n");
    }
  }

  return 0;
}