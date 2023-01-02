#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um numero inteiro positivo “N” e imprima todos os números naturais de 0 até “N” em ordem crescente */

int main() {
	
	
	// variáveis 
	
	int num;
	int i;
	
	// info
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	// repetição
	
	for (i = 0; i <= num; i++) {
    printf("%d ", i);
}
  printf("\n");
	
	
	
	
	
	
	system("pause");
	return 0;
}
