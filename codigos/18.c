#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que escreva na tela, de 1 at� 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repeti��o �for�, a segunda
vez a estrutura �while� e a terceira usando "do while" */

int main(){
    
    // vari�veis

  int i, j, z;
  
    // repeti��es

   for( i = 0 ; i <= 10 ; i=++i){
		printf("for ");
    	printf("%d \n", i);
   }

   while(j <= 10){
   		printf("while ");
    	printf("%d \n", j);
       j=++j;
   }

    do {
    	printf("do... while ");
    	printf("%d \n", z);
        z=++z;
    }
        while (z <= 10);
        
        
    system("pause");    
    return 0;
}
