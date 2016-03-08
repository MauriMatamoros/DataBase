#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Libro{
 protected:
 	long long int isbn;
 	string nombre;
 	string autor;
 	string editorial;
 public:
	Libro(string isbn, string nombre, string autor, string editorial);
	long long int getIsbn()const;
	string getNombre()const;
	string getAutor()const;
	string getEditorial()const;
	void setIsbn(long long int isbn);
	void setNombre(string nombre);
	void setAutor(string autor);
	void setEditorial(string editorial);
	string toString();
};