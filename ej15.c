#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo() {
	int alu,mate,nota,i=0,may='a'-'A';
	char apellido[20];
	float acu,PA,PC;	
	
	for (alu=1;alu<4;alu++){
		printf("Ingrese el apellido del alumno: ");
		scanf("%s",apellido);
		if (apellido[i]>='a' && apellido[i]<='z'){
			apellido[i]=apellido[i]-may;
			printf("Su apellido es: %s. \n",apellido);
		}
		for(mate=1;mate<6;mate++){
			printf("Ingrese nota nro:%d\n",mate);
			scanf("%d",&nota);
			acu=acu+nota;
		}
		PA=acu/5;
		printf("El promedio del alumno es:%f\n",PA);
		PC=PC+PA;
		acu=0;
	}
	printf("El promedio de notas es:%f",PC/5);
}

int main(int argc, char *argv[]) {
	

	foo();
	system("pause");
	return 0;
}

