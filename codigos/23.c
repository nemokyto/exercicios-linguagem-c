#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia um numero inteiro positivo �N� e imprima todos os n�meros naturais de 0 at� �N� em ordem crescente */

int main() {
	
	
	// vari�veis 
	
	int num;
	int i;
	
	// info
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	// repeti��o
	
	for (i = 0; i <= num; i++) {
    printf("%d ", i);
}
  printf("\n");
	
	
	
	
	
	
	system("pause");
	return 0;
}
