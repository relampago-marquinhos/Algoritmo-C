#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "Portuguese");
    int n,n1,n2,soma,media,produto;
    printf ("Digite 3 numeros \n " );
	printf ("Digite 1: ") ;
	scanf ("%d", &n );
	printf ("Digite 2: ");
	scanf ("%d", &n1 );
	printf ("Digite 3:");
	scanf ("%d", &n2 );
	soma=n+n1+n2;
	printf("A soma dos tres numeros e de: %d\n",soma);
	media= (n+n1+n2)/3;
	printf ("A media dos numeros e de: %d\n",media);
	produto=n*n1*n2;
	printf ("O produto dos numeros é de: %d\n",produto);
	
	system ("pause");
	return 0;
}

