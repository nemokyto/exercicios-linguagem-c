#include <stdio.h>
#include <stdlib.h>

/* 15. Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:
- "Telefonou para a v�tima?" - "Esteve no local do crime?" - "Mora perto da v�tima?" - "Devia para a v�tima?" - "J� trabalhou com a v�tima?"
O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime. Se a pessoa responder positivamente a 2 quest�es ela deve
ser classificada como "Suspeita", entre 3 e 4 como "C�mplice" e 5 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente". */

int main () {
	
	// vari�veis
	
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
	
	// condi��es
	
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
		printf("Inv�lido.\n");
	}
		
system("pause");
return 0;
	
}


