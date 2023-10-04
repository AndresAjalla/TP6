#include <stdio.h>
#include <stdlib.h>
void posu (int *num, int num2);
void posi (int *num, int num1){
	int cont_num1=0;
	printf("\n El num1 se repite en la posicion: ");
	if (num1==num[1]){
		printf("\n 1");
		cont_num1++;
	}
	if (num1==num[2]){
		printf("\n 2");
		cont_num1++;
	}
	if (num1==num[3]){
		printf("\n 3");
		cont_num1++;
	}
	if (num1==num[4]){
		printf("\n 4");
		cont_num1++;
	}
	if (num1==num[5]){
		printf("\n 5");
		cont_num1++;
	}
	if (num1==num[6]){
		printf("\n 6");
		cont_num1++;
	}
	if (num1==num[7]){
		printf("\n 7");
		cont_num1++;
	}
	if (num1==num[8]){
		printf("\n 8");
		cont_num1++;
	}
	printf("\n");
	printf("\n cantidad de veces que se repite num1: %d",cont_num1);
	printf("\n");
}
	int main() {
		
		int i=1,num[9],num1=0,num2=0;
		
		for (i=1;i<=8;i++){
			printf("\n Ingrese numero %d: ",i);
			scanf("%d",&num[i]);
		}
		printf("\n Ingrese 2 numeros: ");
		printf("\n");
		scanf("%d",&num1);
		scanf("%d",&num2);
		
		
		posi (num,num1);
		posu(num,num2);
		return 0;
	}
	void posu (int *num, int num2){
		int cont_num2=0;
		printf("\n El num2 se repite en la posicion: ");
		if (num2==num[1]){
			printf("\n 1");
			cont_num2++;
		}
		if (num2==num[2]){
			printf("\n 2");
			cont_num2++;
		}
		if (num2==num[3]){
			printf("\n 3");
			cont_num2++;
		}
		if (num2==num[4]){
			printf("\n 4");
			cont_num2++;
		}
		if (num2==num[5]){
			printf("\n 5");
			cont_num2++;
		}
		if (num2==num[6]){
			printf("\n 6");
			cont_num2++;
		}
		if (num2==num[7]){
			printf("\n 7");
			cont_num2++;
		}
		if (num2==num[8]){
			printf("\n 8");
			cont_num2++;
		}
		printf("\n");
		printf("\n cantidad de veces que se repite num2: %d",cont_num2);
		printf("\n");
	}
		
