#include<stdio.h>
#include<locale.h>

main(){
	float salarioActual, perAum;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o sal�rio actual do funcion�rio: ");
		scanf("%f", &salarioActual);
		
	printf("Insira o percentual de aumento para o funcion�rio: ");
		scanf("%f", &perAum);
		
	float novoSalario = salarioActual + ((salarioActual * perAum) / 100);	
	
	printf("\nEis o novo sal�rio do funcion�rio: %.3f", novoSalario);		
}
