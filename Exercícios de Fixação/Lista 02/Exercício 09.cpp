#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Opc;
	float Num_1, Num_2, Tot = 0;
	
	printf ("Digite o valor do primeiro número: ");
	scanf  ("%f", &Num_1);
	printf ("Digite o valor do segundo número:  ");
	scanf  ("%f", &Num_2);
	
	printf ("\n====================================");
	printf ("\n         Escolha uma opção:         ");
	printf ("\n====================================");
	printf ("\n1 para somar os dois números        ");
	printf ("\n2 para multiplicar os dois números  ");
	printf ("\n====================================\nOpção: ");
	scanf  ("%d", &Opc);
	printf ("====================================");
	
	if (Opc == 1)
	{
		Tot = Num_1 + Num_2;
		
		printf ("\nO valor total da soma é: %.2f.\n\n", Tot);
	}
	else if (Opc == 2)
	{
		Tot = Num_1 * Num_2;
		
		printf ("\nO valor total da multiplicação é: %.2f.", Tot);
	}
	else
	{
		printf ("\nOpção inválida.");
	}
	
	//system ("pause");
	
	return 0;
}
