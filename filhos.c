/*Como gestor do departamento de pessoal eu
gostaria que o programa leia a quantidade de filho de um colaborador e, se
houver filhos, leia a idade de cada um deles e mostre o valor da ajuda de
custo.*/

#include <stdio.h>
#define AJUDACUSTO 100;
    
int main(){
char filhos;
int qtFilhos, menorTreze = 0, idadeFilhos, contador;
float ajudaCusto = 0;

printf("Voce tem filhos? Digite 's' ou 'n' para responder\n");
scanf(" %c", &filhos);
//filhos = toupper(filhos);


 
switch (filhos)
{
    case 's':
        printf("Quantos filhos voce tem?\n");
        scanf("%d", &qtFilhos);
        
        if(qtFilhos > contador){
            contador = qtFilhos;

        }

        while(contador > 0){
            printf("Qual a idade dos seu(s) %d filho(s)?\n", qtFilhos);
            scanf("%d", &idadeFilhos);
            qtFilhos--;
            contador--;

            if(idadeFilhos <= 13){
             menorTreze++;

            }

            if(idadeFilhos < 1){
            printf("Idade invalida!");
            }
            

        }
    case 'n':
        printf("Obrigada pela sua resposta!\n");
        break;

    default:
        printf("insira uma resposta valida\n");
        break;
}



ajudaCusto = menorTreze * AJUDACUSTO;

printf("A ajuda que a impresa dara a esse funcionario sera de R$%2.f", ajudaCusto);



    return 0;
}
