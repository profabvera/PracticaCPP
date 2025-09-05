/* ******* CFecha.cpp ***************** */
/* **************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
prof. Armando B. VERA
************************************** */

#include "CFecha.h"

constexpr int ANIO_MINIMO = 1900;

const std::array<std::string, 12> CFecha::nombreMeses = { "Enero",
	"Febrero", "Marzo", "Abrl", "Mayo","Junio", "Julio","Agosto", "Septiembre",
	"Octubre", "Noviembre", "Diciembre"};
	
CFecha::CFecha() : d(1), m(1), a(ANIO_MINIMO), mes(nombresMeses[0]), mflpd(false) {}
	
CFecha::CFecha(int d_in, int m_in, int a_in) : d(d_in), m(m_in), a(a_in), mflpd(false) {
    if (!validaFecha(d, m, a)) {
        throw std::invalid_argument("Fecha inválida");
    }
    mes = nombreMeses[m - 1];
}

bool CFecha::bisiesto(int a_in) const {
    return (a_in % 4 == 0 && a_in % 100 != 0) || (a_in % 400 == 0);
}

//   CFecha CFecha::fDef(1,1,1900);
// *********************************** 
bool CFecha::bisiesto(const int a_in) const {
	bool valRet=false; // valor de retorno
	if(a_in%4==0 && (a_in%100!=0 || a_in%400==0)){
			valRet=true;
	}
	return valRet;
}
// *********************************** 
bool CFecha::validaAnio(const int a_in){
	bool valRet=false;
	if(a_in>=1900){
		valRet=true;
	}
	return valRet;
}
// *********************************** 
bool CFecha::validaMes(const int m_in){
	bool valRet=false;
	if(m_in >0 && m_in <=12) {
		valRet=true;
	}
	return valRet;
}
// ************************************ 
bool CFecha::validaDia(const int d_in, const int m_in, const int a_in){
	bool valRet=false;
	int diaMax=0;
	switch(m_in){
		case 2:
			diaMax=28;
			if(bisiesto(a_in)){
				diaMax++;
			}
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			diaMax=31;
			break;
		case 4: case 6: case 9: case 11:
			diaMax=30;
			break;
//			 throw errorFecha();
	}
	if(d_in >0 && d_in <=diaMax){	 
		valRet=true;
	}
	return valRet;
}
// *********************************** 

bool CFecha::validaFecha(int d_in, int m_in, int a_in) const {
	bool valRet=false;
	if(validaDia(d_in , m_in, a_in) && validaMes(m_in) && validaAnio(a_in)){
		valRet=true;
	}
	return valRet;
}

// Representación de cadena 
void CFecha::fl(){
	switch(m) {
		case 1:
			mes="Enero";
			break;
		case 2:
			mes="Febrero";
			break;
		case 3:
			mes="Marzo";
			break;
		case 4:
			mes="Abril";
			break;
		case 5:
			mes="Mayo";
			break;
		case 6:
			mes="Junio";
			break;
		case 7:
			mes="Julio";
			break;
		case 8:
			mes="Agosto";
			break;
		case 9:
			mes="Septiembre";
			break;
		case 10:
			mes="Octubre";
			break;
		case 11:
			mes="Noviembre";
			break;
		case 12:
			mes="Diciembre";
			break;
//			throw errorFecha();
	}
	if(mflpd==false){
		mes=mes.substr(0,3);
	} 
}
// ************************************* 
void CFecha::activaFechaCorta(){
	mflpd=false;
	fl();
}
void CFecha::activaFechaLarga(){
	mflpd=true;
	fl();
}
CFecha::CFecha(int d_in, int m_in, int a_in, std::string mes_in, bool mflpd_in): d(d_in), m(m_in), a(a_in){
	
	if(!validaFecha(d,m,a)){
	//std::cout << "Fecha no válida. Se asigna la fecha por defecto" << std::endl;
		d=fDef.d;
		m=fDef.m;
		a=fDef.a;
	}
	mflpd=mflpd_in;
	fl();
}
// ************************************ 
void CFecha::setFDef(int d_in, int m_in, int a_in, std::string mes_in, bool mflpd_in){
	fDef.d=d_in;
	fDef.m=m_in;
	fDef.a=a_in;
	fDef.mes=mes_in;
	fDef.mflpd=mflpd_in;
}
// ************************************ 
CFecha::CFecha(const CFecha& f){
	d=f.getDia();
	m=f.getMes();
	a=f.getAnio();
	mes=f.mes;
	mflpd=f.mflpd;
}
// *********************************** 
CFecha::~CFecha(){};
// ************************************* 
std::string CFecha::fc() {
	std::string mesCorto;
	mesCorto=mes.substr(0,3);
	return mesCorto;
}
// ************************************** 
bool CFecha::setDia(int d_in){
	if(validaDia(d_in, m, a) && validaMes(m) && validaAnio(a)){
		d=d_in;
		return true;
	} else {
//		throw errorFecha();
		return false;
	}
}
// ************************************** REVISAR
bool CFecha::setMes(int m_in){
	bool valRet=false;
	if(m_in >0 && m_in<13) {
		m=m_in;
		fl(); // Actualizamos la representación string
		valRet=true;
	} else {
		valRet=false;
	}
	return valRet;
}
// ************************************* 
bool CFecha::setAnio(int a_in){
	if(validaDia(d, m, a_in) && validaMes(m) && validaAnio(a_in)){
		a=a_in;
		fl();
		return true;
	} else {
//		throw errorFecha(); //Aún me Falta aprender
		return false;
	}	
}
// ************************************** 
void CFecha::mf(){
	std::cout << getDia() << "/" << getMes() << "/" << getAnio() << " ";
}
// ************************************** 
void CFecha::mfl() {
	std::cout << getDia() << " de " <<  mes << " de " << getAnio() << " ";
}
// ************************************** 
void CFecha::mfc(){
	std::cout << getDia() << " de " << fc() << " de " << getAnio() << " ";
}
// **************************************
int CFecha::getDia() const {
	return d;
}
// ************************************** 
int CFecha::getMes() const {
	return m;
}
// ************************************** 
int CFecha::getAnio() const {
	return a;
}
// ************************************** 

int CFecha::edad(const CFecha& f_act) {
	int dif=f_act.a-a;
	if(f_act.m < m){
		dif=dif-1;
	}
	if(f_act.m == m && f_act.d<d){
		dif=dif-1;
	}
	return dif;
}
// ************************************** 
CFecha& CFecha::operator=(const CFecha& f){
	d=f.d;
	m=f.m;
	a=f.a;
	fl();
	return *this;
}

bool CFecha::operator<(const CFecha& f){
	bool valRet=false;
	if(a < f.a){
		valRet=true;
	} else if(a==f.a && m<f.m){
		 valRet=true;
	} else if(a==f.a && m==f.m && d<f.d){
			valRet=true;
	}
	return valRet;
}

bool CFecha::operator>(const CFecha& f){
	bool valRet=false;
	if(a > f.a){
		valRet=true;
	} else if(a==f.a && m>f.m){
		 valRet=true;
	} else if(a==f.a && m==f.m && d>f.d){
			valRet=true;
	}
	return valRet;
}	


// ************************************** 
std::ostream& operator<<(std::ostream& flout, CFecha& f){
	if(f.mflpd==true){
		flout << f.d << " de " << f.mes << " de " << f.a; 
	} else {
		flout << f.d << " de " << f.mes.substr(0,3)<< " de " << f.a;
	}
	return flout;	
}
// ************************************** 
std::istream& operator>>(std::istream& fin, CFecha& f){
	bool fval=false;
	while(fval==false){
	int dt=0;
	int mt=0;
	int at=0;
		while(dt==0) {
			std::cout << "Día: ";
			fin >> dt;
			if(dt<1||dt>31){
				fin.clear();
				fin.ignore(std::numeric_limits<int>::max(),'\n');
				std::cout <<"Error:...Vuelva a ingresar el dato" << std::endl;
				dt=0;
			}
		}
		while(mt==0) {
			std::cout << "Mes: ";
			fin >> mt;
			if(mt<1||mt>12){
				fin.clear();
				fin.ignore(std::numeric_limits<int>::max(),'\n');
				std::cout <<"Error:... Vuelva a ingresar los datos "<< std::endl;
				mt=0;
			}
		}
		while(at==0){
			std::cout <<"Año: ";
			fin >> at;
			if(at<1582){
				fin.clear();
				fin.ignore(std::numeric_limits<int>::max(),'\n');
				std::cout << "Error: Año gregoriano igual o mayor que 1582"<< std::endl;
				at=0;
			}
		}
		f=CFecha(dt,mt,at);
		if((f.getDia()==dt&&f.getMes()==mt&&f.getAnio()==at)==1){
			fval=true;
			f.fl();
		} else {
			std::cout <<"Error: fecha incorrecta. Ingrese otra fecha!" << std::endl;
		}
	}
	return fin;
}
// ************************************** 
