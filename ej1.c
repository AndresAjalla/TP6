#include <stdio.h>
#include <stdlib.h>


void r (int *num) {
	int i=0;
	for (i=1;i<=6;i++){
		
		printf("\n Numero %d: %d",i,num[i]);
	}
}

int main() {
	
	int num[7],i=1;
	
	for (i=1;i<=6;i++){
		
		printf("\n Ingrese un numero %d: ",i);
		scanf("%d",&num[i]);
	}
	
	printf("\n Resultado: ");
	r(num);
	return 0;
}

