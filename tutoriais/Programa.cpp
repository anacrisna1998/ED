#include<stdio.h>

#ifdef __WIN32
#	include<conio.h>
#endif

#include<stdlib.h>

main(){
	/*
	Cod 1
	printf("Estrutura de dados");
	getch();
	*/
	
	/*
	cod 2
	int tipo_inteiro =1;
	float tipo_real =2.5;
	char tipo_character= 'A';
	printf("Tipos de dados\n\n");
	printf("Valor tipo inteiro: %d\n",tipo_inteiro);
	printf("Valor tipo real: %.1f\n",tipo_real);
	printf("Valor tipo caracter: %c\n",tipo_character);
	getch();
	*/
	
	/*
	Cod 03
	int tipo_inteiro;
	float tipo_real;
	char tipo_character;
	printf("******* PREENCHA OS DADOS *******\n\n");
	printf("Digite um valor do tipo inteiro: ");
	scanf("%d",&tipo_inteiro);
	printf("Digite um valor do tipo real:");
	printf("%f",&tipo_real);
	
	fflush(stdin);
	printf("digite um valor do tipo caracter: ");
	scanf("%c",&tipo_character);
	
	system("cls");
	printf("******* SUAS RESPOSTAS ******");
	printf("Valor tipo inteiro: %d\n",tipo_inteiro);
	printf("Valor tipo real: %.1f\n",tipo_real);
	printf("Valor tipo caracter: %c\n",tipo_character);
	getch();
	*/
	
	/*
	Cod 04
	int i;
	for(i=0;i<10;i++){
		printf("valor de I: %d\n",i);
	}
	getch();
	
	*/
	
	int i,v;
	
	for(i=0;i<10;i++){
		printf("Digite um valor para V: );
		scanf("%d",&v);
	}
	printf("Ultimo valor de V: %d\n",v);
	getch();
	
}
