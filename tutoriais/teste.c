#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "portuguese");
	/*
	int op = 0;
	//do{
	
	printf("Digite [1] - para Cadastrar\n");
	printf("Digite [2] - para Mostrar\n");
	printf("Digite [3] - para Sair\n\n");
	
	printf("Fa�a sua escolha:\n");
	scanf("%d",&op);
	system("cls");
	switch(op){
		case 1:
			printf("Voc� escolheu cadastrar.");
			break;
		case 2:
			printf("Voc� escolheu mostrar.");
			break;
		case 3:
			printf("Vo�� escolheu sair.");
			break;
		default:
			printf("Op��o inv�lida!");
			break;
	}
	//}while(op!=3);
	getch();
	*/
	
	/*
	
	int contador;
	int vetor[4]={0};
	
	for(contador = 0; contador<4;contador++){
		vetor[contador] = contador+1;
		printf("Valor do vetor �: %d\n",vetor[contador]);
	}
	getch();
	*/
	
	//pedir para o usuario digitar um valor do tipo inteiro e salvar o valor em um vetor;
	/*
	int contador;
	int vetor[4]={0};
	
	for(contador = 0; contador<4;contador++){
		printf("digite um valor para a posi��o: %d\n",contador);	
		scanf("%d",&vetor[contador]);
	}
	
	system("cls");
	for(contador = 0; contador<4;contador++){
		printf("Valor do vetor na posi��o %d �: %d\n",contador,vetor[contador]);
	}
	getch();
	*/
	/*
	int l,c,matriz[3][4]={0};
	
	for(l=0;l<3;l++){
		for(c=0;c<4;c++){
			matriz[l][c] = l+c+1;
		}
	}
	
	for(l=0;l<3;l++){
		for(c=0;c<4;c++){
			printf(" %d ",matriz[l][c]);
		}
		printf("\n");
	}
	getch();
    */
}

