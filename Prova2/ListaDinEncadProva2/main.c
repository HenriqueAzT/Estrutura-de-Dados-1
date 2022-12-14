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
	Lista* li_1 = cria_lista();
	int i;
    for(i=0; i < 6; i++)
        insere_lista_final(li_1,a[i]);
 
    imprime_lista(li_1); 
	struct aluno b[6] = {{8,"Lucas",2.1,2.2,2.3},
                         {10,"Gabriel",4.1,4.2,4.3},
                         {9,"Mariana",1.1,1.2,1.3},
                         {11,"Julia",3.1,3.2,3.3},						 
						  {13,"Larissa",5.1,5.1,5.3},
						  {12,"Emily",7.1,7.2,7.3}					 
						 
						 };
	Lista* li_2 = cria_lista();

    for(i=0; i < 6; i++)
        insere_lista_final(li_2,b[i]);
 
    imprime_lista(li_2); 
	struct aluno c[6] = {{15,"Rafael",2.1,2.2,2.3},
                         {14,"Italo",4.1,4.2,4.3},
                         {16,"Eduardo",1.1,1.2,1.3},
                         {18,"Marcela",3.1,3.2,3.3},						 
						  {17,"Geovana",5.1,5.1,5.3},
						  {19,"Robert",7.1,7.2,7.3}					 
						 
						 };
	Lista* li_3 = cria_lista();

    for(i=0; i < 6; i++)
        insere_lista_final(li_3,c[i]);
 
    imprime_lista(li_3); 
    
    Lista* li_4 = cria_lista();
    
    intercala(li_1, li_2, li_3, li_4); 
    
    imprime_lista(li_4);
    
    libera_lista(li_1);
    system("pause");
    return 0;
}


