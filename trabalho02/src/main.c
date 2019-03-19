#include <stdio.h>

int
main ()
{
	int op=0;
	char nome[50];
	int idade;
	char amigo_do_dono;
	while (op != 4 ) {
		printf ("Menu -------------------------------------------------\n");
		printf ("1 - cadastrar cliente\n");
		printf ("2 - cadastrar idade do cliente\n");
		printf ("3 - ver se pode entrar\n");
		printf ("4 - sair\n");
		printf ("------------------------------------------------------\n");
		printf ("Escolha uma opcao: ");
		scanf ("%d", &op);
		printf ("------------------------------------------------------\n");
		switch (op) {
			case 1:
				/*
				printf ("Digite o nome do cliente: " );
				scanf (" %[^\n]%*c", nome);
				printf ("O cliente é amigo do dono? (s/n) ");
				scanf ("%c", &amigo_do_dono);
				*/
				printf ("Digite o nome do cliente: ");
				scanf (" %[^\n]%*c", nome);
				printf ("O cliente é amigo do dono? (s/n) ");
				scanf ("%c",&amigo_do_dono);

				break;
			case 2:
				printf ("Digite a idade do cliente: " );
				scanf (" %d", &idade);
				break;
			case 3:
				if ( amigo_do_dono == 's' || idade >= 18 )
					printf ("O cliente pode entrar\n");
				else
					printf ("O cliente não pode entrar\n");
				break;
			case 4:
				break;
			default:
				printf ("opcao errada, tente denovo\n");
		}
	}
	return 0;
}
