#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
    int i = 0;
    
    while(i < 100)
    {
       i = i+1;
       printf ("N�mero: %d \n", i);
    }    

  
  return 0;
}
