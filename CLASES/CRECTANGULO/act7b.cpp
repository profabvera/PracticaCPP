/* *****************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
    prof. Armando B. VERA
***************************************** */
/* Programa para calculo de la superficie
 * interior del aula */

#include "CRectangulo.h"
using namespace std;

int main() {
	cout << "\n\t##########################################" << endl;
	cout << "\t##  Programa para calculo de Superficie ## " << endl;
	cout << "\t##########################################" << endl;

	float base=0.0;
	float altura=0.0;
	int numV=0;
	CRectangulo paredLat;
	CRectangulo paredFre;
	CRectangulo ventana;
	CRectangulo puerta;
	CRectangulo pizarron;
	
	cout << "\n\n\tComo las dimensiones de las ventanas es estandar (todas " << endl;
	cout << "\tde la misma medida) solo necesita las medidas de una" << endl;
	cout << "\n\t\tIngrese la medida (en metros) de la ventana " << endl;
	cout << "\t\tBase: ";
	cin >> base;
	cout << "\n\t\tAltura: ";
	cin >> altura;
	ventana.setBase(base);
	ventana.setAltura(altura);
	cout << "\n\n\t Ingrese las dimensiones de la puerta " << endl;
	cout << "\n\t\t Base: ";
	cin >> base;
	cout << "\n\t\t Altura: ";
	cin >> altura;
	puerta.setBase(base);
	puerta.setAltura(altura);
	
	cout << "\n\n\t Ingrese las dimensiones del pizarron " << endl;
	cout << "\n\t\t Base: ";
	cin >> base;
	cout << "\n\t\t Altura: ";
	cin >> altura;
	pizarron.setBase(base);
	pizarron.setAltura(altura);
	
	cout << "\n\n\t Ingrese las dimensiones de la Pared Lateral " << endl;
	cout << "\n\t\t Base: ";
	cin >> base;
	cout << "\n\t\t Altura: ";
	cin >> altura;
	paredLat.setBase(base);
	paredLat.setAltura(altura);	
	
	cout << "\n\n\t Ingrese las dimensiones de la Pared Frontal " << endl;
	cout << "\n\t\t Base: ";
	cin >> base;
	cout << "\n\t\t Altura: ";
	cin >> altura;
	paredFre.setBase(base);
	paredFre.setAltura(altura);	
	
	float supParedTotal=0.0;
	float supVentanaTotal=0.0;
	float supAulaInterior=0.0;
	
	supParedTotal=2*paredLat.area() + 2 * paredFre.area();
	supVentanaTotal=3*ventana.area();
	
	supAulaInterior=supParedTotal-(supVentanaTotal+puerta.area()+pizarron.area());
	
	cout << "\n\n\t##################################################" << endl;
	cout << "\n\t## Superficie Interior del Aula: "  << supAulaInterior <<" m2"<<"###"<< endl;
	cout << "\n\t##################################################" << endl;
	
	

	return 0;
}
