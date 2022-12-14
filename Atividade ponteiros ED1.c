#include <stdio.h>

void operacoes (int a, int b, int *soma, int *subtracao) {
	int n1, n2;
	printf("Digite o primeiro valor \n");
	scanf("%f", &a);
	
	printf("Digite o segundo valor \n");
	scanf("%f", &b);
	
	n1 = a + b;
	*soma = n1;
	n2 = a - b;
	*subtracao = n2;
	
	printf("O valor da soma e:", *soma );
	printf("O valor da subtracao e:", *subtracao );
	
}
int main() {
	int resultado;
	resultado = operacoes;
	printf(resultado);
	return 0;
}
