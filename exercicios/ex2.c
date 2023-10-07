#include <stdio.h>
#include <math.h>

int main (){
    int num1, num2, resul;

    printf("Digite o 1.numero: ");
    scanf("%d", &num1);
    printf("Digite o 2. nunmero: ");
    scanf("%d", &num2);

    resul = num1 + num2;

    if(resul >20){
        resul += 8;
    }else{
        resul -= 5; //significa que resul = resul - 5
    }

    //imprime o resultado final independente de dar if ou else
    printf("Resultado = %d\n", resul);

    return 0;
}   
    /* forma menos inteligente
     if(resul >20){
         //otimizando essa parte, para ficar com + cara de programa descente e tbm pq os printfs se repetem
         resul = resul + 8;
         printf("Resultado = %d\n", resul);
     }else{
         resul = resul - 5;
         printf("Resultado = %d\n", resul);  
    */  
