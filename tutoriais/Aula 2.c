#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	int i, valor,achou=0,vetor[6]={0};
	
	for(i=0;i<6;i++){
		printf("Digite um valor para a posição %d ",i);
		scanf("%d",&vetor[i]);
	}
	
	printf("Digite o valor que deseja pesquisar: ");
	scanf("%d",&valor);
	
	for (i=0;i<6;i++){
		
		if(vetor[i]==valor){
			
			achou =1;
			
			printf("\n\n****** Valor encontrado ******\n\n");
			printf("O valor %d pesquisado está no vetor da posição %d\n",vetor[i],i);
			
			//printf("Digite o novo valor: ");
			//scanf("%d",&vetor[i]);
		}
		
	}
	
	if(achou!=1){
		printf("\n\n****** O Valor %d não foi encontrado no vetor ******\n\n");
		printf("****** Valores registrados no vetor ******\n\n");
		
		for(i=0;i<6;i++){
			printf("Valor do vetor na posição %d: %d\n\n ",i,vetor[i]);
		}
	}
	*/
	
	/*
	int i, j, valor,achou=0,vetor[2][6]={0};
	
	for(i=0;i<2;i++){
		for(j=0;j<6;j++){	
			printf("Digite um valor para a posição [%d][%d] ",i,j);
			scanf("%d",&vetor[i][j]);
		}
	}
	
	printf("Digite o valor que deseja pesquisar: ");
	scanf("%d",&valor);
	
	for (i=0;i<2;i++){
		for(j=0;j<6;j++){	
			if(vetor[i][j]==valor){
			
				achou =1;
			
				printf("\n\n****** Valor encontrado ******\n\n");
				printf("O valor %d pesquisado está no vetor da posição [%d][%d]\n",vetor[i][j],i,j);
			
				//printf("Digite o novo valor: ");
				//scanf("%d",&vetor[i][j]);
			}
		}
	}
	
	if(achou!=1){
		printf("\n\n****** O Valor %d não foi encontrado no vetor ******\n\n");
		printf("****** Valores registrados no vetor ******\n\n");
		
		for(i=0;i<2 ;i++){
			for(j=0;j<6;j++){	
				printf("Valor do vetor na posição [%d][%d]: %d\n\n ",i,j,vetor[i][j]);
			}
		}
	}
	*/
	
	/*
	char primeiro_nome[15],ultimo_nome[15],nome_completo[30]={""};
	
	fflush(stdin);
	printf("Digite o seu ultimo nome. \n");
	gets(ultimo_nome);
	
	fflush(stdin);
	printf("Digite o seu primeiro nome. \n");
	gets(primeiro_nome);
	
	strcat(nome_completo,primeiro_nome);
	strcat(nome_completo," ");
	strcat(nome_completo,ultimo_nome);
	
	printf("\n\nPrimeiro nome %s",primeiro_nome);
	printf("\n\nUltimo nome %s",ultimo_nome);
	printf("\n\nNome completo %s",nome_completo);
	
	if(!strcmp(primeiro_nome,ultimo_nome))
		printf("\n\nNomes Iguais!");
	else
		printf("\n\nNomes Diferentes\n");
	
	printf("O nome completo possui %d caracteres",strlen(nome_completo));
	
	getch();
	*/
	
	int i,achou=0;
	char matriz[5][35]={0}, valor[35];
	
	for(i=0;i<5;i++){
		
		fflush(stdin);
		printf("Digite um nome para a posição %d ",i);
		gets(matriz[i]);
		
	}
	
	fflush(stdin);
	printf("Digite o nome que deseja pesquisar: ");
	gets(valor);
	
	for (i=0;i<5;i++){
		
		if(!strcmp(matriz[i],valor)){
			
			achou = 1;
			
			printf("\n\n****** Valor encontrado ******\n\n");
			printf("O Nome %s pesquisado está na matriz na posição %d\n",matriz[i],i);
			
			//printf("Digite o novo valor: ");
			//scanf("%d",&vetor[i]);
		}
		
	}
	
	if(achou!=1){
		printf("\n\n****** O Valor %s não foi encontrado no matriz ******\n\n",valor);
		printf("****** Valores registrados no vetor ******\n\n");
		
		for(i=0;i<5;i++){
			printf("Valor do vetor na posição %d: %s\n ",i,matriz[i]);
		}
	}
	getch();
}
