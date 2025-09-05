/* ******** CPersona.cpp ************* */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */
#include "CPersona.h"

CPersona::CPersona(){
   nombre="";
   apellido="";
   genero="";
   dni="";
   fDNac=CFecha(fDef);
}
CPersona::CPersona(std::string nom_in, std::string ape_in,std::string gen_in
                        CDoc dni_in, CFecha fdn_in){
   nombre=nom_in;
   apellido=ape_in;
   genero=gen_in;
   dni=dni_in;
   fDNac=fdn_in;
}

CPersona::CPersona(const CPersona & p){
   nombre=p.nombre;
   apellido=p.apellido;
   genero=p.genero;
   dni=p.dni;
   fDNac=p.fDNac;
}
CPersona::~CPersona(){}
void CPersona::setNombre(std::string nom_in){
   nombre=nom_in;
}
void CPersona::setApellido(std::string ape_in){
   apellido=ape_in;
}
void CPersona::setGenero(std::string gen_in){
   genero=gen_in;
}
void CPersona::setDni(CDoc dni_in){
   dni=dni_in;
}
void CPersona::setFDNac(CFecha fdn_in){
   fDNac=fdn_in;
}
std::string CPersona::getNombre() const{
   return nombre;
}
std::string CPersona::getApellido() const{
   return apellido;
}
std::string CPersona::getGenero() const{
   return genero;
}
std::string CPersona::getDni() const{
   return dni;
}
CFecha CPersona::getFDNac()const{
   return fDNac;
}
CPersona& CPersona::operator=(const CPersona& p){
   nombre=p.nombre;
   apellido=p.apellido;
   genero=p.genero;
   dni=p.dni;
   fDNac=p.fDNac;
}
std::ostream& operator<<(const std::ostream& pout, const CPersona& p){
   pout << "--Datos Personales--"<<std::endl;
   pout << "Nombre------:" << p.nombre << std::endl;
   pout << "Apellido----: " << p.apellido << std::endl;
   pout << "Genero------: " << p.genero << std::endl;
   pout << "DNI --------: " << p.dni << std::endl;
   pout << "Fecha de Nac: " << p.fDNac << std::endl;
   return pout;
}
//std::istream& operator>>(std::istream& pin, CPersona & p);

