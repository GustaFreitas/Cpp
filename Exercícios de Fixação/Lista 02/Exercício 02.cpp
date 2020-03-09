#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Num_1, Num_2, Num_3, Som = 0;
	
	printf ("Digite o primeiro número: ");
	scanf  ("%f", &Num_1);
	printf ("Digite o segundo número: ");
	scanf  ("%f", &Num_2);
	printf ("Digite o terceiro número: ");
	scanf  ("%f", &Num_3);
	
	Som = Num_2 + Num_3;
	
	if (Num_1 > Som)
	{
		printf ("\nO primeiro número é maior que a soma do segundo e terceiro números.");
	}
	else
	{
		printf ("\nO primeiro número não é maior que a soma do segundo e terceiro números.");
	}
	
	//system ("pause");
	
	return 0;
}
