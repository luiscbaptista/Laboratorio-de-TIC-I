#include<stdio.h>
#include<locale.h>

main(){
	float horasTrab, salarioMin, salarioBruto;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o n�mero de horas trabalhadas: ");
		scanf("%f", &horasTrab);
	printf("Digite o sal�rio m�nimo: ");
		scanf("%f", &salarioMin);
	
	salarioBruto = horasTrab * (salarioMin / 2);
	
	float salarioReceb = salarioBruto - (salarioBruto * 0.03);
	
	printf("\nSal�rio a receber: %.3f", salarioReceb);
}
