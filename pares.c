/*Escreva um programa para receber um número positivo e mostrar todos os números pares de 0 até o número recebido.*/

#include <stdio.h>
int main(){

int num;
int i;

printf("Digite um numero positivo:\n");
scanf("%d", &num);


for(i = 0; i <= num; i+=2){
    printf("%d", i);
}





return 0;
}