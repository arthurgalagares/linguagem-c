#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num %5 == 0){
        printf("Eh divisivel por 5");
    }else{
        printf("Nao eh divisivel por 5");
    }
    
    return 0;
}