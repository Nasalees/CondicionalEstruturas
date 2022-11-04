/*Escreva um programa para receber 3 notas de um aluno durante o curso, calcular e mostrar a média
aritmética, considerando apenas as duas maiores notas.
Observação: Considerar que não há notas iguais.*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Insira a primeria nota\n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota\n");
    scanf("%f", &nota2);

    printf("Insira a terceita nota\n");
    scanf("%f", &nota3);
    
    if (nota1 > nota2 && nota3 > nota2){
        media = (nota1 + nota3) / 2;
        printf("A média é %.2f", media);

    }else if(nota1 > nota3 && nota2 > nota3){
        media = (nota1 + nota2) / 2;
        printf("A media é %.2f", media);

    }else if (nota2 > nota1 && nota3 > nota1){
        media = (nota2 + nota3) / 2;
        printf("A media é %.2f", media);

    }else{
        printf("A média e inválida");
    }

 return 0;
}