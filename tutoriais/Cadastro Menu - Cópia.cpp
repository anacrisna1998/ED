#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){

    setlocale(LC_ALL, "Portuguese");
		
    int l, c; 
    int op;
	char nm[50][50]={0};
	char end[50][50]={0}, cpf[50][13], rg[50][13], mat[50][13];
    float sm = 0, nt[50][5]={0};
    int cont = 0;
    do{
	    fflush(stdin);
		system("cls");		
	    printf("\n\n\n\n\n\t**************BEM VINDO AO SISTEMA DE CADASTRAMENTO ESTUDANTIL**************\n\t\t\t\t\t\t\tversão 1.2\n\n");
	    printf("\n\t\t[1] Cadastrar Aluno");
		printf("\n\t\t[2] Ver lista de Alunos");
		printf("\n\t\t[3] Sair\n\n\n\t\t");
		scanf("%d",&op);
		system("cls");
		switch(op){
			case 1:
				system("cls");	
			    sm=0;
			    
				fflush(stdin);
			    printf("Digite o nome do %dº aluno(a): ",l+1);
			    gets(nm[cont]);
			    
				fflush(stdin);
				printf("Digite a matrícula do aluno(a): ",l+1);
			    gets(mat[cont]);
				
				fflush(stdin);
				printf("Digite o endereço do aluno(a): ",l+1);
			    gets(end[cont]);
			    
				fflush(stdin);
				printf("Digite o cpf do aluno(a): ",l+1);
			    gets(cpf[cont]);
			    
				fflush(stdin);
				printf("Digite o rg do aluno(a): ",l+1);
			    gets(rg[cont]);
			    fflush(stdin);        
			    
				printf("\n");
				
				for(c=0;c<4;c++){
					printf("%dª Nota do aluno(a):\n",c+1);
	    			scanf("%f",&nt[cont][c]);
	    			sm= sm+nt[cont][c];
	    			printf("\n");
	    		}
	    		nt[cont][4]=sm/4;
				sm=0;
				cont++;
				
								
		    	printf("pressione qualquer tecla para voltar");
				getch();
		    	
				break;
			case 2:
				system("cls");
				printf("\t**********Dados Cadastrais********\n\n");
				
				for(l=0;l<cont;l++){
		        	printf("Dados do aluno [%s]:\n\n",nm[l]);
		        	printf("\tMatrícula do aluno(a): %s\n",mat[l]);
		                
		        	printf("\tCPF do aluno(a): %s\n",cpf[l]);
		                
		    		printf("\tRg do aluno(a) %s:\n",rg[l]);
		    
					printf("\tEndereço do aluno(a) %s\n",end[l]);
		        	printf("\n\n");
		        	for(c=0;c<4;c++){
		        		printf("\t%dª Nota do aluno(a):: (%.2f) \n",c+1,nt[l][c]);
		        	}
		        	printf("\tA Média do aluno(a) é :: (%.2f)\n",nt[l][4]);
		    		printf("\n\n");
		    	}
		    	printf("pressione qualquer tecla para voltar");
				getch();
		    	break;
			case 3:
				printf("Voçê escolheu sair.");
				break;
			default:
				printf("Opção inválida!");
				break;
		}
	}while(op!=3);
	
	getch();
}
