#include "grafo.h"

void main() {
	int nVert;
	scanf("%d", &nVert); 
	Grafo g = criaGrafo(nVert);

	int v, u, k;
	scanf("%d%d", &v,&u);
	printf("%d-%d",v,u);
	while((v == -1) || (u == -1)){
		insereAresta(&g, v, u);
		scanf("%d", &v);
		scanf("%d", &u);
		printf("%d-%d\n",v,u);
	} 
	scanf("%d", &k);
	buscaLargura(g, k);
	buscaProfundidade(g, k);
	return;
}
