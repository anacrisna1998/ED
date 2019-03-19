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
	
	printf("Faça sua escolha:\n");
	scanf("%d",&op);
	system("cls");
	switch(op){
		case 1:
			printf("Você escolheu cadastrar.");
			break;
		case 2:
			printf("Você escolheu mostrar.");
			break;
		case 3:
			printf("Voçê escolheu sair.");
			break;
		default:
			printf("Opção inválida!");
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
		printf("Valor do vetor é: %d\n",vetor[contador]);
	}
	getch();
	*/
	
	//pedir para o usuario digitar um valor do tipo inteiro e salvar o valor em um vetor;
	/*
	int contador;
	int vetor[4]={0};
	
	for(contador = 0; contador<4;contador++){
		printf("digite um valor para a posição: %d\n",contador);	
		scanf("%d",&vetor[contador]);
	}
	
	system("cls");
	for(contador = 0; contador<4;contador++){
		printf("Valor do vetor na posição %d é: %d\n",contador,vetor[contador]);
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
    
    /*cola
	if(strcmp(x,y)==0){}
	*/
    /*
    int l,c;
	char matriz[2][50]={0};
	
	fflush(stdin);
	for(l=0;l<2;l++){
		fflush(stdin);
		printf("Digite o nome na posição %d: ",l+1);
		gets(matriz[l]);
		printf("\n");
	}
	
	system("cls");
	
	printf("VALORES DA MATRIZ\n\n");
	for(l=0;l<2;l++){
		printf("Nome da Linha %d: %s ",l+1,matriz[l]);
		printf("\n");
	}
	getch();
    */
    
    int l,c;
    float nota[5][5],acm=0;
	char matriz[5][50]={0};
	
	fflush(stdin);
	for(l=0;l<5;l++){
		fflush(stdin);
		printf("Digite o nome do aluno %d: ",l+1);
		gets(matriz[l]);
		printf("\n");
		for(c=0;c<4;c++){
			printf("Digite a nota n°%d do aluno: ",c+1);
			scanf("%f",&nota[l][c]);
			acm+=nota[l][c];
			printf("\n");
		}
		nota[l][4]=acm/4;
		acm=0;
	}
	    
	for(l=0;l<5;l++){
		fflush(stdin);
		printf("Média do aluno %s: %.2f\nNotas:",matriz[l],nota[l][4]);
		for(c=0;c<4;c++){
			printf(" %.2f ",nota[l][c]);
		}
		printf("\n\n");
	}
	
}

