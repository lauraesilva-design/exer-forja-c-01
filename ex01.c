#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char nome[50];
    float idade;

printf("Digite seu nome: ");
fgets(nome, 50, stdin);
printf("Digite sua idade: ");
scanf("%f", &idade);


//ler o nome ate 49 caracteres, incluindo espacçs

printf("Ola %s voce tem %f anos.\n", nome, idade);




    system("pause");
    return 0;
}