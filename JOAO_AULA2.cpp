#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FUNÇÕES

int saudacao() {
	printf("Oi, pessoas! \n");
	return 0;
}

int main() { 
	
	int a = 50000, b = 50100, resposta;
	
	srand(time(NULL));
	resposta = a + rand() % (b+1-a);
	//Atualiza a semente geradora de números aleatórios com base na hora da máquina.
	
	printf("Número gerado: %d\n", resposta);
	saudacao();
    return 0;
}


// Número aleatório inteiro (SLIDE 3 SAULO)

//int main() { 
	
//	int a = 50000, b = 50100, resposta;
	
//	srand(time(NULL));
//	resposta = a + rand() % (b+1-a);
	//Atualiza a semente geradora de números aleatórios com base na hora da máquina.
	
//	printf("Número gerado: %d\n", resposta);
//    return 0;
//}


//ALEATÓRIO TIPO FLOAT

//int main() {
	
//	float aleatorio;
	//Atualiza a semente geradora de números aleatórios com base na hora da máquina.
//	srand(time(0));
//	aleatorio = rand();
	
//	printf("Número gerado: %f\n", aleatorio);
//    return 0;
//}
