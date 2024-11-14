#include <iostream>
#include "CDoc.h"

using namespace std;

int main() {
	cout << "Prueba de clase " << endl;
	CDoc miDoc;
	cout << "Documento:" << miDoc.toString() << endl;
	return 0;
}
