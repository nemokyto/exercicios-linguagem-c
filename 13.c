#include <stdio.h>
#include <stdlib.h>

/* 13. Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes f�rmulas (onde h corresponde � altura):
- Homens: (72.7*h) - 58
- Mulheres: (62.1*h) - 44.7 */

int main () {

	// vari�veis
	
	int choice;
	float h;
	float p1;
	float p2;
	
	//info
	
	printf("Seu sexo (1- Masculino, 2- Feminino): ");
		scanf("%d", &choice);
	printf ("\nSua altura (em metros): ");
		scanf("%f", &h);
		
	//condi��es
	
	if (choice == 1) {
		p1 = ((72.7*h)-58);
		 printf("\nSeu peso ideal deve ser: %2.f kg\n", p1);
	}
	else if (choice == 2) {
		p2 = ((62.1*h)-44.7);
		 printf("\nSeu peso ideal deve ser: %2.f kg\n", p2);
	}
	else {
		printf("\nErro!\n");
	}
	
	
system("pause");
return 0;
}
