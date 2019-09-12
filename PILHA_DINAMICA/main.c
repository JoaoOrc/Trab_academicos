#include "pilhaDinamica.h"
int main(){
    PILHA *pi;
    int x, valor;


    pi=criar_pilha();
    liberar_pilha(pi);
    x=tamanho_pilha(pi);
   	x = pilha_cheia;
   	printf("digite um valor");
    scanf("%d", &valor);
    x=inserir_pilha(pi,valor);



    return 0;
}