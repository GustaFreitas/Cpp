#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Val_Imo, Val_Pre, Mes = 0, Ano = 0;
	
	printf ("Digite o valor do im�vel: R$ ");
	scanf  ("%f", &Val_Imo);
	printf ("Digite o valor da presta��o mensal: R$ ");
	scanf  ("%f", &Val_Pre);
	
	Mes = Val_Imo / Val_Pre;
	
	if (Mes == (int)Mes)
	{  
    	
    	printf ("\nA quantidade de meses a se pagar � de: %.0f", Mes);
    	
    	Ano = Mes / 12;
    	
    	printf ("\nA quantidade em anos a se pagar � de: %.1f", Ano);
    }
	else
	{
        printf ("\nOs valores n�o correspondem a um n�mero exato de presta��es.");
    }
    
	//system ("pause");
	
	return 0;
}
