#ifndef CDOC_H
#define CDOC_H
#include <string>


class CDoc {
private:
   std::string tipo;
   std::string numero;

public:
   CDoc();
   CDoc(std::string tip_in, std::string num_in);
   CDoc(const CDoc & d);
   ~CDoc();
   void setTipo(std::string tip_in);
   void setNumero(std::string num_in);
   std::string getTipo()const;
   std::string getNumero()const;
};
#endif // CDOC_H
