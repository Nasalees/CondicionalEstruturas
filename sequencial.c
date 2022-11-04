/*Considerando que as salas de uma determinada faculdade suportam 50 alunos, escreva um
programa para receber o número de pessoas que se inscreveram para o vestibular da
próxima data e mostrar:
A quantidade de sala que serão necessários para a realização do vestibular
A quantidade de pessoas que ocuparão a última sala.*/

#include <stdio.h>

int main(){
    #define CAPACIDADE 50;
    int qtInscrita;

    printf("Quantas pessoas se inscreveram pro vestibular?");
    scanf("%d", &qtInscrita);

    int salasNecessarias = qtInscrita - 1/ CAPACIDADE + 1;

    print("A quantidade de salas necessárias é de: %d", salasNecessarias);

    int ultimaSala = qtInscrita - 1/ CAPACIDADE + 1;
    printf("A quantidade de alunos na última sala foi %d", ultimaSala);




    return 0;
}