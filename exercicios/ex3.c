#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //verifica se o numero eh multiplo de 3
    if(num % 3 == 0){
        printf("Eh multiplo de 3");
    }else{
        printf("Nao eh multiplo de 3"); 
    }

    return 0;
}