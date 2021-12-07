#include <stdio.h>

int main (){
	
	float m1,m2,m3;
	
	printf("\nMe informe a PRIMEIRA medida: ");
	scanf("%f",&m1);
	
	printf("\nMe informe a SEGUNDA medida: ");
	scanf("%f",&m2);
	
	printf("\nMe informe a TERCEIRA medida: ");
	scanf("%f",&m3);
	
	if((m1 - m3) < m2&&m2<(m1 + m3)){

		if(m2==m3&&m2==m1){
		printf("\nVoce tem um triangulo equilatero!\nOnde todos os lados sao iguais.");
		}
		else if(m2!=m3&&m2!=m1&&m3!=m1){
		printf("\nVoce tem um triangulo escaleno!\nOnde todos os lados sao diferentes.");
		}
		else if(m2==m3&&m2!=m1||m1==m3&&m1!=m2||m2==m1&&m2!=m3){
		
		printf("\nVoce tem um triangulo isosceles!\nOnde somente dois lados sao iguais.");
		}
}
	else
		printf("O valor das medidas eh invalido!");
	return 0;
}
