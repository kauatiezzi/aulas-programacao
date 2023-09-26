#include <stdio.h>

// Função para trocar dois números
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ordenação por seleção
void ordenacaoPorSelecao(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        trocar(&arr[i], &arr[indiceMinimo]);
    }
}

int main() {
    int numeros[] = {29, 14, 5, 20, 8};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Antes da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    ordenacaoPorSelecao(numeros, tamanho);

    printf("Depois da ordenacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}