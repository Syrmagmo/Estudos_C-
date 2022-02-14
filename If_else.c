#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int A, B, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &A);
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &B);
	
	soma = A + B;
	printf("O valor soma = %d", soma);
	
	if(soma > 10) //se a soma for maior que 10
	{
		printf("\n O valor e maior que 10\n");
	}
	else // senão
	{
		printf("\n O valor e menor que 10\n");
	}
	system("pause");
	return 0;
}
