#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char nome[50];

printf("Digite seu nome: ");

//ler o nome ate 49 caracteres, incluindo espacçs
fgets(nome, 50, stdin);
printf("O nome digitada foi: %s \n", nome);

    system("pause");
    return 0;
}
