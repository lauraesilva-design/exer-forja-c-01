#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int age1, age2;

    printf("Informe a primeira idade: ");
    fflush(stdin);
    scanf("%d", &age1);

    printf("Informe a segunda idade: ");
    fflush(stdin);
    scanf("%d", &age2);

    if(age1 > age2){
        printf("A primeira idade é maior que a segunda");
    }else if(age1 == age2){
        printf("As idades sao as mesmas. \n");
    }else{
        printf("A primeira idade é menor que a segunda");
    }
    

     system("pause");
    return 0;
}
