#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main(){
	int num, contPares = 0, contImpares = 0, somaPares = 0, somaImpares = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 1; i <= 10; i++){
		printf("Digite um n�mero: ");
			scanf("%d", &num);
			
		if(num % 2 == 0){
			somaPares += num;
			contPares++;
		}else{
			somaImpares += num;
			contImpares++;
		}
		system("cls");
	}
	
	float mediaPares = 0.0, mediaImpares = 0.0;
	
	mediaPares = (somaPares / contPares);
	mediaImpares = (somaImpares / contImpares);
	
	printf("M�dia dos pares: %.2f", mediaPares);
	printf("\nM�dia dos impares: %.2f", mediaImpares);
}
