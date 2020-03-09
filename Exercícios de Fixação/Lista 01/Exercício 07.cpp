#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Pes,Eng = 0, Ema = 0, Nov_Pes = 0;
	
	printf ("Digite o peso em Kg: ");
	scanf  ("%f", &Pes);
	
	Eng = (Pes / 100) * 15;
	Ema = (Pes / 100) * 20;
	
	Nov_Pes = Pes + Eng;
	printf ("\nO novo peso será de %.2f se a pessoa engordar 15 por cento em relação ao peso atual.", Nov_Pes);
	
	Nov_Pes = Pes - Ema;
	printf ("\nO novo peso será de %.2f se a pessoa emagrecer 20 por cento em relação ao peso atual.", Nov_Pes);
	
	//system ("pause");
	
	return 0;
}
