#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int   Num_1,Num_2,Div = 0, Res = 0;
	
	printf ("Digite o primeiro n�mero: ");
	scanf  ("%d", &Num_1);
	printf ("Digite o segundo n�mero: ");
	scanf  ("%d", &Num_2);
	
	if (Num_2 == 0)
	{
		printf ("\nDivis�o por zero.");
	}
	else
	{
		Div = Num_1 / Num_2;
		Res = Num_1 % Num_2;
		
		printf ("\nO resultado da vivis�o de %d por %d � %d com resto %d", Num_1, Num_2, Div, Res);
	}
	
	//system ("pause");
	
	return 0;
}
