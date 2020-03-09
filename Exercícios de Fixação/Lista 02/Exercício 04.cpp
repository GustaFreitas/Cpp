#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Vel, Vel_Max, Tol = 0, Lim_A = 0, Lim_B = 0;
	
	printf ("Digite a velocidade máxima permitida na via: ");
	scanf  ("%f", &Vel_Max);
	printf ("Digite velocidade que o motorista estava dirigindo: ");
	scanf  ("%f", &Vel);
	
	Tol = Vel_Max + ((Vel_Max / 100)* 10);
	Lim_A = Vel_Max + 10;
	Lim_B = Vel_Max + 30;
	
	if (Vel_Max <= 0)
	{
		printf ("\nValor de máximo de velocidade da via está incorreta.");
	}
	else if (Vel > Tol && Vel <= Lim_A)
	{
		printf ("\nO valor da multa é de R$ 50,00.");
	}
	else if (Vel > Lim_A && Vel <= Lim_B)
	{
		printf ("\nO valor da multa é de R$ 100,00.");
	}
	else if (Vel > Lim_B)
	{
		printf ("\nO valor da multa é de R$ 200,00");
	}
	else if (Vel <= Tol && Vel > 0)
	{
		printf ("\nO motorista não deve receber multa.");
	}
	else 
	{
		printf ("\nValor de velocidade do motorista está incorreta.");
	}
	
	//system ("pause");
	
	return 0;
}
