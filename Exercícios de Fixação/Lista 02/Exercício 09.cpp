#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Opc;
	float Num_1, Num_2, Tot = 0;
	
	printf ("Digite o valor do primeiro n�mero: ");
	scanf  ("%f", &Num_1);
	printf ("Digite o valor do segundo n�mero:  ");
	scanf  ("%f", &Num_2);
	
	printf ("\n====================================");
	printf ("\n         Escolha uma op��o:         ");
	printf ("\n====================================");
	printf ("\n1 para somar os dois n�meros        ");
	printf ("\n2 para multiplicar os dois n�meros  ");
	printf ("\n====================================\nOp��o: ");
	scanf  ("%d", &Opc);
	printf ("====================================");
	
	if (Opc == 1)
	{
		Tot = Num_1 + Num_2;
		
		printf ("\nO valor total da soma �: %.2f.\n\n", Tot);
	}
	else if (Opc == 2)
	{
		Tot = Num_1 * Num_2;
		
		printf ("\nO valor total da multiplica��o �: %.2f.", Tot);
	}
	else
	{
		printf ("\nOp��o inv�lida.");
	}
	
	//system ("pause");
	
	return 0;
}
