#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Val_Imo, Val_Pre, Mes = 0, Ano = 0;
	
	printf ("Digite o valor do imóvel: R$ ");
	scanf  ("%f", &Val_Imo);
	printf ("Digite o valor da prestação mensal: R$ ");
	scanf  ("%f", &Val_Pre);
	
	Mes = Val_Imo / Val_Pre;
	
	if (Mes == (int)Mes)
	{  
    	
    	printf ("\nA quantidade de meses a se pagar é de: %.0f", Mes);
    	
    	Ano = Mes / 12;
    	
    	printf ("\nA quantidade em anos a se pagar é de: %.1f", Ano);
    }
	else
	{
        printf ("\nOs valores não correspondem a um número exato de prestações.");
    }
    
	//system ("pause");
	
	return 0;
}
