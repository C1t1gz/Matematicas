## Matrices 


Se puede definir una matriz, como un conjunto de elementos(numeros) ordenados en filas y comlumnas

cada uno de los numeros de que consta la matriz se denomina elemento. 

el numero de de filas y columnas de una matriz se denomina dimension de una matriz

decimos que una matriz es de orden *m* x *n* (o de dimension *m* x *n*) cuando tiene *m* fils y *n* columnas

### Suma y Resta 

La suma y resta de matrices es una operación lineal que consiste en unificar los elementos de dos o más matrices que coincidan en posición dentro de sus respectivas matrices y que estas tengan el mismo orden. 

En otras palabras, la suma o resta de una o más matrices es la suma o resta de los elementos que tengan la misma posición dentro de las matrices y que estas tengan el mismo orden.


### Multiplicacion 

El elemento C[i][j] de la matriz producto se obtiene multiplicando cada elemento de la fila i de la matriz A por cada elemento de la columna j de la matriz B y sumándolos.
  
#### Propiedades 

El factor fundamental de la multiplicacion de las matrices es:
Que la segunda matriz B[j](la columna de la matriz) coincida con la A[i](la fila de la matriz A)

La dimensión de la matriz resultado es la combinación de la dimensión de las matrices. En otras palabras, la dimensión de la matriz resultado serán las columnas de la primera matriz y las filas de la segunda matriz. 

Multiplicaremos matrices de dos en dos.

la multiplicacion de matrices es no conmutativa

### Cofactores

### Inversa
### Adjunta


### Determinantes

El determinante de una matriz determin si los sistemas son singulkares o ml condicionados. En otras palabras, sirve par determinaar la existencia y la unidad de los resultados de los sistemas de ecuaciones lineales

El determinante de unaa matriz es un numero
Un determinante con valor de cero indica que se tiene un sistema singular.
un determinante con valor cercano a cero indica que se tiene un sistema mal condicionado

#### Calcular determinante de matrices menores a 2 filas y columnas

El determinante de una matriz de dimensión mxn es el resultado de restar la multiplicación de los elementos de la diagonal principal con la multiplicación de los elementos de la diagonal secundaria. 

#### Calcular determinante de matrices 3 filas y 3 columnas

##### Regla de Sarrus

Regla de Sarrus es un método usado para calcular el determinante de una matriz cuadrada de tercer orden.
 
En primer lugar, repetir las dos primeras filas de la matriz debajo de la misma de manera que queden cinco filas. Después sumar los productos de las diagonales descendentes (en línea continua) y sustraer los productos de las diagonales ascendentes (en trazos).

##### Regla de Laplace 
Dada una matriz Z[m][n] cualquiera de dimensi![Uploading Matriz-mxn.jpg…]()
ón [m][n],donde m=n, se expande respecto a la i-ésima fila, entonces:

![image](https://user-images.githubusercontent.com/55362749/167279941-8edaf04f-e1ed-49dc-bd7d-33547ece17e8.png)

D[i][j] es el determinante obtenido de eliminar la i-esima fila y la i-esima columna de Z[m][n]. 

![image](https://user-images.githubusercontent.com/55362749/167279960-6269cccb-bd22-41a4-aeb8-8afcbaa1bc10.png)

M[i][j] es el i,j-esimo menor. El determinante D[i][j] en función de M[i][j] se denomina el i,j-esimo cofactorde la matriz Z[m][n].
a es el ajuste de signo de la posición. 

![image](https://user-images.githubusercontent.com/55362749/167279981-1350609e-f30e-47b0-b4f5-4f1e1ea9af4e.png)

