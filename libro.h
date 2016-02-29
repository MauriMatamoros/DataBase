#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Libro{
 protected:
 	string isbn;
 	string nombre;
 	string autor;
 	string editorial;
 public:
	Libro(string isbn, string nombre, string autor, string editorial);
	string getIsbn()const;
	string getNombre()const;
	string getAutor()const;
	string getEditorial()const;
	void setIsbn(string isbn);
	void setNombre(string nombre);
	void setAutor(string autor);
	void setEditorial(string editorial);
	string toString();
};