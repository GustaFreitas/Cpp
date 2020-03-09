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
		
		printf ("Digite qualquer número: ");
		scanf  ("%d", &Num);
		
		if (Num > 0)
		{
			printf ("O número é POSITIVO.\n");
		}
		else if (Num < 0)
		{
			printf ("O número é NEGATIVO.\n");
		}
		else
		{
			printf ("O número é IGUAL A 0.\n");
		}
		fflush (stdin);
		printf ("Deseja continuar a execução do programa? (S/N) \n");
		scanf  ("%c", &Esc);	
		
	} while ( Esc == 's' );
	
	//system ("pause");
  
	return 0;
}
