#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a,b,c;
	printf ("Programa dos Triangulos.\n");
	printf ("Favor digitar primeiro valor:\n");
	scanf ("%f",&a);
	printf ("Favor digitar o segundo valor:\n");
	scanf ("%f",&b);
	printf ("Favor digitar o terceiro valor:\n");
	scanf ("%f",&c);
	 
	 if ((a<b+c)&&(b<a+c)&&(c<a+b)){
	 	printf ("E um triangulo.\n");
	 }else {
	 	printf("Nao e um triangulo.\n");
	 }
	 if ((a==b)&&(b==c)){
	 	printf ("E um triangulo equilatero.\n");
	 }
	 if ((a==b)&&(a!=c)){
	 	printf ("E um triangulo isoceles.\n");
	 }
	if ((a!=b)&&(a!=c)&&(b!=c)){
		printf ("E um triangulo escaleno.");
	}
	
	system ("pause");
	return 0;
	
	
}
