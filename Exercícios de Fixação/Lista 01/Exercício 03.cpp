#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Ano,CPD;
	float Pre, Tot = 0, VPD = 0, VPM = 0, VPA = 0;

	printf ("Digite a quantos anos é fumante: ");
	scanf  ("%d", &Ano);
	printf ("Digite a quantos cigarros fuma por dia: ");
	scanf  ("%d", &CPD);
	printf ("Digite a quanto custa cada cigarro (unidade): R$");
	scanf  ("%f", &Pre);
	
	VPD = CPD * Pre;
	VPM = VPD * 30;
	VPA = VPM * 12;
	Tot = VPA * Ano;
	
	if (Ano > 0 & CPD > 0 & Pre > 0)
	{
		printf ("\nO valor gasto por dia é de R$ %.2f.\n", VPD);
		printf ("O valor gasto por mês é de R$ %.2f.\n", VPM);
		printf ("O valor gasto por ano é de R$ %.2f.\n", VPA);
		printf ("O valor total gasto é de R$ %.2f.", Tot);
	} 
	else
	{
		printf ("\nERRO");
	}
	
	//system ("pause");
	
	return 0;
}
