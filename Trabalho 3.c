#include <stdio.h>
#include <string.h>
#define MAXN 100

typedef struct {
	char nome[30];
	char cidade[25];
	int qntest;	
} TipoFaculdade;

typedef struct {
	TipoFaculdade Lista[MAXN];
} ListaDeFaculdades;

typedef struct {
	char NomeDiretor[30];
	char Regiao[30];
	ListaDeFaculdades Grupo;
} GrupoDeFaculdades;

int main(int argc, char *argv[]) {  
	
	ListaDeFaculdades Faculdade;
	GrupoDeFaculdades GPFacul;
	
	printf("Digite o nome do diretor: ");
		gets(GPFacul.NomeDiretor);
		
	printf("Digite o nome da regiao: ");
		gets(GPFacul.Regiao);
	
	int i = 0, flagContinuar;	
	do {	

		printf("\n%d) Digite o nome da faculdade: ", i);
		gets(Faculdade.Lista[i].nome);
		
		printf("%d) Digite o nome da cidade: ", i);
		scanf("%s", &Faculdade.Lista[i].cidade);
		
		printf("%d) Digite a quantidade de estudantes: ", i);
		scanf("%d", &Faculdade.Lista[i].qntest);
				
		getchar();
		printf("-----------------------------------------\n\n", i);
		
		i++;
		if (i == MAXN)
			break;
		
		printf("Continuar? (1=Sim / 0=Nao): ");
		scanf("%d", &flagContinuar);
			
		getchar();
		
	} while(flagContinuar);
	
	printf("Nome do Diretor: %s - Regiao: %s \n", GPFacul.NomeDiretor, GPFacul.Regiao);
	printf("\nLISTA DE FACULDADES\n");
	printf("%-4s %-30s %-15s %-15s\n", "#", "NOME", "CIDADE", "QTDE-ESTUDANTES");
	for(int k=0; k<i; k++) {		
        printf("%-4d %-30s %-15s %-15d\n", k, 
			Faculdade.Lista[k].nome, Faculdade.Lista[k].cidade, Faculdade.Lista[k].qntest);
	}		

   return 0;
}

