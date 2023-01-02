#include <stdio.h>
#include <stdlib.h>

/*27. Escreva um programa que leia um numero inteiro positivo “N” e em seguida imprima “N” linhas do chamado Triângulo de Floyd. */

int main() {
  //  variáveis
  int num;
  int i, j;

  // infor
  printf("Digite um numero positivo: ");
  scanf("%d", &num);

  // impressão do trinângulo de floyd 
  for (i = 1; i <= num; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", i*j);
    }
    printf("\n");
  }

  return 0;
}

