#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaDin.h"
int main(){
    char expressao[20];
	
	strcpy(expressao, "([]()([[()]])([]))");
	
	if(verificaOrdem(expressao)){
		printf("\nSUCESSO\n");
	}else{
		printf("\nERRO\n");
	}
	
    system("pause");
    return 0;
}

