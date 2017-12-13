#include "grafo.h"

int main() {

	int nVert;
	scanf("%d", &nVert); 
	Grafo g = criaGrafo(nVert);

	int v, u;
	scanf("%d%d", &v,&u);

	while((v != -1) || (u != -1)){
		insereAresta(&g, u, v);
		insereAresta(&g, v, u);
		scanf("%d%d", &v, &u);
	}
	int k;
	scanf("%d", &k);
	buscaLargura(g, k);
	buscaProfundidade(g, k);
	return 0;
}
