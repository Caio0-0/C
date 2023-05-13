#include <stdio.h>
#include <locale.h>

int main()
{
	
	int idade;
	printf("Digite sua idade:");	
	scanf("%d",&idade);
	
	
	if(idade < 30){
		printf("Voce e jovem");
	}
	printf("              FIM                \n");
	printf("=================================\n");
	
	return 0;
}