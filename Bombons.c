#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                                Bombons.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    float avela,caramelo,passas;
    float qt1,qt2,qt3;
    float P1,P2,P3;
    float valor;
    
    scanf ("%f", &avela);
    scanf ("%f", &caramelo);
    scanf ("%f", &passas);
    
    scanf ("%f", &qt1);
    scanf ("%f", &qt2);
    scanf ("%f", &qt3);

    P1 = avela*qt1;
    P2 = caramelo*qt2;
    P3 = passas*qt3;
    valor = P1+P2+P3;
    
    printf("Valor: R$%.2f",valor);
}