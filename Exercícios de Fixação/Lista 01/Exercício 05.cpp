#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Val, Fin = 0, Imp = 0, Luc = 0;

	printf ("Digite o custo de fabrica��o do ve�culo: ");
	scanf  ("%f", &Val);
		
	Imp = (Val / 100) *45;
	Luc = (Val / 100) *12;
	Fin = Val + Imp + Luc;
	
	printf ("\nO pre�o final a ser pago pelo consumidor � de: R$%.2f\n", Fin);
	printf ("Imposto: R$%.2f\n", Imp);
	printf ("O lucro do distribuidor � de: R$%.2f", Luc);
	
	//system ("pause");
	
	return 0;
}
