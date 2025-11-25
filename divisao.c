//Incluir a biblioteca stdio.h que permite usar entrada e saida de infos(printf e scanf)
#include<stdio.h>

//Inclui a biblioteca stdlib.h que permite funcoes utilitarias(system())
#include<stdlib.h>

//declarar a funcao principal, onde o programa comaca sua execucao
int main(){

float numero1, numero2, respDiv;

printf("Digite o primeiro numero: ");
scanf("%f", &numero1);
printf("Digite o segundo numero: ");
scanf("%f", &numero2);

respDiv = numero1 / numero2;
printf("Resultado da divisao: %.2f", respDiv);


    //pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");
    //finalizacao programa retornando 0, indicando que tudo ocorreu tudo bem
    return 0;
}