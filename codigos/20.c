#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 inteiros e imprima sua média */

int main () {
	
	// variáveis
	
	int num, sum = 0;
	int i;
	
	//	repetições

	  for (i = 0; i < 10; i++ ) {
	  	printf("Digite um numero inteiro: ");
	  	scanf("%d", &num);
	  		sum += num;
	  }
	  
	  // média 
	  
	  printf("\nA media entre os inteiros:  %f", (float) sum / 10);
	  
	  
	  system("pause");
	  return 0;
}
