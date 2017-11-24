#include "grafo.h"

Grafo criaGrafo(int n){
	Grafo g;
	g.lista_adj = calloc(n, sizeof(No*));
	g.u = n;
	return g;
}

void insereAresta(Grafo *g, int v, int u){
  No **ap_l = &g->lista_adj[v];
  while (*ap_l != NULL && (*ap_l)->v < u)
    ap_l = &(*ap_l)->prox;
  if (*ap_l == NULL || (*ap_l)->v != u) {
    No* n = malloc(sizeof(No));
    n->v = u;
    n->prox = *ap_l;
    *ap_l = n;
  }
  return;
}
//0 1 2 3 4

void buscaLargura(Grafo g, int s){
	Fila F;
	int Vis[g.u];
	int Adj[g.u][g.u];
	push(&F,s);
	Vis[s] = 1;
	printf("%d",s);

	while(!filafazia(F)){
		int v = pop(F);
		int i;
		for(i=0; i<g.u; i++){
			if (Adj[v][i] == 1 && Vis[i] == 0) {
				push(F, i);
				Vis[i] = 1;
				printf("%d", i);
			}
		}

	return;
	}
}

void buscaProfundidade(Grafo g, int s){
	Pilha P;
	int Adj[g.u][g.u];
	int Vis[g.u];
	push(&P, s);
	while (!empty(P)) {
		int v = pop(P);
		if (Vis[v] == 0) {
			Vis[v] = 1;
			printf("%d", v);
			int i;
			for (i=0; i<g.u; i++) {
				if (Adj[v][i] == 1) push(&P, i);
			}
		}
	}
	return;
}


