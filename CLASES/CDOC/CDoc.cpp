#include "CDoc.h"
#include <string>

CDoc::CDoc(){
   tipo = "DNI";
   numero = "00.000.000";
}
CDoc::CDoc(std::string tip_in, std::string num_in){
   tipo=tip_in;
   numero=num_in;
}
CDoc::CDoc(const CDoc & d){
   tipo=d.tipo;
   numero=d.numero;
}
CDoc::~CDoc(){ }

void CDoc::setTipo(std::string tip_in){
   tipo=tip_in;
}
void CDoc::setNumero(std::string num_in){
   numero=num_in;
}
std::string CDoc::getTipo()const {
   return tipo;
}
std::string CDoc::getNumero()const {
   return numero;
}
// Definición de los métodos de sobrecarga
 CDoc& CDoc::operator=(const CDoc& d){
	 tipo=d.tipo;
	 numero=d.numero;
	 return *this;
 }
std::ostream& operator<<(std::ostream& dout, const CDoc& d){
   dout << d.tipo<< " "<< d.numero <<" ";
   return dout;
}

std::string CDoc::toString(){
   std::stringstream s;
   s<<tipo << " "<< numero ;
   return s.str();
}

std::ostream& operator<<(std::ostream& dout, const CDoc& d){
	dout << d.tipo << " " << d.numero " ";
	return dout;
}
std::istream& operator>>(std::istream& din, CDoc& d){
	while(d.tipo==""){
		std::cout << "El tipo es necesario" << endl;
	}
	
	std::getline(cin, d.tipo);
				
	
