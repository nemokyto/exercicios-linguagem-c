#include <stdio.h>
#include <stdlib.h>

/*27. Escreva um programa que leia um numero inteiro positivo �N� e em seguida imprima �N� linhas do chamado Tri�ngulo de Floyd. */

int main() {
  //  vari�veis
  int num;
  int i, j;

  // infor
  printf("Digite um numero positivo: ");
  scanf("%d", &num);

  // impress�o do trin�ngulo de floyd 
  for (i = 1; i <= num; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", i*j);
    }
    printf("\n");
  }

  return 0;
}

