#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Sal, Par = 0;
	
	printf ("Digite o valor do salário: R$ ");
	scanf  ("%f", &Sal);
	
	Par = (Sal / 100) * 34;
	
	printf ("\nO valor gasto mensalmente com o produto é de R$ %.2f.", Par);
	
	//system ("pause");
	
	return 0;
}
