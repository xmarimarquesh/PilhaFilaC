#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    int choice = 1;
    int capacity = 5;
    int num, quantidade_elementos = 0;
    int *array = malloc(capacity * sizeof(int));

    printf("-------- PILHA --------\n");

    while (choice != 0) {
        printf("\nO que deseja realizar?\n0 - Sair\n1 - Push\n2 - Pop\n3 - Peek\n4 - Ver pilha\n - ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Digite o valor que deseja adicionar a pilha: ");
                scanf("%d", &num);
                quantidade_elementos = push(&array, num, quantidade_elementos, &capacity);
                printf("\nARRAY: ");
                for (int i = 0; i < quantidade_elementos; i++) {
                    printf("%d ", array[i]);
                }
                break;
            case 2:
            if(quantidade_elementos <= 0){
                printf("LISTA VAZIA");
                break;
            }else{
                array = pop(&array, &quantidade_elementos);
                printf("Valor excluido com sucesso");
                printf("\nARRAY: ");
                for (int i = 0; i < quantidade_elementos; i++) {
                    printf("%d ", array[i]);
                }
                break;

            }
            
            default:
                break;
        }
    }

    free(array);
    return 0;
}
