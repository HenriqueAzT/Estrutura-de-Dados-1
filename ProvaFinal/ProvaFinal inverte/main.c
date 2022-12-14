#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDin.h"
int main(){
    char texto[40] = "Bacharelado em Sistemas de Informacao";
    char invertido[40];
	
	
	Pilha* pi = cria_Pilha();

	
	struct caractere carac;
	
	inverte_texto(texto, invertido);
	
    int i;
    for(i=0; i < strlen(invertido); i++){
		carac.c = invertido[i];
        insere_Pilha(pi,carac);
	}
	imprime_Pilha(pi);
	
    
    
    libera_Pilha(pi);
    system("pause");
    return 0;
}

