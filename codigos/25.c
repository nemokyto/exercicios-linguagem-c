#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba dois números. Calcule e mostre: 
- a soma dos números pares desse intervalo de números, incluindo os números digitados;
- a multiplicação dos números ímpares desse intervalo, incluindo os digitados; 
*/

int main() {
  //variáveis
  int num1, num2;
  int soma_pares = 0, mult_impares = 1;
  int i;

  // info
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  // cálculo
  for (i = num1; i <= num2; i++) {
    if (i % 2 == 0) {
      soma_pares += i;
    } else {
      mult_impares *= i;
    }
  }

  // resultados
  printf("Soma dos numeros pares: %d\n", soma_pares);
  printf("Multiplicação dos numeros impares: %d\n", mult_impares);


	system("pause");
  return 0;
}

