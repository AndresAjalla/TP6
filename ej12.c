#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Palindromo(const char *cad) {
	int longitud=strlen(cad);
	int i;
	for (i=0;i<longitud/2;i++){
		if (cad[i] != cad[longitud-1-i]){
			return 0;	
		}
	}
	return 1;
}

int main (){
	char frase [50];
	printf ("\n Introduce un texto: ");
	fgets (frase, sizeof(frase),stdin);
	frase[strcspn(frase,"\n")]='\0';
	if (frase[strlen(frase)-1]=='\n')
		frase[strlen(frase)-1]='\0';
	if (Palindromo(frase)){
		printf ("\n frase palindroma ");
	}
	else {
		printf ("\n frase no palindroma");
	}
	system("pause");
	return 0;
}
	
