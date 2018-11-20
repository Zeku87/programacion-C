#include <stdio.h>

int main(void){

	int numero, salida = 0;
	char c;

	while( salida == 0 ){		
		printf("Ingrese un numero\n");
		salida = scanf("%d", &numero);
	
		c = getchar();
	
		while(c != '\n')
		{
			c = getchar();
		}
	}


	printf("Usted ha elegido el numero %d\n", numero);
	printf("salida del scanf: %d\n", salida);
	
	return 0;

}