#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                        Areas de 2 circulos.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void){
    
	// Declara��o das vari�veis
	float raio1,raio2, pi=3.14, area1,area2;
	
	// Entrada de dados
	scanf("%f", &raio1);
	scanf("%f", &raio2);
 
	// C�lculo da �rea da circunfer�ncia
	area1 = pi * raio1 * raio1;
	area2 = pi * raio2 * raio2;
 
	// Apresenta��o do resultado
    if (area1>area2){
	printf("Primeiro circulo");
    }
    if (area2>area1){
	printf("Segundo circulo");
    }
    if (area2==area1){
	printf("Iguais");
    }

}
