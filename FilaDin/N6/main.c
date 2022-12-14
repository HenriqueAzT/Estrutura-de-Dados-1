#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h"
int main(){
    struct aluno al,a[4] = {{1,"Andre",9.5,7.8,8.5},
                         {2,"Ricardo",7.5,8.7,6.8},
                         {3,"Bianca",9.7,6.7,8.4},
                         {4,"Ana",5.7,6.1,7.4}};
    
	Fila* fi = cria_Fila();
    int i;
    for(i=0; i < 4; i++){
        insere_Fila(fi,a[i]);        
    }

    imprime_Fila(fi);    
    
    struct aluno b[4] = {{5,"Luan",9.5,7.8,8.5},
                         {6,"Jonas",7.5,8.7,6.8},
                         {7,"Bernardo",9.7,6.7,8.4},
                         {8,"Pedro",5.7,6.1,7.4}};
    
	Fila* fi2 = cria_Fila();
    for(i=0; i < 4; i++){
        insere_Fila(fi2,b[i]);        
    }

    imprime_Fila(fi2); 
    
    Fila* fiaux1 = cria_Fila();
    Fila* fiaux2 = cria_Fila();
    Fila* fi3 = cria_Fila();
    
    ordemCrescente(fi, fi2, fi3, fiaux1, fiaux2, &al);
    
    imprime_Fila(fi3); 

    libera_Fila(fi);
    libera_Fila(fi2);
    libera_Fila(fi3);
    system("pause");
    return 0;
}


