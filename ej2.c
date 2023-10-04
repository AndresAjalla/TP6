#include <stdio.h>
#include <stdlib.h>

void forma (int *num){
	if (num[1]>num[2] && num[2]>num[3] && num[3]>num[4] && num[4]>num[5] && num[5]>num[6] && num[6]>num[7]){
		printf("\n Numeros ingresados de forma descendente ");
	}
	else if (num[1]<num[2] && num[2]<num[3] && num[3]<num[4] && num[4]<num[5] && num[5]<num[6] && num[6]<num[7]){
		printf("\n Numeros ingresados de forma ascendente ");
	}
	else {
		printf("\n numeros ingresados de forma deshordenada");
	}
}
	
	int main() {
		
		int i=0,num[8],NumMayor=0,numero=0;
		
		for (i=1;i<=7;i++){
			printf("\n Ingrese un numero %d: ",i);
			scanf("%d",&num[i]);
			numero=num[i];
			if (numero>NumMayor){
				NumMayor=numero;
			}
		}
		
		printf("\n Numero mayor: %d",NumMayor);
		
		forma(num);
		
		return 0;
	}
	
