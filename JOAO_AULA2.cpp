#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FUN��ES

int saudacao() {
	printf("Oi, pessoas! \n");
	return 0;
}

int main() { 
	
	int a = 50000, b = 50100, resposta;
	
	srand(time(NULL));
	resposta = a + rand() % (b+1-a);
	//Atualiza a semente geradora de n�meros aleat�rios com base na hora da m�quina.
	
	printf("N�mero gerado: %d\n", resposta);
	saudacao();
    return 0;
}


// N�mero aleat�rio inteiro (SLIDE 3 SAULO)

//int main() { 
	
//	int a = 50000, b = 50100, resposta;
	
//	srand(time(NULL));
//	resposta = a + rand() % (b+1-a);
	//Atualiza a semente geradora de n�meros aleat�rios com base na hora da m�quina.
	
//	printf("N�mero gerado: %d\n", resposta);
//    return 0;
//}


//ALEAT�RIO TIPO FLOAT

//int main() {
	
//	float aleatorio;
	//Atualiza a semente geradora de n�meros aleat�rios com base na hora da m�quina.
//	srand(time(0));
//	aleatorio = rand();
	
//	printf("N�mero gerado: %f\n", aleatorio);
//    return 0;
//}
