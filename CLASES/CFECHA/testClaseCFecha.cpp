#include <iostream>
#include <string>
#include "CFecha.h"
#include "../UTILS/utils.h"
using namespace std;

int main() {
	string titEnc="de la clase CFecha";
	cout << encabezado(titEnc) << endl;
	

	//Creamos un objeto de la clase fecha en el sector de la memoria asignada al programa
	CFecha a; // Se utiliza el constructor con valores por defecto.
	cout << "Utilizamos el constructor que asigna la" << endl;
	cout << "fecha por defecto y el operador << sobrecargado "<<endl;
	cout << a << endl;
	cout << "Creamos otro objeto inicializando el mismo con valores validos" << endl;
	CFecha miCumple(24,8,1968);
	cout << miCumple << endl;
	cout << "Probamos asignar una fecha valida año bisiesto " << endl;
	CFecha f(29,2,2024);
	cout << f << endl;
	cout << "Probamos asignar una fecha no valida año no bisiesto" << endl;
	f=CFecha(29,2,2023);
	cout << f << endl;
	cout << "Creamos un objeto en el area del heap" << endl;
	CFecha *mFDN = new CFecha(24,8,1968);
	cout << *mFDN << endl;
	CFecha ali(4,6,1980);
	CFecha yo(24,8,1968);
	cout << "Probamos el operador - " << endl;
	CFecha dife;
	cout << "Ali: "<< ali << endl;
	cout << "Yo : " << yo << endl;
	int difer=ali.getAnio()-yo.getAnio();
	cout << difer << endl;
	
	CFecha fecha1(23,8,2000), fecha2(23,8,2015);
	int lapso=fecha1.edad(fecha2);
	cout << lapso << endl;
	
	CFecha f1(28,2,2024);
	cout << f1 << endl;
	CFecha f2(27,2,2024);
	cout << "Fecha f1: " << f1 << endl;
	cout << "Fecha f2: " << f2 << endl;
	cout << "f1 > f2: " << boolalpha <<(f1 > f2) << endl;
	cout << "f1 < f2: " << boolalpha <<(f1<f2) << endl;
	bool res = f1 > f2;
	cout << boolalpha << res << endl;
	
	cout << "\n\n\tProbando el método bisiesto() " << endl;
	CFecha fb = CFecha(29,2,2024);
	cout << fb << endl;
	cout << "\nAsignamos una fecha no validad 29/2/2023" <<endl;
	CFecha fb1=CFecha(29,2,2023);
	cout << fb1 << endl;
	cout << "\nAsignamos un mes incorrecto 29/14/2023" <<endl;
	fb1=CFecha(29,14,2023);
	cout << fb1 << endl;
	cout << "\nAsignamos un año menor a 1900 19/2/1023" <<endl;
	fb1=CFecha(29,2,1023);
	cout << fb1 << endl;
	cout << "Prueba de los m\'etodos set" << endl;
	cout << "Probamos el m\'etodo setAnio(2040)" << endl;
	fb1.setAnio(2040);
	cout << fb1 << endl;

	cout << "Probamos el m\'etodo setMes(2)" << endl;
	fb1.setMes(2);
	cout << fb1 << endl;

	cout << "Probamos el m\'etodo setDia(29)" << endl;
	fb1.setDia(29);
	cout << fb1 << endl;	
	
	return 0;
} 	
