#include "grafo.h"

Grafo criaGrafo(int n){
	Grafo g;
	g.Lista = (No**)malloc(n*sizeof(No*));
	g.maxVertices=n;
	g.totalArcos=0;
	for(int i=0; i<n;i++){
//		g.Lista[i]=(No*)malloc(sizeof(No));
		g.Lista[i]=NULL;
	}
	return g;
  }

void insereAresta(Grafo *g, int v, int u){
	No*novoV = (No*)malloc(sizeof(No));//vert novo
	novoV->vert = u;
	novoV->vertProx = NULL;

	No*temp = g->Lista[v];

	if (temp == NULL){
		g->Lista[v] = novoV;
	}
	else {
		while (temp->vertProx != NULL){//Andar pelo vertice
			temp = temp->vertProx;
		}
		temp->vertProx = novoV;
	}
	g->totalArcos++;
	return;
}

void buscaLargura(Grafo g, int s){
	printf("\nBusca em Largura: ");
	No*visitados = (No*)malloc(g.maxVertices*sizeof(No));//No para os visitados

	for(int i = 0; i < g.maxVertices; i++){//Colocar todos os vertecer como não visitados
		visitados[i].vert = 0;
	}

	Fila F = criaFila();//Criar a Fila

	No*q;//No aux de percorrer

	pushFila(&F,s);
	visitados[s].vert = 1; //Colocar o 's' como visitado
	printf("%d",s);

	int out;
	while(!filaVazia(F)){
		out = popFila(&F);
		q = g.Lista[out];
		while(q != NULL){
			if (visitados[q->vert].vert == 0) {
				visitados[q->vert].vert = 1;
				pushFila(&F, q->vert);
				printf(" %d", q->vert);
			}
			q = q->vertProx;
		}
	}
	return;
}

void buscaProfundidade(Grafo g, int s){
	printf("\nBusca em Profundidade:");
	No*visitados = (No*)malloc(g.maxVertices*sizeof(No));//No para os visitados

	for(int i = 0; i < g.maxVertices; i++){//Colocar todos os vertecer como não visitados
		visitados[i].vert = 0;
	}

	Pilha P = criaPilha();//Criar a Fila

	No*q;//No aux de percorrer

	int out;

	pushPilha(&P,s);

	while (!pilhaVazia(P)) {
		out = popPilha(&P);
		if (visitados[out].vert == 0) {
			visitados[out].vert = 1;
			for (q = g.Lista[out]; q != NULL; q = q->vertProx){//Colocar os vertices na pilha
				if (visitados[q->vert].vert == 0){
					pushPilha(&P, q->vert);
				}
			}
		printf(" %d", out);
		}
	}
	//20135467
}