#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia um numero inteiro �N� e depois imprima os N primeiros n�meros naturais �mpares*/

int main() {
  // vari�veis
  int n;
  int i;

  // info
  printf("Digite um numero: ");
  scanf("%d", &n);

  // n�meros �mpares
  for (i = 1; i <= n; i++) {
    printf("\n%d", 2*i - 1);
  }
	printf("\n");
	system("pause");
  	return 0;
}

