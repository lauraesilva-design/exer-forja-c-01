#include<stdio.h>
#include<stdlib.h>

int main(){

    char cidade[50], estado[50];
    int ano;

printf("Digite o nome de sua cidade: ");
fgets(cidade, 50, stdin);
printf("Digite o nome do seu estado : ");
fgets(estado,50,stdin);
printf("Digite sua data de nascimento: ");
scanf("%f", &ano);

ano =  2025-ano ;

printf("Voce mora na cidade de %s no estado do %s e voce nasceu %d.\n" ,cidade, estado ,ano);
    system("pause");
    return 0;
}