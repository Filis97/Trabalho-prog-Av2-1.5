#include<stdio.h>
#include<string.h>
// Luiz Filipe Carneiro_0050014878
int main()
{
	char palavra[100],letra;
	int tam,i=0,cont=0;
	printf(" entre com uma palavra:");
	gets(palavra);
	printf("entre com uma letra:");
	scanf("%c",&letra);
	
	tam= strlen(palavra);
	
	for(i=0;i<tam;i++)
	{
		if(palavra[i]==letra)cont++;
	}
	
	printf(" a letra %c, aparece %d vezes\n\n",letra,cont);
	
	system("pause");
	return 0;
		
	}
	
	
	
	
	

