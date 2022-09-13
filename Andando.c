#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************
                        Andando no tempo.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void){
    
	// Declaracao das variaveis
	int var1,var2,var3;
	int condicao1,condicao2,condicao3,condicao4;
	
	// Input de valores;
        scanf("%d", &var1);
        scanf("%d", &var2);
        scanf("%d", &var3);
        
    // Caso sempre verdadeiro; Condicao1;
    if((var1+var2+var3)-(var1+var2+var3) == 0){
        condicao1 = 1;
	//printf("Codicao 1: OK\n");
    }
    //Condicoes utilizando apenas a primeira variavel;
        //Variavel 1;
            //Codicao2;(Usando 1 variavel para o futuro)
            if(var1 == var2 || var1 == var3 || var1 == var2+var3){
                condicao2 = 1;
        	//printf("Codicao 2: OK\n");
            }
            else{
                condicao2 = 0;
            }
        //Variavel 2;
            //Codicao2;(Usando 1 variavel para o futuro)
            if(var2 == var1 || var2 == var3 || var2 == var1+var3){
                condicao3 = 1;
        	//printf("Codicao 3: OK\n");
            }
            else{
                condicao3 = 0;
            }
        //Variavel 3;
            //Codicao2;(Usando 1 variavel para o futuro)
            if(var3 == var1 || var3 == var2 || var3 == var1+var2){
                condicao4 = 1;
        	//printf("Codicao 4: OK\n");
            }
            else{
                condicao4 = 0;
            }
    
    //Definindo todas as condicoes possiveis para que o resultado seja Sim ou Nao;
    if((condicao1 = 1 && condicao2 == 1) || (condicao1 = 1 && condicao3 == 1) || (condicao1 = 1 && condicao4 == 1)){
	printf("S");
    }
    else{
	printf("N");
	//printf("%d\n",condicao2);
	//printf("%d\n",condicao3);
	//printf("%d\n",condicao4);
    }
}
