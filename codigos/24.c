#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia um numero inteiro positivo �N� e imprima todos os n�meros naturais de 0 at� N em ordem decrescente */

int main() {
  // vari�veis
	int num;
	int i;

  // info
  printf("Digite um n�mero inteiro positivo: ");
  scanf("%d", &num);

  // loop
  for (i = num; i >= 0; i--) {
    printf("%d ", i);
  }
  printf("\n");

system("pause");
  return 0;
}

