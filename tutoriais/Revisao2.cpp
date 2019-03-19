#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
main(){
	
	/*
	int contador =0;
	do{
		printf("O valor do contador e: %d",contador);
		contador++;
	}while(contador < 10);
	getch();
	*/
	
	
	/*
	int contador = 0;
	int  valorA, valorB, resultado;
	do{
		printf("Digite o valor de A:\n");
		scanf("%d",&valorA);
		
		printf("Digite o valor de B:\n");
		scanf("%d",&valorB);
		
		contador++;
	}while(contador < 4);
	resultado = valorA+valorB;
	printf("O resultado dos ultimos valores de A + B e: %d",resultado);
	
	getch();
	*/
	/*
	int contador =0;
	
	while(contador < 10){
		printf("O valor do contador e: %d \n",contador);
		contador++;
		
	}
	getch();
	*/
	/*
	setlocale(LC_ALL,"portuguese");
	
	int i=0;
	char op;
	
	while(op != 'n'){
		printf("Digite um valor para I: \n");
		scanf("%d",&i);
		
		fflush(stdin);
		printf("\nDESEJA CONTINUAR? [S]/[N]:\n");
		scanf("%c",&op);
	}
	printf("O valor de i é: %d",i);
	getch();
	*/
	/*
	setlocale(LC_ALL,"portuguese");
	
	int i=0;
	char op;
	int  valorA, valorB, resultado;
	
	while(op != 'n'){
		printf("Digite o valor de A:\n");
		scanf("%d",&valorA);
		
		printf("Digite o valor de B:\n");
		scanf("%d",&valorB);
		
		fflush(stdin);
		printf("\nDESEJA CONTINUAR? [S]/[N]:\n");
		scanf("%c",&op);
	}
	
	resultado = valorA+valorB;
	printf("O resultado dos ultimos valores de A + B e: %d",resultado);
	
	getch();
	*/
	setlocale(LC_ALL,"portuguese");
	
	int i=0;
	printf("Digite um valor Para I:\n");
	scanf("%d",&i);
	
	if(i<10){
		printf("O valor de I é menor que 10 e I é igual à: %d\n",i);
	} else{
		printf("O valor de I não é menor que 10 e I é igual à: %d\n",i);
	}
		
	getch();

}
