#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>
#include "determinante.h"

using namespace std;
using namespace N; 

int laPlace(int matriz[3][3])
{
	class miClase pepe;
	int matriz2[2][2]={{matriz[1][1],matriz[1][2]},{matriz[2][1],matriz[2][2]}};
	int matriz3[2][2]={{matriz[1][0],matriz[1][2]},{matriz[2][0],matriz[2][2]}};
	int matriz4[2][2]={{matriz[1][0],matriz[1][1]},{matriz[2][0],matriz[2][1]}};
	int a = matriz[0][0] * pepe.determinante(matriz2);
	int b = matriz[0][1] * pepe.determinante(matriz3);
	int c = matriz[0][2] * pepe.determinante(matriz4);
	int resultado = a - b + c; 
	return resultado;
}

int sarrus(int matriz[3][3])
{
	int a = matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[1][0] * matriz[2][1];        
	int b = matriz[0][1] * matriz[1][0] * matriz[2][2] + matriz[0][0] * matriz[1][2] * matriz[2][1] + matriz[0][2] * matriz[1][1] * matriz[2][0];        
	int resultado = a - b; 
	return resultado;
}

/*
 * ingreso de matrices
 * ingresa el input separado por espacios
 *
 */

int main()
{
	cout << "Calculadora de Determinantes 2x2" << endl; 
	int matriz[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Ingresa la posicion " << i+1 << j+1 << endl;;
			cin >> matriz[i][j];

		}
	}
	cout << "Tu matriz quedo" << endl;
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " " << matriz[i][j];
		}
		printf("\n");
	}
	printf("\n");
	cout << "laPlace (1) " << endl; 
	cout << "Sarrus (2) " << endl; 
	cout << "Seleccione la opcion: "; 
	int opcion;
	cin >> opcion;
	if (opcion == 1)
	{
		cout << "La determinante es: " << laPlace(matriz) << endl;		
	}
	else if(opcion == 2)
	{
		cout << "La determinante es: " << sarrus(matriz) << endl;		
	}
	else
	{
		cout << "No existe esa opcion";	
	}	
	

	return 0;

}



