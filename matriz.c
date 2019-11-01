/* Programación Orientada a Objetos
   Alumno: Rodríguez Muñoz José Luis
   Profesor: Reyes Juárez
   Grupo: 541

   Descripción:
   Programa en C con estructuras que consiste en operaciones con matrices entre ellas:
   1. Imprime las matrices A y B
   2. Imprime sus determinantes
   3. Imprime la suma de la Matriz A y B
   4. Imprime la resta de la Matriz A y B
   5. Imprime la multiplicación de la Matriz A y B
   6. Imprime la transpuesta */

#include "matriz.h"
#include "matriz.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int i, j;

struct MatrizStruct {
	int matrix_a[3][3];
	int matrix_b[3][3];
	int matrix_aT[3][3];
	int matrix_bT[3][3];
	int matrix_aAdj[3][3];
	int matrix_aInv[3][3];
	int matrix_aSuma[3][3];
	int matrix_aResta[3][3];
	int matrix_aMultiplicacion[3][3];
};

int determinanteA(Matriz m) {
	return (m->matrix_a[0][0] * m->matrix_a[1][1] * m->matrix_a[2][2])
			+ (m->matrix_a[2][0] * m->matrix_a[0][1] * m->matrix_a[1][2])
			+ (m->matrix_a[0][2] * m->matrix_a[1][0] * m->matrix_a[2][1])
			- (m->matrix_a[2][0] * m->matrix_a[1][1] * m->matrix_a[0][2])
			- (m->matrix_a[0][0] * m->matrix_a[1][2] * m->matrix_a[2][1])
			- (m->matrix_a[0][1] * m->matrix_a[1][0] * m->matrix_a[2][2]);
}

int determinanteB(Matriz m) {
	return (m->matrix_b[0][0] * m->matrix_b[1][1] * m->matrix_b[2][2])
			+ (m->matrix_b[2][0] * m->matrix_b[0][1] * m->matrix_b[1][2])
			+ (m->matrix_b[0][2] * m->matrix_b[1][0] * m->matrix_b[2][1])
			- (m->matrix_b[2][0] * m->matrix_b[1][1] * m->matrix_b[0][2])
			- (m->matrix_b[0][0] * m->matrix_b[1][2] * m->matrix_b[2][1])
			- (m->matrix_b[0][1] * m->matrix_b[1][0] * m->matrix_b[2][2]);
}

Matriz transpuestaA(Matriz m) {
	m->matrix_aT[0][0] = m->matrix_a[0][0];
	m->matrix_aT[0][1] = m->matrix_a[1][0];
	m->matrix_aT[0][2] = m->matrix_a[2][0];
	m->matrix_aT[1][0] = m->matrix_a[0][1];
	m->matrix_aT[1][1] = m->matrix_a[1][1];
	m->matrix_aT[1][2] = m->matrix_a[2][1];
	m->matrix_aT[2][0] = m->matrix_a[0][2];
	m->matrix_aT[2][1] = m->matrix_a[1][2];
	m->matrix_aT[2][2] = m->matrix_a[2][2];

	return m;
}

Matriz transpuestaB(Matriz m)
{
    m->matrix_bT[0][0] = m->matrix_b[0][0];
	m->matrix_bT[0][1] = m->matrix_b[1][0];
	m->matrix_bT[0][2] = m->matrix_b[2][0];
	m->matrix_bT[1][0] = m->matrix_b[0][1];
	m->matrix_bT[1][1] = m->matrix_b[1][1];
	m->matrix_bT[1][2] = m->matrix_b[2][1];
	m->matrix_bT[2][0] = m->matrix_b[0][2];
	m->matrix_bT[2][1] = m->matrix_b[1][2];
	m->matrix_bT[2][2] = m->matrix_b[2][2];

	return m;
}

Matriz suma(Matriz m)
{
    m->matrix_aSuma[0][0] = m->matrix_a[0][0] + m->matrix_b[0][0];
    m->matrix_aSuma[0][1] = m->matrix_a[0][1] + m->matrix_b[0][1];
    m->matrix_aSuma[1][0] = m->matrix_a[1][0] + m->matrix_b[1][0];
    m->matrix_aSuma[1][1] = m->matrix_a[1][1] + m->matrix_b[1][1];
    m->matrix_aSuma[2][0] = m->matrix_a[2][0] + m->matrix_b[2][0];
    m->matrix_aSuma[2][1] = m->matrix_a[2][1] + m->matrix_b[2][1];
    m->matrix_aSuma[2][2] = m->matrix_a[0][0] + m->matrix_b[2][2];

    return m;
}

Matriz resta(Matriz m)
{
    m->matrix_aResta[0][0] = m->matrix_a[0][0] - m->matrix_b[0][0];
    m->matrix_aResta[0][1] = m->matrix_a[0][1] - m->matrix_b[0][1];
    m->matrix_aResta[1][0] = m->matrix_a[1][0] - m->matrix_b[1][0];
    m->matrix_aResta[1][1] = m->matrix_a[1][1] - m->matrix_b[1][1];
    m->matrix_aResta[2][0] = m->matrix_a[2][0] - m->matrix_b[2][0];
    m->matrix_aResta[2][1] = m->matrix_a[2][1] - m->matrix_b[2][1];
    m->matrix_aResta[2][2] = m->matrix_a[0][0] - m->matrix_b[2][2];

    return m;
}

Matriz multiplicacion(Matriz m)
{
    m->matrix_aMultiplicacion[0][0] = m->matrix_a[0][0] * m->matrix_b[0][0];
    m->matrix_aMultiplicacion[0][1] = m->matrix_a[0][1] * m->matrix_b[0][1];
    m->matrix_aMultiplicacion[1][0] = m->matrix_a[1][0] * m->matrix_b[1][0];
    m->matrix_aMultiplicacion[1][1] = m->matrix_a[1][1] * m->matrix_b[1][1];
    m->matrix_aMultiplicacion[2][0] = m->matrix_a[2][0] * m->matrix_b[2][0];
    m->matrix_aMultiplicacion[2][1] = m->matrix_a[2][1] * m->matrix_b[2][1];
    m->matrix_aMultiplicacion[2][2] = m->matrix_a[0][0] * m->matrix_b[2][2];

    return m;
}


Matriz adjunta(Matriz m) {
	m->matrix_aAdj[0][0] = m->matrix_a[1][1] * m->matrix_a[2][2] - m->matrix_a[2][1] * m->matrix_a[1][2];
	m->matrix_aAdj[1][0] = -(m->matrix_a[1][0] * m->matrix_a[2][2] - m->matrix_a[2][0] * m->matrix_a[1][2]);
	m->matrix_aAdj[2][0] = m->matrix_a[1][0] * m->matrix_a[2][1] - m->matrix_a[2][0] * m->matrix_a[1][1];
	m->matrix_aAdj[0][1] = -(m->matrix_a[0][1] * m->matrix_a[2][2] - m->matrix_a[2][1] * m->matrix_a[0][2]);
	m->matrix_aAdj[1][1] = m->matrix_a[0][0] * m->matrix_a[2][2] - m->matrix_a[2][0] * m->matrix_a[0][2];
	m->matrix_aAdj[2][1] = -(m->matrix_a[0][0] * m->matrix_a[2][1] - m->matrix_a[2][0] * m->matrix_a[0][1]);
	m->matrix_aAdj[0][2] = m->matrix_a[0][1] * m->matrix_a[1][2] - m->matrix_a[1][1] * m->matrix_a[0][2];
	m->matrix_aAdj[1][2] = -(m->matrix_a[0][0] * m->matrix_a[1][2] - m->matrix_a[1][0] * m->matrix_a[0][2]);
	m->matrix_aAdj[2][2] = m->matrix_a[0][0] * m->matrix_a[1][1] - m->matrix_a[1][0] * m->matrix_a[0][1];

	return m;
}

Matriz inversa(Matriz m) {
	/* Una matriz solo es invertible si su determinante es distinto de 0. */

	/* La matriz inversa es igual a (1/|A|)*(Adj(A))^t */

	m->matrix_aInv[0][0] = m->matrix_aAdj[0][0];
	m->matrix_aInv[1][0] = m->matrix_aAdj[1][0];
	m->matrix_aInv[2][0] = m->matrix_aAdj[2][0];
	m->matrix_aInv[0][1] = m->matrix_aAdj[0][1];
	m->matrix_aInv[1][1] = m->matrix_aAdj[1][1];
	m->matrix_aInv[2][1] = m->matrix_aAdj[2][1];
	m->matrix_aInv[0][2] = m->matrix_aAdj[0][2];
	m->matrix_aInv[1][2] = m->matrix_aAdj[1][2];
	m->matrix_aInv[2][2] = m->matrix_aAdj[2][2];

	return m;
}

void printDatos(Matriz m) {

	/* Imprime la Matriz A */
	printf("\n Matriz A:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", m->matrix_a[i][j]);
		}
		printf("\n");
	}

	/* Imprime la Matriz B */
	printf("\n Matriz B:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", m->matrix_b[i][j]);
		}
		printf("\n");
	}


	/* Imprime su determinante. */
	printf("\n El determinante de la Matriz A es: %d\n", determinanteA(m));

	/* Imprime su determinante. */
	printf("\n El determinante de la Matriz B es: %d\n", determinanteB(m));

	/* Imprime la matriz transpuesta A */
	printf("\n Matriz A transpuesta:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", m->matrix_aT[i][j]);
		}
		printf("\n");
	}

	/* Imprime la matriz transpuesta B */
	printf("\n Matriz B transpuesta:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", m->matrix_bT[i][j]);
		}
		printf("\n");
	}

	/* Imprime la operación de Matriz A + Matriz B */

	printf("\n Matriz A + Matriz B:\n");
	for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
                printf("%3d", m->matrix_aSuma[i][j]);
        }
        printf("\n");
	}

	/* Imprime la operación de Matriz A - Matriz B */

	printf("\n Matriz A - Matriz B:\n");
	for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
                printf("%3d", m->matrix_aResta[i][j]);
        }
        printf("\n");
	}

	/* Imprime la operación de Matriz A * Matriz B */

	printf("\n Matriz A * Matriz B:\n");
	for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
                printf("%3d", m->matrix_aMultiplicacion[i][j]);
        }
        printf("\n");
	}

}

int main(void) {
	Matriz matriz = malloc(sizeof(struct MatrizStruct));

	/* Pide datos de la matriz A */
	printf("\n Digita los datos de la Matriz A ... ");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("\n\t Posici%cn [ %d , %d ]: ", 162, i + 1, j + 1);
			scanf("%d", &matriz->matrix_a[i][j]);
		}
	}

	/* Pide datos de la matriz B */
	printf("\n Digita los datos de la Matriz B ... ");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("\n\t Posici%cn [ %d , %d ]: ", 162, i + 1, j + 1);
			scanf("%d", &matriz->matrix_b[i][j]);
		}
	}

	/* Se calcula todo */
	determinanteA(matriz);
	determinanteB(matriz);
	transpuestaA(matriz);
	transpuestaB(matriz);
	suma(matriz);
    resta(matriz);
    multiplicacion(matriz);
	adjunta(matriz);

	/* Se muestran todos los datos por pantalla. */
	printDatos(matriz);

	return 0;
}
