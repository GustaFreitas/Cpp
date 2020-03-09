#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	float Bas, Alt, Are;
	
	printf ("Escreva a base do retângulo: ");
	scanf  ("%f", &Bas);
	
 	printf ("Escreva a altura do retângulo: ");
	scanf  ("%f", &Alt);
	
	Are = Bas * Alt;
	
	printf ("A área do retângulo é: %.2f", Are);
	
	//system ("pause");
  	
  return 0;
}
