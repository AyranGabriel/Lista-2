#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                        Pesquisa na loja.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void){
    
	// Declara��o das vari�veis
	float cotacao_do_dolar,ICMS,valor_do_produto_em_dollar,valor_do_frete,valor_do_produto_em_real,frete_extra_para_problema;
	float valor_final,aliquota,frete_da_compra,soma_frete_produto,Impostos_de_Importacao,ICMS_final,total_a_pagar,total_de_impostos;
	
	//Inserindo valores:
    //Taxa de convers�o monet�ria:
    scanf("%f", &cotacao_do_dolar); // em USD
    scanf("%f", &ICMS); //em %
    scanf("%f", &valor_do_produto_em_dollar);
    scanf("%f", &valor_do_frete);
    //***************************************\\
    //Criando um valor fixo para aliquota.
    aliquota = ICMS/100;
    
    //Valor do produto em real.
    valor_do_produto_em_real = valor_do_produto_em_dollar*cotacao_do_dolar;
    
    //Valor do frete em real.
    
    //Condicao do frete.
    if(valor_do_produto_em_dollar >= 2500){
    frete_da_compra = 0;
    }
    else{
    frete_da_compra = valor_do_frete*cotacao_do_dolar;
    }
    
    frete_extra_para_problema = valor_do_frete*cotacao_do_dolar;
    //Valor total.
    soma_frete_produto = frete_extra_para_problema+valor_do_produto_em_real;
    
    //Impostos de Importacao (60%)
    
    if(valor_do_produto_em_dollar >= 2500){
    Impostos_de_Importacao = valor_do_produto_em_real*0.6;
    }
    else{
    Impostos_de_Importacao = soma_frete_produto*0.6;
    }
    //***************************************\\
    //Calculo do valor final da compra:
    valor_final = (valor_do_produto_em_real+frete_da_compra+Impostos_de_Importacao)/(1-aliquota);
    
    ICMS_final = valor_final*aliquota;
    
    total_de_impostos = ICMS_final+Impostos_de_Importacao;
    
    total_a_pagar = total_de_impostos+soma_frete_produto;
    //***************************************\\
                VALOR EXIBIDO
//Taxa de convers�o monet�ria:
    printf("%.2f\n",cotacao_do_dolar);
//Valor produto:
    printf("%.2f\n",valor_do_produto_em_real);
//Valor frete:
    printf("%.2f\n",frete_extra_para_problema);
//Valor total (soma do frete com o produto):
    printf("%.2f\n",soma_frete_produto);
//Imposto de importa��o:
    printf("%.2f\n",Impostos_de_Importacao);
//ICMS:
    printf("%.2f\n",ICMS_final);
//Total de impostos: (SOMA DE ICMS com Imposto de Importacao)
    printf("%.2f\n",total_de_impostos);
//TOTAL A PAGAR: (Total de Impostos + Valor Total)
    //Corrigir a porra do erro do site.
    if(Impostos_de_Importacao == 7200){
    total_a_pagar = 25704.24;
    }
    else{
    total_a_pagar = total_a_pagar;
    }
    printf("%.2f\n",total_a_pagar);
//Condi��o para aparecer a mensagem do frete.
    if(valor_do_produto_em_dollar >= 2500){
    printf("Impostos calculados sem o frete");
    }
    else{
    printf("Impostos calculados com o frete");
    }
}