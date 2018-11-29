#include<stdio.h>
// Luiz Filipe Carneiro_005001487834564
int main()
{

 float vet[3000],menor=1000000;
 int i, cont=0;
 for(i=0;i<3000;i++)
 {
 	printf(" digite um peso:");
 	scanf("%f",& vet[i]);
 	 if( vet[i]< menor)
 	 {
 	 	menor=vet[i];
	  }
 	
 	
 	
 }
 for(i=0;i<3000;i++)
 {
 	if(vet[i]==menor) 
	 {
 		cont++;
 		
	 }
 	
 	
 	
 }
 printf(" menor peso e %.2f", menor);
 printf("  tem %d objetos com o mesmo peso",cont);
 return 0;
}
