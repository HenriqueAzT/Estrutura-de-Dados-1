#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadCirc.h"
int main(){
    struct aluno a[8] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4},
						 {6,"Lucas",9.5,7.8,8.5},
                         {5,"Jonas",7.5,8.7,6.8},
                         {8,"Carlos",9.7,6.7,8.4},
                         {7,"Marcela",5.7,6.1,7.4}};
    Lista* l1 = cria_lista();
    

    int i;
    for(i=0; i < 8; i++)
        insere_lista_inicio(l1,a[i]);

    imprime_lista(l1);
          
	Lista* l2 = cria_lista();
    Lista* l3 = cria_lista();
         
    dividirLista(l1, 4, l2, l3);  
	
	imprime_lista(l1);
	imprime_lista(l2);
	imprime_lista(l3);
    
    libera_lista(l1);
    libera_lista(l2);
    libera_lista(l3);
    
    system("pause");
    return 0;
}

