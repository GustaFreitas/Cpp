#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Val_Aba, Pre_Con, Lit = 0;
	
	printf ("Digite o valor gasto para abastecimento: R$ ");
	scanf  ("%f", &Val_Aba);
	printf ("Digite o valor do litro do combustivel: R$ ");
	scanf  ("%f", &Pre_Con);
	
	Lit = Val_Aba / Pre_Con;
	
	printf ("\nA quantidade de litros abastecidos foi de: %.2f litros", Lit);
	
	//system ("pause");
	
	return 0;
}
