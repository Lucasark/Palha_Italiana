#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pilha.h"
#include "fila.h"

typedef struct no {
	int vert;
	struct no*vertProx;
} No;

typedef struct grafo {
	int totalArcos;
	int maxVertices;
	No** Lista;
} Grafo;

Grafo criaGrafo(int n);
void insereAresta(Grafo *g, int v, int u);
void buscaLargura(Grafo g, int s);
void buscaProfundidade(Grafo g, int s);