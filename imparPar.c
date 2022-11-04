#include <stdio.h>

/*Escreva um programa para receber 5 número positivos. No final mostrar ser foi digitado mais números pares ou mais números impares.*/

int main() {
  int num;
  int contador;
  int numPar, numImpar;

  for(contador = 1; contador <= 5; contador++){
      printf("Digite um numero\n");
      scanf("%d", &num);

      if(num < 0){
        printf("Digite um numero positivo\n");
      }
  }

  switch(num){
    case 0: case 2: case 4: case 6: case 8:
    
      
    
  }
  return 0;
}