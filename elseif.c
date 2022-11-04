#include <stdio.h>

/*Receba a média de 10 alunos em um vetor, mostre a média geral e a
quantidade de alunos que tiveram média igual ou acima da média geral.*/

int main(){
double notas[10];
int i;



for(i = 0; i <= 9; i++){
    printf("Digite uma nota\n");
    scanf("%d", &notas[i]);
    
    printf("%d elementos: %2d\n", (i+1), notas[i]);
}

 return 0;
}
