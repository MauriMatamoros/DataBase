#include "editorial.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::stringstream;

Editorial::Editorial(char* id, char* nombre, char* direccion){
	setId(id);
	setNombre(nombre);
	setDireccion(direccion);
}

Editorial::Editorial(){}

string Editorial::getId()const{
	string retval(id);
	return retval;
}

string Editorial::getNombre()const{
	string retval(nombre);
	return retval;
}
string Editorial::getDireccion()const{
	string retval(nombre);
	return retval;
}

void Editorial::setId(char* id){
	strcpy(this->id,id);
}

void Editorial::setNombre(char* nombre){
	strcpy(this->nombre,nombre);
}

void Editorial::setDireccion(char* direccion){
	strcpy(this->direccion,direccion);
}

string Editorial::toString(){
	stringstream ss;
			ss << "Id: " << id << " Nombre: " << nombre << " Direccion: " 
			<< direccion;
	
	return ss.str();
}