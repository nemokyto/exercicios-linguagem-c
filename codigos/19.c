#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que pe�a ao usu�rio para digitar 10 valores e some-os
e imprima o resultado */

int main() {
	
	
	// vari�veis
	
	int num, sum = 0;
	int i;

	// repeti��es
	for(i = 0; i < 10; i++) {
		
		printf("digite o %do numero: ", i+1);
			scanf("%d", &num);
			
		sum+=num;
	}
	
	printf("a soma dos valores equivale a: %d\n", sum);
	
	
	system("pause");
	return 0;
	
}
