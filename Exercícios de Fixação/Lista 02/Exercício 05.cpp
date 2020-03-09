#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int   Num_1,Num_2,Div = 0, Res = 0;
	
	printf ("Digite o primeiro número: ");
	scanf  ("%d", &Num_1);
	printf ("Digite o segundo número: ");
	scanf  ("%d", &Num_2);
	
	if (Num_2 == 0)
	{
		printf ("\nDivisão por zero.");
	}
	else
	{
		Div = Num_1 / Num_2;
		Res = Num_1 % Num_2;
		
		printf ("\nO resultado da vivisão de %d por %d é %d com resto %d", Num_1, Num_2, Div, Res);
	}
	
	//system ("pause");
	
	return 0;
}
