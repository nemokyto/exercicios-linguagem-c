#include <stdio.h>
#include <stdlib.h>

// 11. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar, positivo ou negativo.

int main() {
	
	// info
	
	int x; 
	
	printf("informe um numero inteiro: ");
	scanf("%d", &x);
	
	// condições principais
	
	if(x > 0 && x % 2 == 0) {
		printf("\n%d, numero positivo e par!\n", x);
	}	
	else if (x > 0 && x % 2 == 1) {
		printf("\n%d, numero positivo e impar!\n", x);
	}
	
	else if (x < 0 && x % 2 == 0) {
		printf ("\n%d, numero negativo e par!\n", x);
	}
	
	else if (x < 0 && x % 2 == -1) {
		printf ("\n%d, numero negativo e impar!\n", x);
	}
	
	// condições secundárias
	
	else if (x == 0) {
		printf ("\nnumero neutro.\n");
	}

	
	
	system("pause");
	return 0;
}
