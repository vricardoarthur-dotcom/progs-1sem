#include <stdio.h>
#include <string.h>

    int main(void) {
        char resposta[20];

        printf("qual o seu nome? ");
        scanf("%19s", resposta);

        if (strcmp(resposta, "ricardinho") == 0) {
            printf("voce e o melhor no volei");
        } else {
            printf("voce e ruim no volei");
        }








        return 0;

    }