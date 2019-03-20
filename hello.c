#include <stdio.h>

#ifdef __WIN32
#	include <conio.h>
#endif

int
main()
{
	char nome[50];
	char amigo_do_dono;
	int idade;
	int op=-1;
	while ( op != 4) {
		printf("Menu\n");
		printf("1 - Cadastrar cliente\n");
		printf("2 - Digite a idade do cliente\n");
		printf("3 - Autorizado\n");
		printf("4 - sair\n");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf ("Digite o nome do cliente: ");
				scanf ("%[^\n]%*c",nome);
				printf ("O cliente é amigo do dono? (s/n) ");
				scanf ("%c",&amigo_do_dono);
			break;
			case 2:
			    printf ("Digite a idade do cliente: ");
				scanf ("%d",&idade);
			break;
			case 3:
				if (amigo_do_dono=='s' || idade >= 18)
					printf ("Autorizado\n");
					else printf ("Não autorizado\n");
			break;
			case 4:
				printf ("saindo\n");
			break;
			default:
				printf ("opção errada, digite denovo\n");
			break;
		}
	}
#ifdef __WIN32
	getch()
#elif __unix
	return 0;
#endif
}
