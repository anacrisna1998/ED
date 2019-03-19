#include <stdio.h>

int
main ()
{
	int tipo_inteiro;
	float tipo_real;
	char tipo_caracter;

	printf ("****** PREENCHA OS DADOS ******\n");
	printf ("Digite um valor de tipo inteiro: ");
	scanf ("%d", &tipo_inteiro);
	printf ("Digite um valor do tipo real: ");
	scanf ("%f",&tipo_real);

	fflush(stdin);

	printf ("Digite um valor do tipo caracter: ");
	scanf ("%c", &tipo_caracter);

	system("clear");

	printf ("****** SUAS RESPOSTAS *****\n\n");
	printf ("valor do tipo inteiro: %d\n", tipo_inteiro);

}
