//Inclui a biblioteca stdio.h, permite o uso de entradae saida de valores como o print
 #include<stdio.h>
 //Inclui a biblioteca stdlib.h, pra funcoes utilitarias com o system
 #include<stdlib.h>

//Inicio da funcao, onde o progrma comeca a ser executado
 int main(){

float num1,num2=100;
//int num2=200;

//printar os numero das variaveis
printf("%f %f", num1, num2);

//pausa o programa, ate que o usuario pressione qualquer tecla
system("pause");
//finaliza o programa retornando 0, indicando que deu tudo certo
    return 0;
 }
