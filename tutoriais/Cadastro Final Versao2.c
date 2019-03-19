#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	int l, c, cpf[5], rg[5], mat[5];
	float falt[5];
    char nm[5][50]={0};
    char end[5][50]={0};
    fflush(stdin);
    float sm, nt[5][5]={0};
	
	do
	{
		system("cls");
		printf("**********SISTEMA CADASTRAL***********\n");
		printf("****************V 3.0*****************\n\n");
		printf("**********BEM VINDO***********");
		printf("\n*****SELECIONE A OPÇÃO******\n");
		printf("\n1_CADASTRAR ALUNOS");
		printf("\n2_CADASTRAR NOTAS DE ALUNOS");
		printf("\n3_CADASTRAR FALTAS DE ALUNOS");
		printf("\n4_EXIBIR DADOS DOS ALUNOS");
		printf("\n5_EXIBIR PERCENTUAL DE FALTAS");
		printf("\n6_EXIBIR STATUS E NOTAS DOS ALUNOS");
		printf("\n7_SAIR\n");
		scanf("%d",&op);
		getchar();
		system ("cls");
			if (op == 1){
			system("cls");
            	for(l=0;l<5;l++){
            		system("cls");
            		fflush(stdin);
                	printf("Digite o nome do %dº aluno(a): ",l+1);
                	gets(nm[l]);
                	printf("Digite a matrícula do aluno(a): ",l+1);
                	scanf("%d",&mat[l]);
                	printf("Digite o cpf do aluno(a): ",l+1);
                	scanf("%d",&cpf[l]);
            	    printf("Digite o rg do aluno(a): ",l+1);
            	   	scanf("%d",&rg[l]);
                	printf("Digite o endereço do aluno(a): ",l+1);
                	fflush(stdin);
                	gets(end[l]);
				}
			}
			else if(op == 2){			
				    for(l=0;l<5;l++){          
				    sm=0;
				    system("cls");	
                		for(c=0;c<4;c++){
                            printf("%dª Nota do aluno(a): [%s]: \n",c+1,nm[l]);
                            scanf("%f",&nt[l][c]);
                            sm= sm+nt[l][c];
                            printf("\n\n");
                    	}
                            nt[l][c]=sm/c;
	            	}
	        getchar();
	    	}
	        else if(op == 3){
	        	 for(l=0;l<5;l++){  
	        	 system("cls");	
				 	printf("Percentual de faltas do aluno(a) [%s]: \n",nm[l]);        
                 	scanf("%f",&falt[l]);
                 	system("cls");	
                 }
	    	}
	    	 else if(op == 4){
			 	for(l=0;l<5;l++){
					printf("Dados do aluno [%s]:\n\n",nm[l]);
                		printf("\tMatrícula do aluno(a): %d\n",mat[l]);
                       	printf("\tCPF do aluno(a): %d\n",cpf[l]);
						printf("\tRg do aluno(a) %d:\n",rg[l]);
						printf("\tEndereço do aluno(a) %s\n\n",end[l]);
				}
			getchar();
			}else if(op == 5){
			 	for(l=0;l<5;l++){
			 		printf("\tPercentual de presenca do aluno(a) %s: %f %\n",nm[l],falt[l]);
				}
			}
			else if(op == 6){
			printf("\n****STATUS E NOTAS DOS ALUNOS****\n\n");
			 	for(l=0;l<5;l++){
			 		for(c=0;c<4;c++){
					 	printf("\t%dª Nota do aluno(a):: (%.2f) \n",c+1,nt[l][c]);
                	}
                	printf("\tA Mádia do aluno(a) é :: (%.2f)\n",nt[l][c]);
                	printf("\tPercentual de presenca do aluno(a) %s: %f %\n",nm[l],falt[l]);
					printf("\n\n");
                	
                		if (falt[l]<75){
                			printf("\tAluno reprovado por faltas\n\n\n");
                		}else{
                			if (nt[l][c]>7){
                				printf("\tAluno aprovado\n\n\n");
                			}
                			else if (nt[l][c]<4){
                				printf("\tAluno reprovado por notas\n\n\n");
                			}
                			else{
                				printf("\tAluno em Recuperação\n\n\n");
                			}
                		}
                	}
                	
						
			}
			getchar();
			system("cls");
	}while(op != 7 || op < 7);
}
