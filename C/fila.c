#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    int quantidade_elementos = 0;
    int size = 5;
    int choice = 1;
    int num = 0;
    int *array = malloc(size * sizeof(int));

    printf("-------- FILA --------\n");

    while (choice != 0) {
        printf("\nO que deseja realizar?\n0 - Sair\n1 - Enqueue\n2 - Dequeue\n - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nDigite o numero que deseja adicionar a fila: \n - ");
                scanf("%d", &num);
                quantidade_elementos = enqueue(&array, num, quantidade_elementos, &size);
                printf("\nARRAY: ");
                for (int i = 0; i < quantidade_elementos; i++) {
                    printf("%d ", array[i]);
                }
                break;
            case 2:
                if (quantidade_elementos > 0) {
                    quantidade_elementos = dequeue(array, quantidade_elementos);
                    printf("\nNumero excluido com sucesso! ");
                    printf("\nARRAY: ");
                    for (int i = 0; i < quantidade_elementos; i++) {
                        printf("%d ", array[i]);
                    }
                } else {
                    printf("\nFila vazia!\n");
                }
                break;
            case 0:
                break;
            default:
                break;
        }
    }

    free(array);
    return 0;
}
