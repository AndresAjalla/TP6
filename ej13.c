#include <stdio.h>
#include <stdlib.h>
void inv(char*texto){
	while(*texto){
		if(*texto>='a' && *texto<='z'){
			*texto=*texto-('a'-'A');
		}
		else if(*texto>='A'&&*texto<='Z'){
			*texto=*texto+('a'-'A');
		}
		texto++;
	}
}
	int main(){
		char texto[100];
		printf("Ingrese un texto: ");
		fgets(texto,sizeof(texto),stdin);
		inv(texto);
		printf("Su texto invertido es: %s\n",texto);
		system("pause");
		return 0;
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
