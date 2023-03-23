#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h" 
//inclui os Protótipos
//Definição do tipo Fila
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;
//Definição do Nó Descritor da Fila
struct fila{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Fila* cria_Fila(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fi != NULL){
        fi->final = NULL;
        fi->inicio = NULL;
        fi->qtd = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    if(fi != NULL){
        Elem* no;
        while(fi->inicio != NULL){
            no = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
}

int consulta_Fila(Fila* fi, struct aluno *al){
    if(fi == NULL)
        return 0;
    if(fi->inicio == NULL)//fila vazia
        return 0;
    *al = fi->inicio->dados;
    return 1;
}

int insere_Fila(Fila* fi, struct aluno al){
    if(fi == NULL)
        return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = NULL;
    if(fi->final == NULL)//fila vazia
        fi->inicio = no;
    else
        fi->final->prox = no;
    fi->final = no;
    fi->qtd++;
    return 1;
}

int remove_Fila(Fila* fi){
    if(fi == NULL)
        return 0;
    if(fi->inicio == NULL)//fila vazia
        return 0;
    Elem *no = fi->inicio;
    fi->inicio = fi->inicio->prox;
    if(fi->inicio == NULL)//fila ficou vazia
        fi->final = NULL;
    free(no);
    fi->qtd--;
    return 1;
}

int tamanho_Fila(Fila* fi){
    if(fi == NULL)
        return 0;
    return fi->qtd;
}

int Fila_vazia(Fila* fi){
    if(fi == NULL)
        return 1;
    if(fi->inicio == NULL)
        return 1;
    return 0;
}

int Fila_cheia(Fila* fi){
    return 0;
}

void imprime_Fila(Fila* fi){
    if(fi == NULL)
        return;
    Elem* no = fi->inicio;
    
	printf("\n");
  	printf("%-4s %-4s %-10s %-4s %-4s %-4s\n", "#", "MAT", 
	  "NOME", "N1", "N2", "N3");
  	printf("------------------------------------\n");   
	
	int i=0;
	while(no != NULL){
        printf("%-4d %04d %-10s %-4.1f %-4.1f %-4.1f \n", ++i, 
		no->dados.matricula, no->dados.nome, no->dados.n1, 
		no->dados.n2, no->dados.n3);
        no = no->prox;
    }
}

void intercalaFila(Fila* fi, Fila* fi2, Fila* fi3, Fila* fiaux1, Fila* fiaux2){
	if(fi == NULL)
        return;
    if(fi2 == NULL)
    	return;
    Elem* no = fi->inicio;
    struct aluno al;
    int i=0;
    while(!Fila_vazia(fi) || !Fila_vazia(fi2)){
    	if(!Fila_vazia(fi)){
    		consulta_Fila(fi, &al);
    		insere_Fila(fiaux1, al);
    		remove_Fila(fi);
		}
		if(!Fila_vazia(fi2)){
    		consulta_Fila(fi2, &al);
    		insere_Fila(fiaux2, al);
    		remove_Fila(fi2);
		}
	}
	while(!Fila_vazia(fiaux1) || !Fila_vazia(fiaux2)){
    	if(!Fila_vazia(fiaux1)){
    		consulta_Fila(fiaux1, &al);
    		insere_Fila(fi, al);
    		insere_Fila(fi3, al);
    		remove_Fila(fiaux1);
		}
		if(!Fila_vazia(fiaux2)){
    		consulta_Fila(fiaux2, &al);
    		insere_Fila(fi2, al);
    		insere_Fila(fi3, al);
    		remove_Fila(fiaux2);
		}
	}
}
