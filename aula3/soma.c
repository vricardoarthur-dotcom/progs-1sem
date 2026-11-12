#include <stdio.h>
#include <string.h>

int soma(int a, int b) { return a * b; }

int main(void) {

  int num1 = 0;
  int num2 = 0;

  printf("primeiro numero\n");
  scanf("%d", &num1);
  printf("segundo numero\n");
  scanf("%d", &num2);

  int resul = soma(num1, num2);
  printf("soma %d\n", resul);

  return 0;
}