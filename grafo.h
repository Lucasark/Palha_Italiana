#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fila.h"
#include "pilha.h"

typedef struct no {
  int v; /* Vértice */
  struct no* prox;
} No;

typedef struct grafo {
  int u;      /* Número de nós */
  No** lista_adj;
} Grafo;


Grafo criaGrafo(int n);
void insereAresta(Grafo *g, int v, int u);
void buscaLargura(Grafo g, int s);
void buscaProfundidade(Grafo g, int s);