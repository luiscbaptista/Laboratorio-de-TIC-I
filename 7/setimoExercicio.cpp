#include<stdio.h>
#include<locale.h>

main(){
	float precoFabrica, perLucro, perImposto;
	float precoFinal, valorLucro, valorImposto;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o pre�o de f�brica: ");
		scanf("%f", &precoFabrica);
	printf("Digite o percentual de lucro: ");
		scanf("%f", &perLucro);
	printf("Digite o percentual de imposto: ");
		scanf("%f", &perImposto);
	
	valorLucro = (precoFabrica * perLucro) / 100;
	valorImposto = (precoFabrica * perImposto) / 100;
	precoFinal = precoFabrica + valorLucro + valorImposto;
	
	printf("\nValor correspondente ao Lucro: %.3f", valorLucro);
	printf("\nValor correspondente ao Imposto: %.3f", valorImposto);
	printf("\nPreco final do ve�culo: %.3f", precoFinal);
}
