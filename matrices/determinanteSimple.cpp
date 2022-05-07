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

int main()
{
	cout << "Calculadora de Determinantes 2x2" << endl; 
	int matriz[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Ingresa la posicion " << i+1 << j+1 << endl;;
			cin >> matriz[i][j];

		}
	}
	cout << "Tu matriz quedo" << endl;
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << " " << matriz[i][j];
		}
		printf("\n");
	}
	printf("\n");
	miClase pepe;
	cout << "Tu determinante es: " << pepe.determinante(matriz) << endl;

	return 0;

}



