#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int X, Y, Z, Som_XY = 0, Som_XZ = 0, Som_YZ = 0;
	
	printf ("Digite o comprimento do um lado do triângulo: ");
	scanf  ("%d", &Z);
	printf ("Digite o comprimento de outro lado do triângulo: ");
	scanf  ("%d", &X);
	printf ("Digite o comprimento de outro lado do triângulo: ");
	scanf  ("%d", &Y);
	
	Som_XY = X + Y;
	Som_XZ = X + Z;
	Som_YZ = Y + Z;
	
	if (Z < Som_XY && Y < Som_XZ && X < Som_YZ)
	{
		printf ("\nOs comprimentos informados formam um triângulo válido.");
	}	
	else
	{
		printf ("\nOs comprimentos informados NÃO formam um triângulo válido");
	}
	//system ("pause");
	
	return 0;
}
