#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	char op ;
	printf("Digite 1 numero:");	
	scanf("%d",&n1);
	printf("Digite 2 numero:");	
	scanf("%d",&n2);
	fflush(stdin);
	printf("Digite qual opreração:");	
	scanf("%c",&op);
	switch(op)
	{
	case '-':
		printf("a subtrção é :%d \n",n1-n2);
		break;
	case '+':
		printf("a soma desse valores é:%d\n",n1+n2);
		break;
	case '/':
		printf("a divizão é:%d \n",n1/n2);
		break;
	case '*':
		printf("a mutiplicação é%d",n1*n2);
		break;
	default:
		break;
	}
	printf("              FIM                \n");
	printf("=================================\n");
	
	return 0;
}