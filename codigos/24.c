#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um numero inteiro positivo “N” e imprima todos os números naturais de 0 até N em ordem decrescente */

int main() {
  // variáveis
	int num;
	int i;

  // info
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &num);

  // loop
  for (i = num; i >= 0; i--) {
    printf("%d ", i);
  }
  printf("\n");

system("pause");
  return 0;
}

