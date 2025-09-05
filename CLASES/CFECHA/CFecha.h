/* ********** CFecha.h *************** */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
		prof. Armando B. VERA
************************************** */
#ifndef _CFECHA_H
#define _CFECHA_H

#include <iostream>
#include <ostream>
#include <istream>
#include <string>
#include <ctime>
#include <limits>
#include <array>

class CFecha {
private:
	int d;
	int m;
	int a;
	std::string mes;
	bool mflpd; // true: muestra fecha larga por defecto

	bool bisiesto(int a_in) const;
	bool validaFecha(int d_in, int m_in, int a_in) const;
	bool validaAnio(int a_in);
	bool validaMes(int m_in);
	bool validaDia(int d_in, int m_in, int a_in);
	static CFecha fDef; // Fecha por defecto

	
public:
	static CFecha fa;
// Constructor con valores por defecto
	CFecha(int d_in=0, int m_in=0, int a_in=0, std::string mes="", bool mflpd=true);
// Método para cambiar la fecha por defecto.
	void setFDef(int d_in, int m_in, int a_in, std::string mes_in, bool mflpd_in); // ESTUDIAR

	CFecha(const CFecha& f); // constructor de copia

	~CFecha(); // Destructor

// Métodos de cambio de comportamiento del flujo ostream
	void activaFechaCorta();
	void activaFechaLarga();


// Metodos de actualización
	bool setDia(int d_in);
	bool setMes(int m_in);
	bool setAnio(int a_in);

// Métodos de lectura
	int getDia() const;
	int getMes() const;
	int getAnio() const;


	void fl();
	std::string fc();

	void mf();
	void mfc();
	void mfl();
// Sobrecarga de ostream
	int edad(const CFecha& f_act);

	CFecha& operator=(const CFecha& f);
	bool operator<(const CFecha& f);
	bool operator>(const CFecha& f);
//	CFecha& operator-(const CFecha& fv, const CFecha& fn);
	friend std::ostream& operator<<(std::ostream& flout, CFecha& fl);
	friend std::istream& operator>>(std::istream& fin, CFecha& f);
};
#endif // _CFECHA_H

