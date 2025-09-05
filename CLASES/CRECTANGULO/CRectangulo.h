// Diseño de la clase CRectangulo

/* *********************************
Esta es una clase que se utiliza
como medio de aprendizaje de C++
y la POO.
* Armando B. VERA 
* Prof. De Matemática e Informática 
********************************* */

#ifndef CRECTANGULO_H
#define CRECTANGULO_H
#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <sstream>


class CRectangulo {
   private:
      float base;
      float altura;
   public:
      CRectangulo();
      CRectangulo(float bas_in);
      CRectangulo(float bas_in, float alt_in);
      CRectangulo(const CRectangulo & r);
      ~CRectangulo();
      void setBase(float bas_in);
      void setAltura(float alt_in);
      float getBase() const;
      float getAltura() const;
      double perimetro();
      double area();
      double diagonal();
      friend std::ostream& operator<<(std::ostream& rout, const CRectangulo& r); 
      std::string toString(); // Muestra el estado de un objeto en un  momento dado
};
#endif // CRECTANGULO_H
