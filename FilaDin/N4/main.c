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
    printf("\nFILA 1\n");
    imprime_Fila(fi); 

	struct aluno b[8] = {{1,"Joao",9.5,7.8,8.5},
                         {2,"Maria",7.5,8.7,6.8},
                         {3,"Cleber",9.7,6.7,8.4},
                         {4,"Gabriel",5.7,6.1,7.4},
						 {5,"Lara",3.5,7.8,4.5},
                         {6,"Vitor",5.5,5.7,5.8},
                         {7,"Felipe",6.7,8.7,3.4},
                         {8,"Henrique",5.7,7.1,1.4}};
    
	Fila* fi2 = cria_Fila();

    for(i=0; i < 8; i++){
        insere_Fila(fi2,b[i]);        
    }
    printf("\nFILA 2\n");
    imprime_Fila(fi2); 
	Fila* fiaux1 = cria_Fila();
	Fila* fiaux2 = cria_Fila();
	
	Fila* fi3 = cria_Fila();

	intercalaFila(fi, fi2, fi3, fiaux1, fiaux2);
	
	
	printf("\nDEPOIS DA IMPLEMENTACAO\n");
	
	imprime_Fila(fi);
	imprime_Fila(fi2);

	printf("\nFILA INTERCALADA\n");
	
	imprime_Fila(fi3);




    libera_Fila(fi);
    libera_Fila(fiaux1);
    libera_Fila(fi2);
    libera_Fila(fiaux2);
    libera_Fila(fi3);

    
    system("pause");
    return 0;
}


