#include <stdio.h>
#include <locale.h>

// Numero par/impar

// int main() {
	
//	int numero;
//	setlocale(LC_ALL, "Portuguese");
//	printf("Digite um n?mero inteiro:");
//	scanf("%d", &numero);
	
//	if (numero%2 == 0) {
		
//		printf("O n?mero %d ? par",numero);
//	} else {
//		printf("O n?mero %d ? impar", numero);
//	}
	
//	return 0;
//}

//EXERCICIO 2 

//int main() {
//	
//	setlocale(LC_ALL, "Portuguese");
//	
//	int a,b,c;
//	printf("Digite um n?mero A: ");
//	scanf("%d",&a);
//	printf("Digite um n?mero B: ");
//	scanf("%d",&b);
//	printf("Digite um n?mero C: ");
//	scanf("%d",&c);
//	
//	if(a>b) {
//		
//		if (a>c) {printf("O n?mero %d ? o maior",a);}
//		 else printf("Maior C");
//
//	} else 
//	
//	if(b>c) printf("Maior: B");
//	else
//	printf("Maior:C");
//	
//	return 0;
//	
//}


float main() {

    setlocale(LC_ALL, "Portuguese");
	float salariofixo, vtotal, limite1, limite2, comissao, comissaotaxa1, comissaotaxa2, salario;

	salariofixo = 3000.00;
	limite1 = 100000.00;
	limite2 = 200000.00;
	comissaotaxa1 = 0.0025;
    comissaotaxa2 = 0.003;

    printf("Digite o valor total das vendas em R$: ");
    scanf("%f", &vtotal);

	if (vtotal > limite1 && vtotal <= limite2) {
		comissao = (vtotal - limite1) * comissaotaxa1;
	} else if (vtotal >= limite2) {
        comissao = (limite2 - limite1) * comissaotaxa1 + (vtotal - limite2) * comissaotaxa2;
    } else {
        comissao = 0.0;
    }

    salario = salariofixo + comissao;

    printf("O Salário Total é: R$%.2f\n", salario);


	return 0;
}
