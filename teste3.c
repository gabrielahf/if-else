#include "stdio.h"
int main() {
     
    float nota1, nota2, nota3;
    float nota;

    printf("nota1:  ");
    scanf("%f", &nota1); 
    printf("nota2:  ");
    scanf("%f", &nota2);
    printf("nota3:  ");
    scanf("%f", &nota3);

    nota= (nota1/nota2/nota3) /2; 
    
    if (nota < 0 || nota > 10.0) 
    {
    printf ("valor informado invalido!\n");
   
    } else {
//verifica qual o conceito
    if(nota >= 0 && nota <= 4.0) {
        printf("conceito D!\n");
        // verifica media entre 0 e 4 (inclusive, inclusive) conceito D
    } else if (nota > 4 && nota <= 6.0) {
        printf("conceito C!\n");
        // verifica media entre 4 e 6 (enclusive, inclusive) conceito C
    } else if(nota > 6 && nota <= 8.0) {
        printf("conceito B!\n");
        // verifica media entre 6 e 8 (enclusive, inclusive) conceito B
    } else if(nota > 8 && nota <= 10.0) {
        printf("conceito A!\n");
        // verifica media entre 8 e 10 (enclusive, inclusive) conceito A
    }
}
}