#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num %3 && num %7 == 0){
        printf("Eh divisivel por 3 e 7");
    }else{
        printf("Nao eh divisivel por 3 e 7");
    }
    
    return 0;
}