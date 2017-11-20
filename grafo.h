#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct heap {
	int elementos[MAX];//numero de elementos
	int last;//Representação do Ultimo elemento
} Heap;

Grafo criaGrafo(int n); // Menor Valor
void insereAresta(Grafo *g, int v, int u);
void buscaLargura(Grafo g, int s);
void buscaProfundidade(Grafo g, int s);