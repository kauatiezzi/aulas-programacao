// Olá professor, tudo bem? Eu fiz a atividade seguindo além de suas instruções um vídeo tutorial no Youtube também, mas consegui entender certinho o que quis dizer no arquivo,
// te enviei além desse arquivo um arquivo .zip com todo o projeto, não sabia se só enviando o arquivo funcionaria. E uma print com o resultado no console com os números em ordem
//  crescente também foi enviado pelo Classroom.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void selecao(int Vet[], int n) {

    int Menor, aux;

    for(int i=0;i<n-1;i++) {
        Menor=i;
        for(int j=i+1;j<n;j++) {
            if(Vet[Menor]>Vet[j])
                Menor=j;
        }
        if(i!=Menor) {
            aux=Vet[i];
            Vet[i]=Vet[Menor];
            Vet[Menor]=aux;

        }
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    int n=9;
    int Vetor[9] = {3,6,1,5,20,23,11,9,4};

    selecao(Vetor, n);

    printf("\n\n ");
    wprintf(L"Números em ordem crescente:\n\n");

    for(int i=0;i<n;i++) {
        printf("%d - ", Vetor[i]);
    }

    printf("\n\n ");

    system("pause");
    return 0;
}


