#include <stdio.H>
#include <stdlib.H>

int main ()
{
  int Num1, Num2, Tot;
  
  printf ("Digite um numero inteiro: ");
  scanf  ("%d", &Num1); 
  
  printf ("Digite outro numero inteiro: ");
  scanf  ("%d", &Num2);
  
  Tot = Num1 + Num2;
  
  printf ("O valor da soma e: %d", Tot); 
  
  //system ("pause");
  return(0);
}
