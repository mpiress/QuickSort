#include "quick.h"


void Initialize(Vector *v){
	
	//Porque 42? Leia o guia definitivo do mochileiro das galáxias :).
	srand(42); 
    
    v->itens = (int*)malloc(MAXSIZE*sizeof(int));
	for(int i=0; i<MAXSIZE; i++)
		v->itens[i] = rand()%100;
	v->swap = 0;
}

void Swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void Imprime(Vector *v){
	for(int i=0; i<MAXSIZE; i++)
		printf("%d\t", v->itens[i]);
	printf("\n");
}


void Partition(Vector *v, int p, int r, int *i, int *j){
	int pivo;
	int idx = (p+r)/2; //4
	*i = p; //0
	*j = r; //9
	pivo = v->itens[idx];

	do{
		while(v->itens[*i] < pivo && *i < r)
			*i = *i + 1;
		while(v->itens[*j] > pivo && *j > p)
			*j = *j - 1;
		if(*i<=*j){
			Swap(&v->itens[*i], &v->itens[*j]);
			*i = *i + 1;
			*j = *j - 1;
			v->swap++;
		}

	}while(*i<=*j);
	
}


void QuickSort(Vector *v, int p, int r, int i, int j){
	
	Partition(v, p, r, &i, &j);
	printf("INÍCIO:%d, FIM:%d --> \t",p,r);
	Imprime(v);
	if(j > p)
		QuickSort(v, p, j, i, j);
	if(i < r)
		QuickSort(v, i, r, i, j);
}

















