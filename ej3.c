#include <stdio.h>
#include <stdlib.h>

void monto (int *compra){
	
	int i=1,total=0;
	for (i=1;i<=10;i++){
		total=total+compra[i];
	}
	printf("\n Monto Final: %d",total);
}
	
	int main() {
		
		int i=0,compra[11],MayorCompra=0,c=0;
		
		for (i=1;i<=10;i++){
			printf("\n Ingrese valor de la compra %d: ",i);
			scanf("%d",&compra[i]);
			c=compra[i];
			if (c>MayorCompra){
				MayorCompra=c;
			}
		}
		
		printf("\n Mayor Compra: %d",MayorCompra);
		
		monto(compra);
		
		return 0;
	}
	
