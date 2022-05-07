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

int miClase::determinante(int matriz[2][2])
{
	int resultado = (matriz[0][0] * matriz[1][1]) -(matriz[0][1] * matriz[1][0]) ;
	return resultado;
}

/*
 * ingreso de matrices
 * ingresa el input separado por espacios
 *
 */
































