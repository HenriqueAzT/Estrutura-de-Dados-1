#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDin.h" //inclui os Protótipos

//Definição do tipo Pilha
struct elemento{
    struct caractere dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Pilha* cria_Pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)
        *pi = NULL;
    return pi;
}

void libera_Pilha(Pilha* pi){
    if(pi != NULL){
        Elem* no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int consulta_topo_Pilha(Pilha* pi, struct caractere *c){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    *c = (*pi)->dados;
    return 1;
}

int insere_Pilha(Pilha* pi, struct caractere c){
    if(pi == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = c;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

int remove_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    Elem *no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
}

int tamanho_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    int cont = 0;
    Elem* no = *pi;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int Pilha_cheia(Pilha* pi){
    return 0;
}

int Pilha_vazia(Pilha* pi){
    if(pi == NULL)
        return 1;
    if(*pi == NULL)
        return 1;
    return 0;
}

void imprime_Pilha(Pilha* pi){
    if(pi == NULL)
        return;
    Elem* no = *pi;
    
	
	printf("\n");
  	printf("%-4s %-4s \n", "#", "CARAC");
  	printf("----------------------------------------\n");
  	
  	int i=0;
	while(no != NULL){
        printf("%-4d %c\n", ++i, no->dados.c);
        printf("----------------------------------------\n");
        no = no->prox;
    }
}

int verificaOrdem(char* x, char* y){
	Pilha* pi = cria_Pilha();
	Pilha* pi2 = cria_Pilha();
	Pilha* piaux = cria_Pilha();
	
	struct caractere carac;
	struct caractere caract;
	struct caractere c;
	Elem* no = *pi;
	
    int i=0;
    while(i < strlen(y) || i < strlen(x)){
		
		caract.c = x[i];
		insere_Pilha(pi, caract);
		carac.c = y[i];
		insere_Pilha(pi2, carac);
		i++;
		
	}
	while(!Pilha_vazia(pi2)){
	
	consulta_topo_Pilha(pi2, &c);
	insere_Pilha(piaux, c);
	remove_Pilha(pi2);
	
	}

	while(!Pilha_vazia(pi) || !Pilha_vazia(piaux)){
		
		
		consulta_topo_Pilha(pi, &c);
		caract.c = x[i];
		consulta_topo_Pilha(piaux, &c);
		carac.c = y[i];
	
		if(carac.c == caract.c){
			remove_Pilha(pi);
			remove_Pilha(piaux);
		}
		i++;
	}
	
	if(Pilha_vazia(pi) && Pilha_vazia(piaux)){
		return 1;
	}else{
		return 0;
	}
		
	printf("\nPILHA1\n");
	imprime_Pilha(pi);
	printf("\nPILHA2\n");
	imprime_Pilha(pi2);
	printf("\nPILHAAUX\n");
	imprime_Pilha(piaux);


    libera_Pilha(pi);
    libera_Pilha(pi2);
    libera_Pilha(piaux);
    
    
}
