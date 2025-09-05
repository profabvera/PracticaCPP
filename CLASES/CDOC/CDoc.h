#ifndef CDOC_H
#define CDOC_H
#include <string>
#include <sstream>
#include <ostream>
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
   CDoc& operator=(const CDoc& d);
   friend std::ostream& operator<<(std::ostream& dout, const CDoc& d);
   std::string toString();
   friend std::istream& operator>>(std::istream& din, CDoc& d);
};
#endif // CDOC_H
