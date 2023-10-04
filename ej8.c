#include <stdio.h>
#include <stdlib.h>

void result(int*num){
	int i=0, j=0, temp=0;
	printf("\n Numeros Ingresados: ");
	printf ("\n");
	for (i=1; i<=7;i++){
		printf ("%d  ",num[i]);	
	}
	for (i=0;i<7-1;i++) {
		for (j=0;j<7-i-1;j++) {
			if (num[j]>num[j+1]) {
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
		
	}
	printf("\n Numeros Ordenados de forma ascendente: ");
	printf ("\n");
	for (i=0;i<7;i++) {
		printf("%d ", num[i]);
	}
}
	int main() {
		int num[7],i;
		printf("Ingrese 7 Numeros enteros positivos: ");
		printf ("\n");
		for (i=0;i<7;i++) {
			scanf("%d", &num[i]);
			if (num[i]<0){
				printf("\n te dije que solo numeros positivos amigo :/ ");
				return 0;
			}	
		}
		
		result(num);
		
		system("pause");
		return 0;
	}
	
