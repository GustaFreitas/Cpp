#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Num_1, Num_2, Num_3, Som = 0;
	
	printf ("Digite o primeiro n�mero: ");
	scanf  ("%f", &Num_1);
	printf ("Digite o segundo n�mero: ");
	scanf  ("%f", &Num_2);
	printf ("Digite o terceiro n�mero: ");
	scanf  ("%f", &Num_3);
	
	Som = Num_2 + Num_3;
	
	if (Num_1 > Som)
	{
		printf ("\nO primeiro n�mero � maior que a soma do segundo e terceiro n�meros.");
	}
	else
	{
		printf ("\nO primeiro n�mero n�o � maior que a soma do segundo e terceiro n�meros.");
	}
	
	//system ("pause");
	
	return 0;
}
