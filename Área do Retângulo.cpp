#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	float Bas, Alt, Are;
	
	printf ("Escreva a base do ret�ngulo: ");
	scanf  ("%f", &Bas);
	
 	printf ("Escreva a altura do ret�ngulo: ");
	scanf  ("%f", &Alt);
	
	Are = Bas * Alt;
	
	printf ("A �rea do ret�ngulo �: %.2f", Are);
	
	//system ("pause");
  	
  return 0;
}
