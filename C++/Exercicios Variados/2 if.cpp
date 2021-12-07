#include <stdio.h>

int main(){
	
	int dia,mes,ano;
	
	printf("Digite o ano em que voce nasceu (Somente numeros): ");
	scanf("%i",&ano);
	
	printf("Digite o mes em que voce nasceu(Somente numeros): ");
	scanf("%i",&mes);
	
	printf("Digite o dia em que voce nasceu(Somente numeros): ");
	scanf("%i",&dia);
	
	if(ano<2014&&mes<13&&dia<32)
	{
		printf("Parabéns, seu aniversario eh valido!");
		
	}
	else if(ano>2013)
	{
		printf("Amigo voce ainda nao nasceu, ano invalido!");
	}
	else if(mes>12)
	{
		printf("Um ano só tem 12 meses, mes invalido");
	}
	else if(dia>31)
	{
		printf("Só temos no máximo 31 dias, dia invalido");
	}
		
		
	
	
	
	
	
	
	
	return 0;
}
