#include <stdio.h>
#include <locale.h>

int main()
{
	
	int numero;
	printf("Digite um numero:");	
	scanf("%d",&numero);
	
	
	if(numero > 20){
		printf("metade de %d e = %d\n",numero,numero/2);
	}
	printf("              FIM                \n");
	printf("=================================\n");
	
	return 0;
}