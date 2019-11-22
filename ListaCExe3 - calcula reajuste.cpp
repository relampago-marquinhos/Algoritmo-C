#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float salario,reajuste,salariors;
	printf ("Programa calcula reajuste do salario ");
	printf ("Digite o salario=");
	scanf ("%f",&salario);
	if(salario<=300) 
	{
		salariors=(0,5*salario)+salario;
		printf ("Salario reajustado=%f\n",salariors);
	}
	else if (salario>300) 
	{
	salariors=(0,5*salario)+salario;
	printf ("Salario reajustado=%f\n");
	}
	system ("pause");
	return 0;
}
