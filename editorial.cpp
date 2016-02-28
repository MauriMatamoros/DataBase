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

Editorial::Editorial(int id, string nombre, string direccion){
	this->id = id;
	this->nombre = nombre;
	this->direccion = direccion;
}

int Editorial::getId()const{
	return this->id;
}

string Editorial::getNombre()const{
	return this->nombre;
}
string Editorial::getDireccion()const{
	return this->direccion;
}

void Editorial::setId(int id){
	this->id = id;
}

void Editorial::setNombre(string nombre){
	this->nombre = nombre;
}

void Editorial::setDireccion(string direccion){
	this->direccion = direccion;
}

string Editorial::toString(){
	stringstream ss;
			ss << "Id: " << this->id << "Nombre: " << this->nombre << " Direccion: " 
			<< this->direccion;
	
	return ss.str();
}