#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome;
	printf("Digite uma letra:");	
	scanf("%c",&nome);
	
	if (nome >=65 && nome >=90){
		printf("voce digitou um caractere maiuscolo");
	}else{
		printf("caractere invalido"));
	}
	printf("              FIM                \n");
	printf("=================================\n");
	
	return 0;
}