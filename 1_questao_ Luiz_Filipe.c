#include<stdio.h>

int main()
{
	int i,j;
	int mat[4][4];
	int soma_linha=0,soma_coluna=0,soma;
	
	for(j=0;j<4;j++)
	{
	 for(i=0;i<4;i++)
	 {
	 	printf("coloque o valor da linha%d,coluna%d:",j,i);
	 	scanf("%d",&mat[i][j]);
	 }
	 
}
for(i=0;i<4;i++)
{
	j=1;
	soma_coluna=soma_coluna+mat[i][j];
}

for(j=0;j<4;j++)
{
	i=2;
	soma_linha=soma_linha+mat[i][j];
}
soma=soma_coluna + soma_linha;
printf("soma_coluna %d\n",soma_coluna);
printf("soma_linha %d\n",soma_linha);
printf(" a soma da linha 3 com a coluna 2 e %d",soma);	
system("pause");
return 0;	
	
}






