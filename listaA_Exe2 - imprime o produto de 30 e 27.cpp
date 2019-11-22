#include <stdio.h>
#include <stdlib.h>

   main(void)
{
	int idade;
	char nome[100];
	printf("Digite seu nome: \n");
	scanf ("%s", &nome);
	printf("digite sua idade:\n");
	scanf ("%d",&idade);
	printf("%s Tem %d anos",nome,idade);

	printf("\n");
	system ("pause");
	return 0;
}
