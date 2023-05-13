#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Digite sua idade:");	
	scanf("%d",&idade);
	
	if(idade >=18){
		printf("Você é maior de idade \n",idade);
	}else{
		printf("Você é menor de idade \n",idade);
	}
	printf("              FIM                \n");
	printf("=================================\n");
	
	return 0;
}