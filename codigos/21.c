#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia */


int main() {
	
	// vari�veis
	
	int num, sum = 0, count = 0;
	
	
	// repeti��o
	
	while(count < 10) {
		printf("Digite um numero positivo: ");
		scanf("%d", &num);
			if (num > 0) {
				sum += num;
    			count++;
			}
	}
	

	// resultado
	
	printf("\nMedia = %2.f\n", (float) sum / 10);

	system("pause");
	return 0;
}
