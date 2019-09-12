#include "arvore.h"

struct NO
{
	int valor;
	int altura;
	struct NO *esquerdo;
	struct NO *direito;
};

int altura_No(struct NO* novoNo)
{
	if(novoNo == NULL)
	{
		return -1;
	}
	else
	{
		return novoNo->altura;
	}
}

int balanciamento_No(struct NO* novoNo)
{
	return labs(altura_No(novoNo->esquerdo) - altura_No(novoNo->direito));
}

int maior(int x, int y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}