#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	int i, I, Tot;

	while (i <= 10)
{
   		while (I <= 10)
{
			printf ("|    %d X %d =\t|\t", i, I);
			Tot = i * I;
			printf ("%d \t | \n", Tot);
			
			Tot = i + I;
      		I   = I + 1;
}
   		I = 1;
   		i = i + 1;
   		printf ("| \t\t| \t\t | \n");
}
	
	//system ("pause");
	
 	return 0;
}


/*

   J <- 1
   I <- I+1
   Escreval ("")
FimEnquanto*/

