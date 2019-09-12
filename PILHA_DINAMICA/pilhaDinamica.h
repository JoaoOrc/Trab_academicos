#include <stdio.h>
#include <stdlib.h>

typedef struct pilha PILHA;
PILHA *criar_pilha();
void liberar_pilha(PILHA *pi);
int tamanho_pilha(PILHA *pi);
int pilha_cheia(PILHA *pi);
int inserir_Pilha(PILHA *pi, int valor);
