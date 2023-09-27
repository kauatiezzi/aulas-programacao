#include <stdio.h>
#include <math.h>
#include <locale.h>

void escolha(float gasolina, float etanol, char *combustivel) {

    if(etanol/gasolina < 0.7)
        *combustivel = 'E';
    else
        *combustivel = 'G';
}

int main() {

    float gasolina, etanol;
    setlocale(LC_ALL, "Portuguese");
    char combustivel;
    printf("Digite o preço do litro da gasolina: \n");
    scanf("%f", &gasolina);
    printf("Digite o preço do litro do etanol: \n");
    scanf("%f", &etanol);
    escolha(gasolina, etanol, &combustivel);
    printf("Combustível sugerido: %c",combustivel);
    return 0;

}
