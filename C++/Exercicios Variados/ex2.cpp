#include <stdio.h>

int main(){

	float n1,n2,nf;
	
	printf("\nMe informe a nota 1 e a nota 2:\n");
	scanf("%f%f",&n1,&n2);

	nf= (n1+n2)/2;
	
	if(nf>=6)
	{
	
		printf("Parabéns, voce esta aprovado!");
		
	}
	else if(nf<3){
		printf("Voce esta reprovado !");
	}
	
	else if(nf>=3||nf<6){
		printf("Voce esta de exame!");
	}








return 0;
}
