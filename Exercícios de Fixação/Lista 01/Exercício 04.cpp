#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Num1, Num2, Som = 0, Mul = 0, Div = 0;

	printf ("Digite o primeiro n�mero: ");
	scanf  ("%f", &Num1);
	printf ("Digite o segundo n�meoro: ");
	scanf  ("%f", &Num2);
	
	Som = Num1 + Num2;
	Mul = Num1 * Num2;
	Div = Num1 / Num2;
	
	printf ("\nO total da soma dos dois n�meros �: %.2f\n", Som);
	printf ("O total da multiplica��o dos dois n�meros �: %.2f\n", Mul);
	printf ("O total da divis�o dos dois n�meros �: %.2f", Div);
	
	//system ("pause");
	
	return 0;
}
