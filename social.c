#include <stdio.h>

int main(){
    int dia1, dia2;

    printf("Qual o primerio dia de acao social?\n");
    scanf("%d", &dia1);

    printf("Qual o segundo dia de acao social?\n");
    scanf("%d", &dia2);

   /* if(dia1 == 7 && dia2 == 1 || dia1 == 14 && dia2 == 15 || dia1 == 21 && dia2 == 22 || dia1 == 28 && dia2 == 29){
        printf("Final de semana de ação social");
    }else{
        printf("Não é final de semana"); 
        Outra forma de fazer*/

    switch (dia1, dia2)
    {
        case 7: case 1: case 14: case 15: case 21: case 22: case 28: case 29:
        printf("Final de semana de acao social!");
        break;
        
        default:
        ("Nao e dia de acao social!");
        break;
    }    
    
 return 0;
}