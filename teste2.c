#include "stdio.h"
int main() {
    int valor = 0;

    printf ("informe um numero:");
    scanf("%d", &valor);

//verifica se o valor eh par
    if(valor % 2 == 0) {
    printf("valor eh par!\n'");
    } else {
 // cria um comando de aviso caso o numero nao seja par
        printf("valor eh impar!\n'");
 // sinaliza condicionais se o valor eh multiplo por 3,5,7
        if(valor % 3 == 0 || valor % 5 == 0 || valor % 7 == 0 ) {
    printf("valor multiplo de 3, 5 OU 7!\n'");

    }
}

