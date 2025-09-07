/* ********** CPersona.h ************* */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */

#ifndef CPERSONA_H
#define CPERSONA_H

#include "../CDOC/CDoc.h"
#include "../CFECHA/CFecha.h"
#include <string>
#include <sstream>

class CPersona {
	private:
	   std::string nombre;
	   std::string apellido;
	   std::string genero;
	   CDoc dni;
	   CFecha fDNac;
	public:
	   CPersona();
	   CPersona(std::string nom_in, std::string ape_in,std::string gen_in
			CDoc dni_in, CFecha fdn_in);
	   CPersona(const CPersona & p);
	   ~CPersona();
	   void setNombre(std::string nom_in);
	   void setApellido(std::string ape_in);
	   void setGenero(std::string gen_in);
	   void setDni(CDoc dni_in);
	   void setFDNac(CFecha fdn_in);
	   std::string getNombre() const;
	   std::string getApellido() const;
	   std::string getGenero() const;
	   std::string getDni() const;
	   CFecha getFDNac()const;
	   std::string toString();
	   CPersona& operator=(const CPersona& p);
	   friend std::ostream& operator<<(const std::ostream& pout, const CPersona& p);
	   
//	   friend std::istream& operator>>(std::istream& pin, CPersona & p);
};

#endif // CPERSONA_H
