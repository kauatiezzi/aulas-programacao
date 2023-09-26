#include <stdio.h>

int main() {

    int a,b,c, delta, x1,x2;

    printf("Escreva o valor de A:");
    scanf("%d", &a);

    printf("Escreva o valor de B:");
    scanf("%d", &b);

    printf("Escreva o valor de C:");
    scanf("%d", &c);

    delta = (b*b) - 4*a*c;

    printf("O Valor do delta é: %d", delta);
}


