#include <stdio.h>
#include <string.h>


typedef struct {
	char nome[30];
	char cidade[25];
	int qntest;	
} TipoPessoa;

int main(int argc, char *argv[]) {  

	TipoPessoa a;
	
	printf("Digite o nome da faculdade: ");	
	gets(a.nome);
		
	printf("Digite o nome da cidade: ");	
	scanf("%s", &a.cidade);
	
	printf("Digite a quantidade de estudantes: ");	
	scanf("%d", &a.qntest);
	
	printf("\nA faculdade %s esta localizada na cidade de %s com %d estudantes!", 
		a.nome, a.cidade, a.qntest);

   return 0;
}
