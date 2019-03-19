#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){

    setlocale(LC_ALL, "Portuguese");
		
    int l, c; 
    int op;
	char nm[50][50]={0}, matriculacmp[13] = {0};
	char end[50][50]={0}, cpf[50][13], rg[50][13], mat[50][13],status[50][30] = {0};
    float sm = 0, nt[50][5]={0},presenca[50]={0};
    int cont = 0;
    do{
	    fflush(stdin);
		system("cls");		
	    printf("\n\n\n\n\n\t**************BEM VINDO AO SISTEMA DE CADASTRAMENTO ESTUDANTIL**************\n\t\t\t\t\t\t\tversão 3.0\n\n");
	    printf("\n\t\t[1] Cadastrar Aluno");
		printf("\n\t\t[2] Ver lista de Alunos");
		printf("\n\t\t[3] Pesquisar Aluno");
		printf("\n\t\t[4] Sair\n\n\n\t\t");
		scanf("%d",&op);
		system("cls");
		switch(op){
			case 1:
				system("cls");	
			    sm=0;
			    
				fflush(stdin);
			    printf("Digite o nome do aluno(a): ");
			    gets(nm[cont]);
			    
				fflush(stdin);
				printf("Digite a matrícula do aluno(a): ");
			    gets(mat[cont]);
				
				fflush(stdin);
				printf("Digite o endereço do aluno(a): ");
			    gets(end[cont]);
			    
				fflush(stdin);
				printf("Digite o cpf do aluno(a): ");
			    gets(cpf[cont]);
			    
				fflush(stdin);
				printf("Digite o rg do aluno(a): ");
			    gets(rg[cont]);
			    
				fflush(stdin);        
			    printf("Digite a porcentagem de presenca do aluno: ");
			    scanf("%f",&presenca[cont]);
			    
			    
				printf("\n");
				
				for(c=0;c<4;c++){
					printf("%dª Nota do aluno(a):\n",c+1);
	    			scanf("%f",&nt[cont][c]);
	    			sm= sm+nt[cont][c];
	    			printf("\n");
	    		}
	    		nt[cont][4]=sm/4;
				sm=0;
				
				if(presenca[cont]<75){
					strcpy(status[cont],"REPROVADO POR FALTA");
				} else{
					if(nt[cont][4]>=7)
						strcpy(status[cont],"APROVADO");
					else if(nt[cont][4]<4)
						strcpy(status[cont],"REPROVADO POR NOTA");
					else if((nt[cont][4]>=4)&&(nt[cont][4]<7))
						strcpy(status[cont],"RECUPERACAO");
				}		
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
		        	
		        	printf("\tO percentual de Faltas do aluno é %.2f %.\n",presenca[l]);
			        	
					printf("\tO status do aluno é: %s\n",status[l]);
						
		    		printf("\n\n");
		    	}
		    	printf("pressione qualquer tecla para voltar");
				getch();
		    	break;
			case 3:
				system("cls");
				fflush(stdin);
				printf("Digite a matricula do aluno. ");
				gets(matriculacmp);
				for(l=0;l<50;l++){
					if(strcmp(matriculacmp,mat[l])==0){
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
			        	
			        	printf("\tO percentual de Faltas do aluno é %.2f %.\n",presenca[l]);
			        	
						printf("\tO status do aluno é: %s\n",status[l]);
						
			    		printf("\n\n");
					}
				}
				
				printf("pressione qualquer tecla para voltar");
				getch();
				break;
			case 4:
				printf("Voçê escolheu sair.");
				break;
			default:
				printf("Opção inválida!");
				break;
		}
	}while(op!=4);
	
	getch();
}
