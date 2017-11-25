#include "grafo.h"
#include "pilha.h"
#include "fila.h"

void main() {
	int nVert;
	scanf("%d", &nVert); 
	Grafo g = criaGrafo(nVert);

	int v, u;
	do {
		scanf("%d", &v);
		scanf("%d", &u); 
		insereAresta(&g, v, u);
	} while((v != -1) && (u != -1));
	int k;
	scanf("%d", &k);
	buscaLargura(g, k);
	buscaProfundidade(g, k);
	return;
}
