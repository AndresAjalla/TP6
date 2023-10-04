#include <stdio.h>
#include <stdlib.h>
void cont_inpar (int *num, int cont);
void cont_par (int *num, int cont);
int main() {
	int num[21],i=1,cont=0;
	for (i=1;i<=20;i++){
		printf ("\n Ingrese numero %d: ",i);
		scanf("%d",&num[i]);
		cont=cont+1;
		if (num[i]==0 || cont==10){
			cont_inpar (num,cont);
			
			return 0;
		}
	}
	
}
void cont_inpar (int *num, int cont ){
	int i=1,result1=0,result=0;
	printf("\n numeros pares: ");
	for (i=1;i<=cont;i++){
		result1=num[i]%2;
		if (result1==0){
			printf("\n %d",num[i]);
		}
	}
	printf("\n numeros impares: ");
	for (i=1;i<=cont;i++){
		result1=num[i]%2;
		if (result1!=0){
			printf("\n %d",num[i]);
		}
	}
}
	
	
	
	
	
