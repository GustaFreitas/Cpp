#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int X, Y, Z, Som_XY = 0, Som_XZ = 0, Som_YZ = 0;
	
	printf ("Digite o comprimento do um lado do tri�ngulo: ");
	scanf  ("%d", &Z);
	printf ("Digite o comprimento de outro lado do tri�ngulo: ");
	scanf  ("%d", &X);
	printf ("Digite o comprimento de outro lado do tri�ngulo: ");
	scanf  ("%d", &Y);
	
	Som_XY = X + Y;
	Som_XZ = X + Z;
	Som_YZ = Y + Z;
	
	if (Z < Som_XY && Y < Som_XZ && X < Som_YZ)
	{
		printf ("\nOs comprimentos informados formam um tri�ngulo v�lido.");
	}	
	else
	{
		printf ("\nOs comprimentos informados N�O formam um tri�ngulo v�lido");
	}
	//system ("pause");
	
	return 0;
}
