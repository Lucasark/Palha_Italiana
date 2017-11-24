#include "grafo.h"

Grafo criaGrafo(int n){
	Grafo g;
	g.lista_adj = calloc(n, sizeof(No*));
	g.u = n;
	return g;
}

void insereAresta(Grafo *g, int v, int u){


}


void buscaLargura(Grafo g, int s){
	
}


 // g.Vet_adj = (no) malloc(n * sizeof(no));
