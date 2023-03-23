#include "stdio.h"
int main() {
    int valor = 0;

    printf ("informe um numero:");
    scanf("%d", &valor);

//verifica se valor eh par
    if(valor % 2 == 0) {
    printf("valor eh par!\n'");
    } else {
        printf("valor eh impar!\n'");
        if(valor % 3 == 0 || valor % 5 == 0 || valor % 7 == 0 ) {
    printf("valor multiplo de 3, 5 OU 7!\n'");

    }
}

