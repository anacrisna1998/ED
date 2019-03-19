#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
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
			printf("O valor %d pesquisado está no vetor da posição %d",vetor[i],i);
		}
		
	}
	getch();
}
