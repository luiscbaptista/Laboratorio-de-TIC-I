#include<stdio.h>
#include<locale.h>

main(){
	float pesoSacoInicial, gramaGato1, gramaGato2;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o peso do saco de ra��o: ");
		scanf("%f", &pesoSacoInicial);
		
	printf("Insira a quantidade de ra��o (em grama) fornecida ao primeiro gato: ");
		scanf("%f", &gramaGato1);
		
	printf("Insira a quantidade de ra��o (em grama) fornecida ao segundo gato: ");
		scanf("%f", &gramaGato2);
		
	float quantGato1 = gramaGato1 * 5.0;
	float quantGato2 = gramaGato2 * 5.0;
	
	float kgGato1 = quantGato1 / 1000;
	float kgGato2 = quantGato2 / 1000;
	float pesoSacoFinal = pesoSacoInicial - (kgGato1 + kgGato2);
	
	printf("Ap�s cinco dias restar� %.3f kg do saco de ra��o.", pesoSacoFinal);	
}
