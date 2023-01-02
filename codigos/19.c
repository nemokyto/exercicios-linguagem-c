#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que peça ao usuário para digitar 10 valores e some-os
e imprima o resultado */

int main() {
	
	
	// variáveis
	
	int num, sum = 0;
	int i;

	// repetições
	for(i = 0; i < 10; i++) {
		
		printf("digite o %do numero: ", i+1);
			scanf("%d", &num);
			
		sum+=num;
	}
	
	printf("a soma dos valores equivale a: %d\n", sum);
	
	
	system("pause");
	return 0;
	
}
