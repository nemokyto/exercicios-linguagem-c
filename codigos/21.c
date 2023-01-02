#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média */


int main() {
	
	// variáveis
	
	int num, sum = 0, count = 0;
	
	
	// repetição
	
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
