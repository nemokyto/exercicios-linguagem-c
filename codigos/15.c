#include <stdio.h>
#include <stdlib.h>

/* 15. Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
- "Telefonou para a vítima?" - "Esteve no local do crime?" - "Mora perto da vítima?" - "Devia para a vítima?" - "Já trabalhou com a vítima?"
O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve
ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente". */

int main () {
	
	// variáveis
	
	int c1, c2, c3, c4, c5, x;
	
	// info
	
	printf("Telefonou para a vitima? (0 - Nao, 1 - Sim) ");
		scanf("%d", &c1);
	printf("\nEsteve no local dO crime? (0 - Nao, 1 - Sim) ");
		scanf("%d", &c2);
	printf("\nMora perto da vitima? (0 - Nao, 1 - Sim) ");
		scanf("%d", &c3);
	printf("\nDevia para a vitima? (0 - Nao, 1 - Sim) ");
		scanf("%d", &c4);
	printf("\nJa trabalhou com a vitima? (0 - Nao, 1 - Sim) ");
		scanf("%d", &c5);
	
	x = (c1+c2+c3+c4+c5);
	
	// condições
	
	if (x < 2 && x > 0) {
		printf("Inocente.\n");
	}
	else if (x = 2) {
		printf("Suspeito.\n");
	}
	else if (x > 2 && x <= 4) {
		printf("Cumplice.\n");
	}
	else if (x = 5) {
		printf("Assassino.\n");
	}
	else {
		printf("Inválido.\n");
	}
		
system("pause");
return 0;
	
}


