#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a ;
    float b;
    char n;
    b= 3.4;
    a = 5;
    n = 'a';
    //Numeros inteiros
    printf("\n o valor de a = %d",a);
    printf("\n digite um numero para (a): ");
    scanf("%d",&a);
    printf("\na = %d esse foi o novo valor proposto",a);
    printf("\n");
    //Numeros flutuantes
    printf("\n o valor de b = %.2f", b);
    printf("\n Digite um valor flutuante: ");
    scanf("%f",&b);
    printf("\n b = %.2f e o novo valor",b);
    printf("\n");
    //Nome/String
    printf("\nLetra e igual a %c",n);
    printf("\nDigite uma letra:");
    scanf(" %c",&n);
    printf("\nA letra e igual a %c",n);
    printf("\n");
    //Pausar 
    system("Pause");
}