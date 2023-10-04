#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()    {
	char i , j , long;
	char longitud;
	char cad[20];
	char temporal;
	
	system("cls");
	
	printf("\n Introduce un texto (menos de 20 caracteres): ");
	gets (cad);
	longitud=strlen(cad);
	j=longitud-1;
	
	for (i=0; i<longitud/2; i++)  {
		temporal=cad[i];
		cad[i]=cad[j];
		cad[j]=temporal;
		j--;
	}
	printf("\n resultado: %s", cad);
	system("pause");
}   
return 0;

