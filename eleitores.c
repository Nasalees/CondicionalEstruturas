/*Dado um vetor com a  idade de 10 pessoas, mostre:
Quantos são eleitores obrigatório
Quantos são eleitores opcionais
Quantos não são eleitores*/

#include <stdio.h>

    
int main(){

int idade[10] = {22, 23, 23, 31, 24, 15, 80, 85, 12, 16};
int i;
int menorIdade = 0;
int obrigatorio = 0;
int opcionais = 0;
 
for (i = 0; i < 10; i++ ){
   

    if(idade[i] < 16){
        menorIdade++;
        
    }else if (idade[i] > 18 &&  idade[i] <= 70 ){
        obrigatorio++;
       
    }else if ((idade[i] >= 16 && idade[i] <18) || idade[i] > 70){
        opcionais = opcionais + 1;
    }

}

   

printf("%d nao eleitores\n", menorIdade);
printf("%d sao obrigatorios\n", obrigatorio);
printf("%d sao opcionais\n", opcionais);


    return 0;
}
