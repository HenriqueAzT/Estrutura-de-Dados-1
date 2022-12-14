#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h"
int main(){
    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};
    
	Pilha* pi = cria_Pilha();
	Pilha* pi2 = cria_Pilha();
	Pilha* piaux = cria_Pilha();
    
    int i;
    for(i=0; i < 4; i++)
        insere_Pilha(pi,a[i]);

	printf("\nPILHA 1 ANTES\n");
    imprime_Pilha(pi);
    
    copiaPilha(pi, pi2, piaux);
    
    printf("\nPILHA 1 DEPOIS\n");
    imprime_Pilha(pi);
    printf("\nPILHA 2\n");
    imprime_Pilha(pi2);
    
    libera_Pilha(pi);
    libera_Pilha(pi2);
    libera_Pilha(piaux);
    system("pause");
    return 0;
}

