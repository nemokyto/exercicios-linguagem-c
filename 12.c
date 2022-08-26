#include <stdio.h>
#include <stdlib.h>

/* 12. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser,
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina */ 

int main () {
	
	// variáveis
	
	float n1, n2, media;
	int confirm1, confirm2;
	
	// info
	
	printf("Insira a nota 1:\n");
		scanf("%f", &n1); 
	printf("Insira a nota 2: \n");
		scanf("%f", &n2);
	
	confirm1 = 0;
	confirm2 = 0;
	//condições
	
	if (n1 >= 0.0 && n1 <= 10.0) {
		confirm1 = 1;
	}
	if (n2 >= 0.0 && n2 <= 10.0 ) {
		confirm2 = 1;
	}
	if (confirm1 == 1 && confirm2 == 1) {
				media = (n1 + n2)/2.0;
				printf("Media: %1.f\n", media);
			}
			else if (confirm1 != 1 || confirm2 != 1) {
				printf("Invalido.\n");
			}
	
	system("pause");
	return 0;
}


