#include<stdio.h>
#include<locale.h>

main(){
	float custoEspect, precoConvit;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o custo do espet�culo teatral: ");
		scanf("%f", &custoEspect);
		
	printf("Digite o pre�o do convite para o espect�culo: ");
		scanf("%f", &precoConvit);
		
	int quantConvit = custoEspect / precoConvit;
	
	printf("\nQuantidade de convites a serem vendidos: %d", quantConvit);
}
