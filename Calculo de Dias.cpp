#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int Ida, Mes, Dia, Ano;

	printf ("Didite quantos anos tem: ");
	scanf  ("%d", &Ano);
	
	printf ("Didite quantos meses tem: ");
	scanf  ("%d", &Mes);

	printf ("Didite quantos dias tem: ");
	scanf  ("%d", &Dia);
	
	Ano  = Ano  * 365;
	Mes  = Mes  * 30;
	
	Ida = Ano + Mes + Dia;
	
	printf ("O total de dias vividos é: %d", Ida);
	
	//system ("pause");
  
  return 0;
}
