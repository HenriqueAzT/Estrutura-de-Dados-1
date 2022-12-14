#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h"
int main(){
    struct aluno al,a[8] = {{1,"Andre",9.5,7.8,8.5},
                         {2,"Ricardo",7.5,8.7,6.8},
                         {3,"Bianca",9.7,6.7,8.4},
                         {4,"Ana",5.7,6.1,7.4},
						 {5,"Lucas",3.5,7.8,4.5},
                         {6,"Juan",5.5,5.7,5.8},
                         {7,"Eduardo",6.7,8.7,3.4},
                         {8,"Carla",5.7,7.1,1.4}};
    
	Fila* fi = cria_Fila();
    int i;
    for(i=0; i < 8; i++){
        insere_Fila(fi,a[i]);        
    }
    imprime_Fila(fi); 
    
    Fila* fiaux = cria_Fila();
    
    seAprovado(fi, fiaux, &al);
	
	
    imprime_Fila(fi); 
	
	imprime_Fila(fiaux);
	
	printf("\nLISTA DE ALUNOS APROVADOS:\n");
	imprime_Fila(fi); 

    libera_Fila(fi);
    libera_Fila(fiaux);
    system("pause");
    return 0;
}


