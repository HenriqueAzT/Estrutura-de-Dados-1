#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h"
int main(){
    struct aluno al, a[6] = {{2,"Andre",2.1,2.2,2.3},
                         {4,"Ricardo",4.1,4.2,4.3},
                         {1,"Bianca",1.1,1.2,1.3},
                         {3,"Ana",3.1,3.2,3.3},						 
						  {5,"Carla",5.1,5.1,5.3},
						  {7,"Luana",7.1,7.2,7.3}					 
						 
						 };
    Lista* li = cria_lista();
    
	
	
	
    int g=0;
    for(g; g < 6; g++)
        insere_lista_final(li,a[g]);    
    
	/* 
    pElem p;					
	p = numero1(li, 5);
	printf("%d\n", p);
    */
    /*
	Lista* l1 = cria_lista();
    Lista* l2 = cria_lista();
    numero2(li, 4, l1, l2);
    */
    
    /*
	imprime_lista(l1);
    imprime_lista(l2);
    */
    
    //LISTA NORMAL
    imprime_lista(li);
    
    //                         pos1, pos2
    trocar_elementos_versao2(li, 1, 2);
    
    //LISTA TROCADA
    imprime_lista(li);
    
    
    
    libera_lista(li);
    system("pause");
    return 0;
}
