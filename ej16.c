#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int F1,int F2, int F3,char em1[30],char em2[30],char em3[30],float s1,float s2,float s3, int antiguo) {
	if (F2 < antiguo)
		antiguo = F2;
	if (F3 < antiguo)
		antiguo = F3;
	
	printf("\n El empleado más antiguo:\n");
	
	if (F1 == antiguo)
		printf("Nombre: %s\nSueldo: %.2f\n", em1, s1);
	if (F2 == antiguo)
		printf("Nombre: %s\nSueldo: %.2f\n", em2, s2);
	if (F3 == antiguo)
		printf("Nombre: %s\nSueldo: %.2f\n", em3, s3);
	
}

int main() {
	char em1[30], em2[30], em3[30];
	int F1, F2, F3;
	float s1, s2, s3;
	int antiguo;
	
	printf("Ingrese el nombre del primer empleado: ");
	scanf("%s",em1);
	printf("Ingrese la fecha de ingreso del primer empleado: ");
	scanf("%d", &F1);
	printf("\n Ingrese el sueldo del primer empleado: ");
	scanf("%f", &s1);
	
	printf("\n Ingrese el nombre del segundo empleado: ");
	scanf("%s", em2);
	printf("\n Ingrese la fecha de ingreso del segundo empleado: ");
	scanf("%d", &F2);
	printf("\n Ingrese el sueldo del segundo empleado: ");
	scanf("%f", &s2);
	
	printf("\n Ingrese el nombre del tercer empleado: ");
	scanf("%s", em3);
	printf("\n Ingrese la fecha de ingreso del tercer empleado: ");
	scanf("%d", &F3);
	printf("\n Ingrese el sueldo del tercer empleado: ");
	scanf("%f", &s3);
	
	antiguo = F1;
	foo(F1,F2,F3,em1,em2,em3,s1,s2,s3, antiguo);
	system("pause");
	return 0;
}

