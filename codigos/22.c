#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um numero inteiro “N” e depois imprima os N primeiros números naturais ímpares*/

int main() {
  // variáveis
  int n;
  int i;

  // info
  printf("Digite um numero: ");
  scanf("%d", &n);

  // números ímpares
  for (i = 1; i <= n; i++) {
    printf("\n%d", 2*i - 1);
  }
	printf("\n");
	system("pause");
  	return 0;
}

