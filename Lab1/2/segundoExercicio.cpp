#include<stdio.h>
#include<locale.h>

main(){
	float salarioMin, salarioFunc;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o sal�rio m�nimo: ");
		scanf("%f", &salarioMin);
		
	printf("Insira o sal�rio do funcion�rio: ");
		scanf("%f", &salarioFunc);
		
	printf("\nQuantidade de sal�rios m�nimos que o funcion�rio recebe: %.3f", (salarioFunc / salarioMin));
}
