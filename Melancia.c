#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                        Melancia.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void){
    
	// Declara��o das vari�veis
	int peso_da_melancia,divisao,vericacao,vericacao_decimal;
	//Inserindo valores:
	
    scanf("%d", &peso_da_melancia); //1 <= w <= 100
    
    divisao = peso_da_melancia / 2;
    vericacao = peso_da_melancia % 2;
    
    if (vericacao == 0 && peso_da_melancia >= 1 && peso_da_melancia <= 100 && peso_da_melancia != 2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}