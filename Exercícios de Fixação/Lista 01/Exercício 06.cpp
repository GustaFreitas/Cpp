#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Sal, Nov = 0, Rea = 0;

	printf ("Digite o sal�rio do funcion�rio: R$");
	scanf  ("%f", &Sal);
	
	Rea = (Sal / 100) * 25;
	Nov = Sal + Rea;
	
	printf ("\nO novo valor do sal�rio do funcion�rio � de: R$%.2f\n", Nov);
	printf ("Sendo que o reajuste foi de: R$%.2f", Rea);
	
	//system ("pause");
	
	return 0;
}
