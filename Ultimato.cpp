#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char 	Esc;
	int 	Opc, Dia_Tra;
	float 	Hor_Tra, Val, Sal_Bru, INSS, I_R, V_T, Imp, Sal_Liq;
	
	do
	{
	system ("cls");
	
	printf ("*********** Calculo de Salário ***********\n");
	printf ("==========================================\n");
	printf ("          Escolha uma das opções          \n");
	printf ("==========================================\n");
	printf ("\n");
   	printf (" 1 - Para cálculo de salário por dias     \n");
   	printf (" 2 - Para cálculo de salário por horas    \n");
   	printf ("\n");
   	printf ("==========================================\n");
   	printf ("\n");
   	printf ("Digite sua escolha - ");
   	
   	scanf ("%d", &Opc);
  
  	switch ( Opc )
		{
    	case 1 :
    		
   			printf ("\nCalculo de Dias\n");
    		printf ("Digite os dias trabalhados: ");
    		scanf  ("%d", &Dia_Tra);
    		
   		 	printf ("Digite o valor por dia trabalhado: R$ ");
   		 	scanf  ("%f", &Val);
   		 	
   		 	Sal_Bru = Dia_Tra * Val;
   		 	
    	break;
    
    	case 2 :
    		
    		printf ("\nCalculo de Horas\n");
    		printf ("Digite as horas trabalhadas: ");
    		scanf  ("%f", &Hor_Tra);
    		
    		printf ("Digite o valor por horas trabalhada: R$ ");
    		scanf ("%f", &Val);
    		
    		Sal_Bru = Hor_Tra * Val;
    		
   	 	break;
    
    	default :
    		
    		printf ("\nOpção Inválida\n");
    		printf ("Tente Novamente\n");
		}

	//Cálculo de Salário
	
	INSS = Sal_Bru / 100 * 8;

   	if (Sal_Bru >= 1700)
	{
    	I_R = Sal_Bru /100 * 7;
	}

  	V_T = Sal_Bru / 100 * 6;

   	Sal_Liq = Sal_Bru - INSS - I_R - V_T;
   
   	Imp = INSS + I_R + V_T;
   	
   	//Saída de dados
   	
   	if ( Opc == 1 || Opc == 2  )
		{
   		printf ("\n==========================================\n");
   		printf ("Os valores são :                         \n");
   		printf ("==========================================\n");
   		printf ("Salário Bruto :      |R$  %.2f\n", Sal_Bru);
   		printf ("Impostos :           |R$  %.2f\n", Imp);
   		printf ("\nSendo que:\n");
   		printf ("INSS :               |R$  %.2f\n", INSS);
   		printf ("Imposto de Renda :   |R$  %.2f\n", I_R);
   		printf ("Vale Transporte :    |R$  %.2f\n", V_T);
   	
   		printf ("\n========================================\n");
   	
   		printf ("\nSalário Líquido :    |R$  %.2f\n", Sal_Liq);
   		printf ("\n==========================================\n");
   		printf (" \n");
   		printf ("Deseja repetir a operação? s - sim | n - não\n");
		fflush (stdin);
		scanf  ("%c", &Esc);
		}
	}
	while ( Esc == 's' );

 	return 0;
	}
