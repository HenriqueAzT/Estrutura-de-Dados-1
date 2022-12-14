#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDin.h"
int main(){
    char x[20];
    char y[20];
	
	strcpy(x, "ACGN");
	strcpy(y, "NGCA");
	
	if(verificaOrdem(x, y)){
		printf("\nSUCESSO\n");
	}else{
		printf("\nERRO\n");
	}
	
    system("pause");
    return 0;
}

