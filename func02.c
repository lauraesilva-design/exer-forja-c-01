#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int quad(int x);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, resp;

printf("Digite um numero: ");
scanf("%d", &num);

resp = quad(num);
printf("O quadrado de %d é: %d \n", num, resp);

     system("pause");
    return 0;
}
int quad(int x){
int quadrado;

quadrado = x*x;
return quadrado;
    
}



