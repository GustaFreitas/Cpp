#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
		int 	Num = 0;
		char	Esc;
	
	do
	{
		system ("cls");
		
		printf ("Digite qualquer n�mero: ");
		scanf  ("%d", &Num);
		
		if (Num > 0)
		{
			printf ("O n�mero � POSITIVO.\n");
		}
		else if (Num < 0)
		{
			printf ("O n�mero � NEGATIVO.\n");
		}
		else
		{
			printf ("O n�mero � IGUAL A 0.\n");
		}
		fflush (stdin);
		printf ("Deseja continuar a execu��o do programa? (S/N) \n");
		scanf  ("%c", &Esc);	
		
	} while ( Esc == 's' );
	
	//system ("pause");
  
	return 0;
}
