#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia 10 inteiros e imprima sua m�dia */

int main () {
	
	// vari�veis
	
	int num, sum = 0;
	int i;
	
	//	repeti��es

	  for (i = 0; i < 10; i++ ) {
	  	printf("Digite um numero inteiro: ");
	  	scanf("%d", &num);
	  		sum += num;
	  }
	  
	  // m�dia 
	  
	  printf("\nA media entre os inteiros:  %f", (float) sum / 10);
	  
	  
	  system("pause");
	  return 0;
}
