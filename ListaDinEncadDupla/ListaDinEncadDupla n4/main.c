#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDupla.h"
int main(){
    struct aluno al, a[4] = {{1,"Andre",9.5,7.8,8.5},
                         {2,"Ricardo",7.5,8.7,6.8},
                         {3,"Bianca",9.7,6.7,8.4},
                         {4,"Ana",5.7,6.1,7.4}};
    Lista* l1 = cria_lista();

    int i;
    for(i=0; i < 4; i++)
        insere_lista_ordenada(l1,a[i]);

    imprime_lista(l1);

	///////////////////////////////////////////LISTA 2//////////////////////////////////////////////////////////
    
    struct aluno b[4] = {{5,"Lucas",9.5,7.8,8.5},
                         {6,"Eduardo",7.4,8.7,6.8},
                         {7,"Junior",9.7,6.7,8.4},
                         {8,"Herick",5.7,6.1,7.4}};
    Lista* l2 = cria_lista();
 	for(i=0; i < 4; i++)
        insere_lista_ordenada(l2,b[i]);
        
    imprime_lista(l2);
 
 	////////////////////////////////////////////////////////////////////////////////////////////////////////////
 	
 	/////////////////// NUMERO 4 ////////////////////////
 	
 	printf("\nIGUALDADE DE LISTAS (NUMERO4)\n");
 	
 	verificaIgualdade(l1, l2);
 	
 	/////////////////////////////////////////////////////
 	
    libera_lista(l2);
    libera_lista(l1);
    
    system("pause");
    return 0;
}

