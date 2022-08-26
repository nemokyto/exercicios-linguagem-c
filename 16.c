#include <stdio.h>
#include <stdlib.h>

/* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
- Ter pelo menos 65 anos,
- Ou ter trabalhado pelo menos 30 anos,
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/


int main(){
    
    // variáveis
    
    int i, serv, apo;
    
    // info
    
    printf("Informe sua Idade: ");
        scanf("%d", &i);
    printf("\nInforme seu Tempo de Servico (em anos): ");
        scanf("%d", &serv);
        
    // condições
    
    if (i >= 65 || serv >= 30) {
        printf("\nPode se aposentar.");
    }
    else if (i >= 60 && serv >= 25) {
        printf("\nTambem pode se aposentar.");
    }
    else if (i < 60){
        printf("\nNao pode se aposentar por Idade.");
    }
    else if (serv < 25){
        printf("\nNao pode se aposentar por Tempo de Servico.");
    }
    else {
        printf("\nTambem nao pode se aposentar.");
    }


	system("pause");
    return 0;
}
