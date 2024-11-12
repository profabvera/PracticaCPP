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
CDoc::~CDoc(){};

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

