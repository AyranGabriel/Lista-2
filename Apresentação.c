#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                        Apresenta��o de Trabalho.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void){
    
    printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
    printf("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
    printf("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
    printf("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
    printf("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");
    
    //Definindo variveis
    int  Interface_Grafica,Inteligencia_Artificial,Encapsulamento,Indentacao,Structs;
    int primeiro_requisito,segundo_requisito,terceiro_requisito;
    primeiro_requisito,segundo_requisito,terceiro_requisito = 0;
    
    scanf ("%d", &Interface_Grafica);
    scanf ("%d", &Inteligencia_Artificial);
    scanf ("%d", &Encapsulamento);
    scanf ("%d", &Indentacao);
    scanf ("%d", &Structs);

if(Interface_Grafica == 1||Inteligencia_Artificial == 1){
primeiro_requisito = 1;
}
    else{
    primeiro_requisito = 0;
    }
if(Encapsulamento == 1 &&Indentacao ==1){
segundo_requisito = 1;
}
    else{
    segundo_requisito = 0;
    }
if(Structs == 1){
terceiro_requisito = 1;
}
    else{
    terceiro_requisito = 0;
    }
//***************************************************//

if(primeiro_requisito == 1 && segundo_requisito == 1 && terceiro_requisito == 1){
printf("Seu trabalho sera avaliado.");
}
    else{
        printf("Seu trabalho nao sera avaliado, nota 0.");
    }

}
