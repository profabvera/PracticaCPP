#include <iostream>
#include "CDoc.h"

using namespace std;

int main() {
	cout << "Prueba de clase " << endl;
	CDoc miDoc;
	cout << "Documento:" << miDoc.toString() << endl;
	cout << "Prueba de la sobrecarga del operador de salida << "<< endl;
	CDoc miDoc1("LC", "12.345.876");
	cout << miDoc1 << endl;
	return 0;
}
