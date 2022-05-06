#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h>


using namespace std;


void determinante(int a, int b, int c, int d)
{
	int resultado = (a*d)-(b*c);
	cout << "La determinada de la matriz ingresada es: " << resultado << endl;
}

/*
 * ingreso de matrices
 * ingresa el input separado por espacios
 *
 */

int main()
{
	cout << "Calculadora de Determinantes 2x2" << endl; 

	int a; 
	int b;
	int c;
	int d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	printf("\n");
	cout << "Tu matriz quedo: " << endl;
	printf("\n");
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
	printf("\n");
	determinante(a,b,c,d);

	return 0;

}



