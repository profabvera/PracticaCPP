#include "CRectangulo.h"
using namespace std;
int main() {
   CRectangulo miRec; // Creamos un objeto de la clase CRectangulo
   cout << miRec.toString() << endl; // Utilizamos el método toString para ver su estado.
   /* Pediremos nuevos datos al usuario y actualizaremos nuestro objeto 
      para volver a mostrarlos utilizando el mismo método */
   float bas=0.0;
   float alt=0.0;
   cout << "\nIngrese las medidas para el rectangulo " << endl;
   cout << "\tBase: ";
   cin >> bas;
   cout << "\tAltura: ";
   cin >> alt;
   miRec.setBase(bas);
   miRec.setAltura(alt);
   cout << miRec.toString() << endl;
   cout << "\nProbamos la sobrecarga del operador " << endl;
   cout << miRec << endl;
   return 0;
}

