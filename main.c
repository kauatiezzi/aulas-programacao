#include <stdio.h>
#include <math.h>
#include <locale.h>

// FUNÇÕES

int raio() {

    int raio = 10;
	
	return raio;
}

int altura() {

    int altura = 8;
    
    return altura;
}

int diametro() {
	
	int diametro;
    setlocale(LC_ALL, "Portuguese");
	
	diametro = raio()*2;
	printf("O Di?metro ?: %d Metros\n", diametro);
	
	return diametro;
}

float perimetro() {

    float perimetro;

    perimetro = 2.0 * M_PI * raio();
    printf("O Perim?tro ?: %.2fMetros\n", perimetro);

    return perimetro;
}

float area() {

    float area;

    area = M_PI * pow(raio(),2.0);
    printf("A ?rea ?: %.2f Metros?\n", area);
    return area;
}

float volume() {

    float volume;

    volume = M_PI * pow(raio(),2) * altura();
    printf("O Volume ?: %.2f Metros?\n", volume);

    return volume;
}


int main() { 
	
	diametro();
    perimetro();
    area();
    volume();


    return 0;
}


