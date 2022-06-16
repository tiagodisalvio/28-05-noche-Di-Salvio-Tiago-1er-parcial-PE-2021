#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
	{
	
    int i ;
  
  	for (i=100; i<=200 ; i++)
  	{
  	  	if (i % 2 == 0) 
	{
        printf("Numero %d\n",i);
	    printf("Es par\n");
	} 
		else 
	{
    	printf("Numero %d\n",i);
		printf("Es impar\n");
	}
	}

return 0;

	}
