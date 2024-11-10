#include "CRectangulo.h"
#include <cmath>
#include <cstdlib>

CRectangulo::CRectangulo(){
   base=0.0;
   altura=0.0;
}
CRectangulo::CRectangulo(float bas_in) {
   base=bas_in;
   altura=bas_in;
}
CRectangulo::CRectangulo(float bas_in, float alt_in){
   base=bas_in;
   altura=alt_in;
}
CRectangulo::CRectangulo(const CRectangulo & r){
   base=r.base;
   altura=r.altura;
}
CRectangulo::~CRectangulo(){}

void CRectangulo::setBase(float bas_in){
   base=bas_in;
}
void CRectangulo::setAltura(float alt_in){
   altura=alt_in;
}
float CRectangulo::getBase() const {
   return base;
}

float CRectangulo::getAltura() const {
   return altura;
}

double CRectangulo::perimetro() {
   return 2*base+2*altura;
}
double CRectangulo::area() {
   return base*altura;
}
double CRectangulo::diagonal() {
   return sqrt(base*base + altura*altura);
}
