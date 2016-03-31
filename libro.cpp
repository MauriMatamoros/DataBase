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

Libro::Libro( char* isbn, char* nombre, char* autor, char* editorial){
	//isbn = new char[14];
	//nombre = new char[21];
	//autor = new char[21];
	//editorial = new char[14];
	strcpy(this->isbn, isbn);
	setIsbn(isbn);
	setNombre(nombre);
	setAutor(autor);
	setEditorial(editorial);
}

Libro::Libro(){
	//isbn = new char[13];
	//nombre = new char[20];
	//autor = new char[20];
	//editorial = new char[13];
}

Libro::~Libro(){
}

string Libro::getIsbn(){
	string retval(isbn);
	return retval;
}

string Libro::getNombre()const{
	string retval(nombre);
	return retval;
}

string Libro::getAutor()const{
	string retval(autor);
	return retval;
}

string Libro::getEditorial()const{
	string retval(editorial);
	return retval;
}

void Libro::setIsbn(char* isbn){
	strcpy(this->isbn,isbn);
}

void Libro::setNombre(char* nombre){
	strcpy(this->nombre,nombre);
}
void Libro::setAutor(char* autor){
	strcpy(this->autor,autor);
}

void Libro::setEditorial(char* editorial){
	strcpy(this->editorial,editorial);
}

string Libro::toString(){
	stringstream ss;
			ss << "Isbn: " << isbn << " Nombre: " << nombre << " Autor: " 
			<< autor << " Editorial: " << editorial;
	
	return ss.str();
}