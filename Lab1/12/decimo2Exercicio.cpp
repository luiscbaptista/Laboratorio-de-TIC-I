#include<stdio.h>
#include<math.h>
#include<locale.h>

main(){
	int num;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira um n�mero com 5 d�gitos: ");
		scanf("%5d", &num);
		
	int n1, n2, n3, n4, n5;
	
	n1 = (num%100000)/10000; 
	n2 = (num%10000)/1000; 
	n3 = (num%1000)/100; 
	n4 = (num%100)/10;
	n5 = num%10;
	
	if(n1 == n5 && n2 == n3){
		printf("\n� um n�mero pal�ndromo.");
	}else{
		printf("\nN�o � um n�mero pal�ndromo.");
	}	
}
