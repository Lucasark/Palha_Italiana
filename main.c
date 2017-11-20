#include "grafo.h" 

int main() {

	int vert; //Criar Grafo?
	scanf("%d", &nVert); 
	Grafo g = criaGrafo(nVert);

	int v, u;
	do {
		scanf("%d", &v);
		scanf("%d", &u); 
		insereAresta(&g, v, u);
	} while((k != -1) && (j != -1));
	buscaLargura(g, 0);
	buscaProfundidade(g, 0);
	return 0;
}
