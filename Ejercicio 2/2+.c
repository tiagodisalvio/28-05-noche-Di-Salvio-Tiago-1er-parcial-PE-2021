#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 

{
	
	int CantidadH = 0, ValorH = 50, BonifH = 0, TotalH = 0, Modalidad = 0, MontoTotal = 0;  
	
		printf("Ingresar la cantidad de horas:\n");
		scanf("%d",&CantidadH);
	
	BonifH = CantidadH / 2;
	TotalH = CantidadH + BonifH;
	
		printf("Ingrese una modalidad: \n1 para Dias habiles, \n2 para Fines de semana\n");
		scanf("%d",&Modalidad);
	
		switch (Modalidad)
	{
		case 1:
	    		MontoTotal = ValorH * CantidadH;
	    break;
	
		case 2:
	    		MontoTotal = (ValorH * 1.3) * CantidadH;
	    break;
	
		default:
	    printf("Invalido, ingresar 1 o 2\n");
	return 0;
	    break;
	}
	
		printf("Total de horas contratadas: %d\nMonto Total: %d\n",TotalH,MontoTotal);
	
	return 0;

}

