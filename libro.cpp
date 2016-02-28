#include "libro.h"
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

Libro::Libro(string isbn, string nombre, string autor, string editorial){
	this->isbn = isbn;
	this->nombre = nombre;
	this->autor = autor;
	this->editorial = editorial;
}
string
 Libro::getIsbn()const{
	return this->isbn;
}

string Libro::getNombre()const{
	return this->nombre;
}

string Libro::getAutor()const{
	return this->autor;
}

string Libro::getEditorial()const{
	return this->editorial;
}

void Libro::setIsbn(string isbn){
	this->isbn = isbn;
}

void Libro::setNombre(string nombre){
	this->nombre = nombre;
}
void Libro::setAutor(string autor){
	this->autor = autor;
}

void Libro::setEditorial(string editorial){
	this->editorial = editorial;
}

string Libro::toString(){
	stringstream ss;
			ss << "Isbn: " << this->isbn << "Nombre: " << this->nombre << " Autor: " 
			<< this->autor << "Editorial: " << this->editorial;
	
	return ss.str();
}