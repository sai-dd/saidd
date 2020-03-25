#include<stdio.h>
#include<stdlib.h>
#define NUM 3

void main(){

    //definindo vetores.
    int vetor[3], c;

    //definindo valores para os vetores.
    vetor[0] = 25;
    vetor[1] = 50;
    vetor[2] = 100;

    //exibindo valores dos vetores.
    printf("O valor do vetor da posicao 0 eh: %d\n\n", vetor[0]);
    printf("O valor do vetor da posicao 1 eh: %d\n\n", vetor[1]);
    printf("O valor do vetor da posicao 2 eh: %d\n\n", vetor[2]);

    //imprimindo vetor em um laço de repetição.

    for(c = 0; c < NUM; c++){
        printf("Posicao %d: %d\n\n", c, vetor[c]);
    }

    for(c = 0; c < 2; c++){
       scanf("%d\n", &vetor[c]);
    }

    for(c = 0; c < NUM; c++){
        printf("\n\nPosicao %d: %d\n\n", c, vetor[c]);
    }

system("pause");
}
