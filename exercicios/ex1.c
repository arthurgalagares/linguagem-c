#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2, resul;

    //solicita o 1. e o 2. numero para o usuario
    printf("Digite o 1. numero: ");
    scanf("%d", &num1);
    printf("Digite o 2. numero: ");
    scanf("%d", &num2);

    //efetua a adicao, que dara a condicao que o exercicio pede
    resul = num1 + num2;

    //verifica se o resul eh maior e decide pelo if ou else dependendo do resultado
    if(resul >10){
        printf("Resultado = %d\n", resul);
    }else{
        printf("A soma dos valores nao eh maior que 10.\n");
    }

    return 0;
}

    
