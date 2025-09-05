#include <string>
#include <sstream>
#include "../CFECHA/CFecha.h"

std::string encabezado(std::string tit_in){
	std::stringstream s;
	s << "########## Este es un programa de Prueba ##########"<< std::endl;
	s << "###########    "<< tit_in  << "    ###########" << std::endl;
	s << "###################################################" << std::endl;
	return s.str();
}
/*
int cuentaDias(CFecha f1, CFecha f2){
	int numDias=0;
	if(f1.a < f2.a)
	
*/

