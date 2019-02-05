/* Práctica #2 - Operaciones con matrices en C
   Rodríguez Muñoz José Luis
   Grupo: 541
   Fecha: 03/02/19

   Descripción: Programa en lenguaje C que simula operaciones de matrices entre ellas:

   1. Mostrar matrices originales ( A y B )
   2. Muestra la SUMA de las matrices
   3. Muestra la RESTA de las matrices
   4. Muestra la MULTIPLICACIÓN de las matrices */

int a[4][4],b[4][4],c[4][4], i,j,k,l;

main()
{

printf("\n\t\t [ OPERACIONES CON MATRICES ] ");
printf("\n\n  Introduce valores de la matriz A: ");

for(i=0; i<4; i++){
        printf("\n\t");

	for(j=0; j<4; j++){
	    printf("\n");
        printf("\tPosici%cn (%i,%i): ",162,i,j);
	    scanf("%d",&a[i][j]);
	}
	//printf(" \t");
	}
printf("\n *********************************** ");
printf("\n\n Introduce valores de la matriz B: ");

	for(i=0; i<4; i++){
            printf("\n\t");

	for(j=0; j<4; j++){
            printf("\n");
        printf("\tPosici%cn (%i,%i): ",162,i,j);
	    scanf("%d",&b[i][j]);
	}
	//printf("");
	}

	system("cls");

	// Matrices originales

	printf("\n Matriz A: \b");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf(" %d ",a[i][j]);
		}
		printf(" \n ");
	}

	printf("\n Matriz B: \b");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf(" %d ",b[i][j]);
		}
		printf(" \n ");
	}

   // Operaciones SUMA

	printf("\n La SUMA de las 2 matrices A + B es: \b");

	for(i=0; i<4; i++){

	for(j=0; j<4; j++){

	c[i][j]=a[i][j]+b[i][j];

	printf(" %d ",c[i][j]);

	}
	printf(" \n ");
	}

   // Operaciones RESTA

	printf("\n La RESTA de la Matriz A - B es:");

	for(i=0; i<4; i++){

	for(j=0; j<4; j++){

	c[i][j]=a[i][j]-b[i][j];

	printf(" %d ",c[i][j]);
	}
	printf(" \n ");
	}

   // Operaciones Multiplicacion

printf("\n La Multiplicaci%cn de la Matriz A * B es:",162);

	for(i=0; i<4; i++){

	for(j=0; j<4; j++){
	  c[i][j]=0;
	for(k=0; k<4; k++){

	c[i][j]+=a[i][k]*b[k][j];


	}
	printf(" %d ",c[i][j]);
	}
	printf(" \n ");
	}
}
