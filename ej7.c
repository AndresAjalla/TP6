#include <stdio.h>
#include <stdlib.h>
void puesto (float *tiempo);
void corredor(float *tiempo);

int main() {
	float tiempo[10];
	int i=1;
	for (i=1;i<=10;i++){
		printf ("\n Ingrese tiempo del corredor %d: ",i);
		scanf("%f",&tiempo[i]);
	}
	corredor(tiempo);
	return 0;
}
void corredor(float *tiempo){
	int i=1,puesto=0,l1=0,l2=0,l3=0;
	float t,PP=tiempo[i],SP=66,UP=tiempo[i],prom;
	for (i=1;i<=10;i++){
		t=tiempo[i];
		puesto++;
		prom=prom+tiempo[i];
		
		if (t<PP){
			PP=tiempo[i];
			l1=puesto;
		}
		if (t<SP && t>PP){
			SP=tiempo[i];
			l2=puesto;
		}
		if (tiempo[i]>UP ){
			UP=tiempo[i];
			l3=puesto;
		}
	}
	prom=prom/10;
	printf("\n PRIMER PUESTO: CORREDOR %d \n TIEMPO: %f",l1,PP);
	printf("\n");
	printf("\n SEGUNDO PUESTO: CORREDOR %d \n TIEMPO: %f",l2,SP);
	printf("\n");
	printf("\n ULTIMO PUESTO: CORREDOR %d \n TIEMPO: %f",l3,UP);
	printf("\n");
	printf("\n TIEMPO PROMEDIO: %f",prom);
}
	
	
	
