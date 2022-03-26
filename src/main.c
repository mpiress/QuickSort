#include "quick.h"

int main(){
	
	Vector v;
	
	Initialize(&v);
	Imprime(&v);
	printf("\n");
	QuickSort(&v, 0, MAXSIZE-1, 0, 0);
	printf("NUMBER OF SWAPS:%d\n", v.swap);
	
	return 0;
}
