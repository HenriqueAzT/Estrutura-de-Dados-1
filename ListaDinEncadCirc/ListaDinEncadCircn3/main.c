#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadCirc.h"
int main(){
    struct aluno a[8] = {{8,"Andre",9.5,7.8,8.5},
                         {7,"Ricardo",7.5,8.7,6.8},
                         {6,"Bianca",9.7,6.7,8.4},
                         {5,"Ana",5.7,6.1,7.4},
						 {4,"Lucas",9.5,7.8,8.5},
                         {3,"Jonas",7.5,8.7,6.8},
                         {2,"Carlos",9.7,6.7,8.4},
                         {1,"Marcela",5.7,6.1,7.4}};
    Lista* l1 = cria_lista();
    

    int i;
    for(i=0; i < 8; i++)
        insere_lista_inicio(l1,a[i]);

    imprime_lista(l1);
         
	verificaOrdem(l1);
    
    libera_lista(l1);
	
    system("pause");
    return 0;
}

