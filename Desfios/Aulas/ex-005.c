#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1;
	printf("Digite um numero:");	
	scanf("%d",&n1);
	
	if(n1%2=0){
		printf("%d é par /n",n1);
	}else{
		printf("%d é impar /n",n1);
	}
	printf("              FIM                \n");
	printf("=================================\n");
	
	return 0;
}