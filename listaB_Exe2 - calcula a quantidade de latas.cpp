#include <stdio.h>
#include <stdlib.h>
main ()
{
	float altura,raio,at,custo,qtdl,qtdla;
	printf ("Program calcula custo e quantidade de litro e latas\n");
	printf ("Favor insira o raio=");
	scanf ("%f",&raio);
	printf ("Favor insira a altura=");
	scanf ("%f",&altura);
	at=3,14*raio*raio+2*3,14*raio*altura;
	printf ("O valor da area e de =%f\n",at);
	qtdl=at/3;
	printf ("A quantidade de litros e de =%f\n",qtdl);
	qtdla=qtdl/5;
	printf ("A quantidade de lata sera de =%f\n",qtdla);
	custo=(qtdla*100);
	printf ("O custo total e de =%f\n",custo);
	
	system ("pause");
	return 0;
}
