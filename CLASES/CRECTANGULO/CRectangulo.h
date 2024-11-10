//Diseño de la clase CRectangulo
/* *****************************
Esta es una clase que se utiliza
como medio de aprendizaje de C++
y la POO
***************************** */

#ifndef CRECTANGULO_H
#define CRECTANGULO_H

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
};
#endif // CRECTANGULO_H
