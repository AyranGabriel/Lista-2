#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************
                        Pesquisa na loja.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void){
    
	// Declara??o das vari?veis
	int idade,idade_comparacao,mulheres_mais_de_cem,primeira_idade,homens,verificador_sexo;
	char sexo;
	char estilo;
	float valor_total,valor_medio,soma,total;
	
	homens = 0;
	primeira_idade = 0;
	soma = 0;
	total = 0;
	idade = 0;
	mulheres_mais_de_cem = 0;
    idade_comparacao = 1000;
    
	do{
        scanf("%d", &idade);
        if(idade>0){
            valor_total = 0;
            verificador_sexo = 0;
            // Entrada de dados
            
            scanf(" %c", &sexo);
            //Colocar sexo na tabela;
            if (sexo == 'f' || sexo == 'm'){
                if(sexo == 'f' && valor_total < 100){
                    mulheres_mais_de_cem = mulheres_mais_de_cem + 1;
                }
                if(sexo == 'm'){
                verificador_sexo = 1;
                }
            }
            scanf("%f", &valor_total);
            
            scanf(" %c", &estilo);
                //F ? fic??o; T ? terror; P ? pol?tica; R ? romance;
                if(verificador_sexo == 1 && (estilo == 'f' || estilo == 't')){
                    homens+=1;
                }
            //Definindo funcao soma;
            //Definindo total;
            if(valor_total >= 0){
            total+=1;
            soma+=valor_total;
            }
            //Definindo o valor medio;
            valor_medio = soma/total;
            //Consulta de valores;
        }
    //Selecionando os valores mais jovens;
    if (idade<idade_comparacao && idade != 0 && idade > 0){
        idade_comparacao = idade;
    }
    if (idade <= 0){
        primeira_idade = 0;
    }
    } while(idade > 0);
    //Printando os resultados;
        //Idade da pessoa mais jovem;
        if (idade<=0 && idade_comparacao == 1000){
        printf("%d\n",primeira_idade);
        }
        else{
        printf("%d\n",mulheres_mais_de_cem);
        printf("%d\n",idade_comparacao);
        printf("%.2f\n",valor_medio);
        printf("%d\n",homens);
        }
}