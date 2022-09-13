#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/******************************************************************************

                                Livros na Mochila.
                Irei definir void para retornar vazio.
******************************************************************************/
int main(void) {
    
    int qtlivros,loop;
    float peso_do_livro,livros,valorsomado;
    peso_do_livro = 18;
    livros = 0;
    loop = -1;
    do {
        loop = loop + 1;
        scanf ("%f", &valorsomado);
        livros = livros+valorsomado;
        qtlivros = loop;
        //return(livros);
    } while(livros < 18);
    
    printf("%d",qtlivros);
}