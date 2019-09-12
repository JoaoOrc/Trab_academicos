#include "pilhaDinamica.h"

struct pilha
{
	int valor;
	int topo;
	struct pilha *prox;
	struct pilha *To;
};

PILHA *criar_pilha()
{
	PILHA *pi = (PILHA*)malloc(sizeof(PILHA));
	if(pi != NULL)
		pi->topo = NULL;

	return pi;

}

void liberar_pilha(PILHA *pi)
{
	if(pi != NULL)
	{
		PILHA *novoNO;
		while(pi != NULL)
		{
			novoNO = pi ;
			pi = pi->prox;
			free(novoNO);
		}
		free(pi);
	}
}

int tamanho_pilha(PILHA *pi)
{
	if(pi == NULL)
	{
		return 0;
	}
	int cont = 0;
	PILHA *novoNO = pi;
	while(novoNO != NULL)
	{
		cont++;
		novoNO = novoNO->prox;
	}
	return 0;
}

int pilha_cheia(PILHA *pi)
{
	return 0;
}

int inserir_Pilha(PILHA *pi, int valor)
{
	if (pi == NULL)
	{
		return 0;
	}
	PILHA *novoNO = (PILHA*)malloc(sizeof(PILHA));
	if(novoNO == NULL){
		return 0;
	}
	novoNO->valor = valor;
	novoNO->prox = pi->topo;
	pi->topo =novoNO;
}
