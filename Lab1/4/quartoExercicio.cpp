#include<stdio.h>
#include<locale.h>

main(){
	float salarioActual;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o sal�rio actual do funcion�rio: ");
		scanf("%f", &salarioActual);
		
	float novoSalario = salarioActual + (salarioActual * 0.25);
	
	printf("\nNovo sal�rio do funcion�rio: %.3f", novoSalario);
}
