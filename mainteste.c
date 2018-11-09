#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <funcoes.h>


int main()
{
	int quantidade = 0;
	char opcao;
do{
	
	fflush(stdin);

    printf("\n\n==============================================\n\n");
    printf("\n         G E R E N C I A M E N T O");
    printf("\n   D E   T I M E S");
    printf("    D E       F U T E B O L\n\n");

    printf("\n\n===============================================\n");

    printf("\nN. INCLUIR NOVO TIME");
    printf("\nC. CONSULTAR TIMES PELO NOME");
    printf("\nA. ALTERAR UM TIME");
    printf("\nE. EXCLUIR UM TIME");
    printf("\nI. IMPRIMIR O CADASTRO DE TIMES");
    printf("\nL. LIMPAR TELA");
    printf("\nS. SAIR");


    printf("\n\n===============================================\n");
    
    printf("\nDigite a opcao desejada: ");
    scanf("%c", &opcao);
    
	
	switch(opcao){
		case 'N': // Incluir Novo Time
			void novo_time(int quantidade);
			break;
		case 'C': // Consultar um time pelo nome
			void consultar_time(int quantidade);
			break;
		 case 'A': // Alterar um Time
		 	void alterar_time(int quantidade);
		 	break;
		 case 'E': // Excluir um Time
		 	void excluir_time(int quantidade);
		 	quantidade-=2;
		 	break;
		 case 'I': // Imprimir o Cadastro de Times
		 	void imprimir_times(int quantidade);
		 	break;
		 case 'L': // Limpar tela
		 	printf("\nLimpando tela..\n");
			system("cls");
		 	break;
		 case 'S': //Sair
		 	printf("\n===============================================\n");

        	printf("\n A T E  M A I S ! \n");

        	printf("\n===============================================\n");
		 	default:
		 		printf("Opcao incorreta");
		 		break;
	}
		quantidade++;
		} while(opcao != 'S');
		
    return 0;
}
