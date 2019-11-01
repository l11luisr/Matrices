#ifndef MATRIZ_H_
#define MATRIZ_H_

struct MatrizStruct;
typedef struct MatrizStruct* Matriz;

void printDatos(Matriz m);
int determinanteA(Matriz m);
int determinanteB(Matriz m);
Matriz transpuestaA(Matriz m);
Matriz transpuestaB(Matriz m);
Matriz adjunta(Matriz m);
Matriz inversa(Matriz m);
Matriz suma(Matriz m);
Matriz resta(Matriz m);
Matriz multiplicacion(Matriz m);

#endif /* MATRIZ_H_ */
