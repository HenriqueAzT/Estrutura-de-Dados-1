#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h" //inclui os Prot�tipos

//Defini��o do tipo Pilha
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

int verificaOrdem(char* expressao){
	Pilha* pi = cria_Pilha();
	
	struct caractere carac;
	
    int i;
    for(i=0; i < strlen(expressao); i++){
		if(expressao[i] == '(' || expressao[i] == '['){
			carac.c = expressao[i];
			insere_Pilha(pi, carac);	
		}else{
			if(Pilha_vazia(pi)){
				libera_Pilha(pi);
				return 0;
			}
			
			consulta_topo_Pilha(pi, &carac);
			remove_Pilha(pi);
			
			if(expressao[i] == ')' && carac.c != '(' || expressao[i] == ']' && carac.c != '['){
				libera_Pilha(pi);
				return 0;
			}
			
			
		}
	}
	
	if(i != strlen(expressao) || !Pilha_vazia(pi)){
		return 0;
	}
    
    libera_Pilha(pi);
    
    return 1;
}
