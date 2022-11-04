/*Escreva um programa para receber um número e mostrar todos os números do número recebido até 0.*/

#include <stdio.h>

 
int main(){

int num, i = 0;


printf("Digite um número\n");
scanf("%d", &num);

for(i = 0 ; i <= num ; i++){
    printf("%d ", i);

}



return 0;
}
