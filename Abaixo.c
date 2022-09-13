#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                                Abaixo a polui��o.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    int qtlivros,loop;
    float veiculos,valortotal,multa,carros_extras;
    loop = 0;
    do {
        scanf ("%f", &veiculos);
        if (veiculos > 2 && veiculos != 999){
        loop = loop+1;
        carros_extras = carros_extras + veiculos - 2;
        }
        multa = 12.89*carros_extras;
        valortotal = multa;
    } while(veiculos != 999);

    printf("%.2f\n",valortotal);
    printf("%d",loop);
}
