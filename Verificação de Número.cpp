#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	float Num;
	
	printf ("Digite um numero: ");
	scanf  ("%f", &Num);
	
	if (Num == 0)
{
   		printf ("N�mero igual a 0.");
}
	else 
{
		if (Num > 0) 
{
     		printf ("N�mero maior que zero.");
     		
}
   		else
{
            printf ("N�mero menor que zero");
}
}
	
	//system ("pause");
  
  return 0;
}
