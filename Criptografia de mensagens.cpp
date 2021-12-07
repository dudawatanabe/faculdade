#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
	int numero;
	FILE*arquivo;
	FILE*arquivo_ori;
	int tamanho;
	int main(){
		do{
		
		printf("  XXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
		printf("  X 1 - Criptografar texto    X\n");
		printf("  X 2 - Descriptografar texto X\n");
		printf("  X 3 - Mostrar texto         X\n");
		printf("  X 9 - Sair                  X\n");
		printf("  XXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n\n >> ");
		scanf("%d",&numero);
		fflush(stdin);
	
							
			switch(numero)
			{
					
				
					case 1://criptografar
	
						char texto_ori[1000],linha[1000];
						
						arquivo_ori=fopen("texto.txt","r");
						
							if (arquivo_ori==NULL)
						    {
						        printf("\nProblema ao abrir o arquivo\n\n");
						        return 0;
						    }
						
							strcpy(texto_ori,"");
								while(fgets(linha,1000,arquivo_ori)!=NULL)
								{
									strcat(texto_ori,linha);
								}					
								
								 tamanho=strlen(texto_ori);
									for(int i=0;i<tamanho;i++)
									{
										texto_ori[i]=texto_ori[i]+3;
									}
									printf("\n O codigo foi criptografado \n\n");	
									fclose(arquivo_ori);
									
								FILE*arquivo;
									arquivo=fopen("texto.txt","w");
									fprintf(arquivo,"%s",texto_ori);
									fclose(arquivo_ori);
															
						break;
					case 2://descriptografar
						
						arquivo_ori=fopen("texto.txt","r");
						
							if (arquivo_ori==NULL)
						    {
						        printf("\nProblema ao abrir o arquivo\n\n");
						        return 0;
						    }
						
							strcpy(texto_ori,"");
								while(fgets(linha,1000,arquivo_ori)!=NULL)
								{
									strcat(texto_ori,linha);
								}					
								
								 tamanho=strlen(texto_ori);
									for(int i=0;i<tamanho;i++)
									{
										texto_ori[i]=texto_ori[i]-3;
									}
									printf("\n O codigo foi descriptografado \n\n");	
									fclose(arquivo_ori);
									

									arquivo=fopen("texto.txt","w");
									fprintf(arquivo,"%s",texto_ori);
									fclose(arquivo_ori);
				
						break;
					case 3://mostrar texto
				    	int i;
				   		 arquivo = fopen("texto.txt","r");
				   			 if (arquivo==NULL)
				   			 {
						        printf("\nProblema ao abrir o arquivo\n\n");
						        return 0;
						    }
				    	char texto[1000];
					    for (i=0;!feof(arquivo);i++)
					        texto[i]=fgetc(arquivo);
					    fclose(arquivo);
					    printf("\n%s\n\n\n",texto);
						break;	
					
				}
				}while(numero!=9);
system("pause");
return 0;
}
