#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "funcoes.h"

#define tamanho 50
void novotime(int quantidade){
	printf("\nIncluir novo Time\n");

        if(quantos < tamanho){
          printf("\nDigite o codigo do time: ");
          scanf("%d", &menuTimes[quantidade].codigo);

          fflush(stdin);

          printf("\nDigite o nome do Time: ");
          scanf("%s", menuTimes[quantidade].time);

          fflush(stdin);

          printf("\nDigite o endereco: ");
          scanf("%s", menuTimes[quantidade].ender);

          fflush(stdin);

          printf("\nDigite a cidade : ");
          scanf("%s", menuTimes[quantidade].cidade);

          fflush(stdin);

          printf("\nDigite o estado: ");
          scanf("%s", menuTimes[quantidade].estado);

          printf("\nDigite o ano de Fundacao do time: ");
          scanf("%s", menuTimes[quantidade].ano);

          printf("\nTime cadastrado com sucesso\n");

          quantos++;

        }else{
          printf("Erro na inclusao. O cadastro esta cheio\n");
        }
}
void consultar_time(int quantidade){
		int achou, i;
		char nometime[30];
		achou = 0;

        fflush(stdin);

        printf("\nConsultar times pelo nome.\n");
        printf("\nDigite o nome do Time: ");
        scanf("%s", nometime);

        for(i=0; i<quantidade; i++){
          if(strcmp(menuTimes[i].time, nometime) == 0){
            achou = 1;

            printf("\nNome do Time.: %s", menuTimes[i].time);
            printf("\nCodigo.......: %d", menuTimes[i].codigo);
            printf("\nEndereco.....: %s", menuTimes[i].ender);
            printf("\nCidade.......: %s", menuTimes[i].cidade);
            printf("\nEstado.......: %s", menuTimes[i].estado);
            printf("\nFundado em: .: %s\n", menuTimes[i].ano);
          }
    }

        if (achou != 1){
          printf("O Time %s nao foi encontrado no cadastro\n", nometime);
        }
}
void alterar_time(int quantidade){
		int achou, i;
		char nometime[30];
		achou = 0;
        fflush(stdin);

		printf("Digite o nome do time: ");
        scanf("%s", nometime);

		for(i=0; i<=quantidade; i++){
          if(strcmp(menuTimes[i].time, nometime) == 0){
            achou = 1;
            fflush(stdin);

            printf("Digite o novo nome: ");
            scanf("%s", nometime);

            strcpy(menuTimes[i].time,nometime);
            printf("Nome alterado com sucesso\n");
		  }
		 }

		 if(achou == 0){
            printf("Time nao encontrado\n");
		 }
}
void excluir_time(int quantidade){
		int achou, i;
		achou = 0;
        fflush(stdin);

        printf("\nDigite o nome do time que deseja excluir: ");
        scanf("%s", nometime);

        for(i=0; i<quantidade; i++){
            if(strcmp(menuTimes[i].time, nometime) == 0){
                achou = 1;
                strcpy(nometime,menuTimes[quantidade].time);
                strcpy(menuTimes[i].time,nometime);
                strcpy(nometime,menuTimes[quantidade].ano);
                strcpy(menuTimes[i].ano,nometime);
                strcpy(nometime,menuTimes[quantidade].cidade);
                strcpy(menuTimes[i].cidade,nometime);
                menuTimes[i].codigo = menuTimes[quantidade].codigo;
                strcpy(nometime,menuTimes[quantidade].ender);
                strcpy(menuTimes[i].ender,nometime);
                strcpy(nometime,menuTimes[quantidade].estado);
                strcpy(menuTimes[i].estado,quantidade);

                printf("\nTime removido com sucesso\n");
            }
        }
        if(achou == 0){
            printf("\nTime nao cadastrado\n");
        }
}
void imprimir_times(int quantidade){
	int i;
	
	printf("\nImprimir o cadastro de Times\n");

         for(i=0; i<quantidade; i++){
           printf("\nNome do Time.: %s", menuTimes[i].time);
           printf("\nCodigo.......: %i", menuTimes[i].codigo);
           printf("\nEndereco.....: %s", menuTimes[i].ender);
           printf("\nCidade.......: %s", menuTimes[i].cidade);
           printf("\nEstado.......: %s", menuTimes[i].estado);
           printf("\nFundado em...: %s\n", menuTimes[i].ano);

         }
}
