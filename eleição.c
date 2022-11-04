#include <stdio.h>

int main(){
int candidato1, candidato2, candidato3;
printf("Quantos votos primerio candidato rebeceu?\n");
scanf("%d", &candidato1);

printf("Quantos votos o segundo candidato recebeu?\n");
scanf("%d", &candidato2);

printf("Quantos votos o terceiro candidatos recebeu?\n");
scanf("%d", &candidato3);

if(candidato1 > candidato2 + candidato3){
  printf("Não haverá 2° turno");

}else if(candidato2 > candidato1 + candidato3){
  printf("Não haverá 2° turno");

}else if(candidato3 > candidato1 + candidato2){
  printf("Não haverá 2° turno");
  
}else{
  printf("Haverá 2° turno");
}

 return 0;
}