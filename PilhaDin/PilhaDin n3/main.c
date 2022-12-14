#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDin.h"
int main(){
    char expressao[20];
	
	strcpy(expressao, "Instituto Federal de Goias");
	
	Pilha* pi = cria_Pilha();
	
	struct caractere carac;
	
    int i;
    for(i=0; i < strlen(expressao); i++){
		carac.c = expressao[i];
        insere_Pilha(pi,carac);
	}
	
    imprime_Pilha(pi);
    
    libera_Pilha(pi);
    system("pause");
    return 0;
}

