#ifndef QUICK_H 
#define QUICK_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 10


typedef struct Vector Vector;

struct Vector{
	int *itens;
	int tam;
	int swap;
};

void Initialize(Vector *v);
void Imprime(Vector *v);
void Swap(int *a, int *b);
void Partition(Vector *v, int p, int r, int *i, int *j);
void QuickSort(Vector *v, int p, int r, int i, int j);

#endif