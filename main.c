#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

int a,b,c;
printf("Digite um numero A: \n");
scanf("%d",&a);
printf("Digite um numero B: \n");
scanf("%d",&b);
printf("Digite um numero C: \n");
scanf("%d",&c);

if(a>b) {

   if (a>c) {
    printf("Maior: A \n",a);

        if (b<c) {
         printf("Menor: B \n",b);
        } else {
        printf("Menor: C \n",c);
        }

    } else {
       printf("Maior: C \n");
       printf("Menor: B \n",b);

    }

} else {

    if(b>c) {
     printf("Maior: B\n");

        if(a>c) {
            printf("Menor: C\n");
        } else {
            printf("Menor: A\n");
        }

    } else {
        printf("Maior: C\n");
        printf("Menor: A\n");
        
    }

}

	return 0;

}