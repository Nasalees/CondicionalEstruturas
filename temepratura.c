/*Escreva um programa para receber a temperatura máxima em cada um dos dia de uma semana. No final mostrar o nome do dia da semana que teve a maior temperatura.


Observações:
Considerar que não houveram dias da semana com a mesma temperatura máxima.
O sistema deverá funcionar para qualquer região do planeta.
1 = domingo, 2 = segunda, ... 7 = sábado*/

#include <stdio.h>

int main(){

int tempMax = 0;
int diaSemana;
int tempDias;
int diaMaisQuente;

for(int i = 1 ; i <= 7 ; i++){
    printf("Digite a temperatura dos dias:\n");
    scanf("%d", &tempDias);

    if(tempDias > tempMax){
       diaMaisQuente = tempDias;
       diaSemana = i; 

    }
}

switch (diaSemana){
case 1:
    printf("O dia mais quente da semana e domingo! %d °", diaMaisQuente);
    break;
case 2:
    printf("O dia mais quente da semana e segunda %d °", diaMaisQuente);
    break;
case 3:
    printf("O dia mais quente da semana e terca %d °", diaMaisQuente);
    break;
case 4:
    printf("O dia mais quente da semana e quarta %d °", diaMaisQuente);
    break; 
case 5:
    printf("O dia mais quente da semana e quinta %d °", diaMaisQuente);
    break;
case 6:
    printf("O dia mais quente da semana e sexta %d °", diaMaisQuente);
    break;
case 7:
    printf("O dia mais quente da semana e sabado %d °", diaMaisQuente);
    break;

default:
    printf("Invalido");
    break;
}

return 0;
}