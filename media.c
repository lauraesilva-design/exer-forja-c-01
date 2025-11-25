//Incluir a biblioteca stdio.h que permite usar entrada e saida de infos(printf e scanf)
#include<stdio.h>

//Inclui a biblioteca stdlib.h que permite funcoes utilitarias(system())
#include<stdlib.h>

//declarar a funcao principal, onde o programa comaca sua execucao
int main(){

float numero1, numero2, numero3, resp;

printf("Digite o primeiro numero: ");
scanf("%f", &numero1);
printf("Digite o segundo numero: ");
scanf("%f", &numero2);
printf("Digite o terceiro numero: ");
scanf("%f", &numero3);

respDiv = (numero1 + numero2 + numero3)/3;
printf("Resultado da media: %.3f", resp);


    //pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");
    //finalizacao programa retornando 0, indicando que tudo ocorreu tudo bem
    return 0;
}