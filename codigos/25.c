#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba dois n�meros. Calcule e mostre: 
- a soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados;
- a multiplica��o dos n�meros �mpares desse intervalo, incluindo os digitados; 
*/

int main() {
  //vari�veis
  int num1, num2;
  int soma_pares = 0, mult_impares = 1;
  int i;

  // info
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  // c�lculo
  for (i = num1; i <= num2; i++) {
    if (i % 2 == 0) {
      soma_pares += i;
    } else {
      mult_impares *= i;
    }
  }

  // resultados
  printf("Soma dos numeros pares: %d\n", soma_pares);
  printf("Multiplica��o dos numeros impares: %d\n", mult_impares);


	system("pause");
  return 0;
}

