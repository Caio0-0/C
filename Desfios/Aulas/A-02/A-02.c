#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 0;
    int b = 0;
    int soma = 0;
    printf("\nDigite o 1 valor:");
    scanf("%d", &b);
    printf("\n Digite o 2 valor: ");
    scanf("%d",&a);
    soma = a+b;
    printf("\n %d + %d = %d",a,b,soma);
}