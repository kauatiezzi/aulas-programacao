#include <stdio.h>
#include <math.h>
#include <locale.h>

void bhaskara(double a, double b, double c, double *x1, double *x2) {

    int delta;

    if(a == 0) {
        *x1 = -99;
    } else {
        delta = pow(b,2) - 4*a*c;
        if(delta < 0) {
        *x1 = -88;
        }
        else {
        *x1 = (b*(-1) + sqrt(delta)) / 2*a;
        *x2 = (b*(-1) - sqrt(delta)) / 2*a;
        }
    }
}

int main() {

   double a=1, b=4, c=2, x1, x2;
    setlocale(LC_ALL, "Portuguese");
    bhaskara(a,b,c,&x1,&x2);

    if(x1 == -99) {
        printf("Div por 0: Operação cancelada. \n");
        return 0;
    }
    if(x1 == -88) {
        printf("Menor que 0: Operação cancelada. \n");
        return 0;
    }

    printf("Raiz 1: %.2lf \n",x1);
    printf("Raiz 2: %.2lf \n",x2);

   
}
