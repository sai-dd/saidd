#include<stdio.h>
#include<stdlib.h>

void main(){

    int op;

    while(op < 1 || op > 3){

    printf("Escolha um caso:");
    printf("\n1 - Caso 01");
    printf("\n2 - Caso 02");
    printf("\n3 - Caso 03\n\n");

    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\nFoi escolhido o caso 1.\n\n\n\n\n\n\n");
                break;
        case 2:
            printf("\nFoi escolhido o caso 2.\n\n\n\n\n\n\n");
                break;
        case 3:
            printf("\nFoi escolhido o caso 3.\n\n\n\n\n\n\n");
                break;
        default:
            printf("\nCaso inexistente.\n\n\n\n\n\n\n");
                break;
    }
    }


    system("pause");
}
