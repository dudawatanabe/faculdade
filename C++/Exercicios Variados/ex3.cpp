#include <stdio.h>

int main(){
	
	float media,resultado;
	int notas,i;
	float soma=0;
		
	printf("\nQuantas notas deseja inserir?\n\t");
	scanf("%i",&notas);
	
	for(i=0;i<notas;i++){

	
	printf("Digite a nota %d:",i+1);
	scanf("%f",&media);
	
	soma= media+soma;
}
	resultado= soma/notas;
	
	printf("A media das notas digitadas eh: %.2f",resultado);
	
	
	
	
	return 0;
}
