#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int 	Ida = 0, i = 0, Temp = 0;
	float 	Med = 0;
	
	while (Ida >= 0)
	{
		printf ("Digite a idade: ");
		scanf  ("%d", &Ida);
		
		if (Ida >= 0)
		{
		i++;
		Temp = Ida + Temp;
		}
	}
	
	Med = Temp / i;
	
	printf ("\nA média geral das idades é de: %.2f", Med);
	
	//system ("pause");
	
	return 0;
}
