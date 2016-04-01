#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Libro{
 protected:
 	char isbn[14];
 	char nombre[21];
 	char autor[21];
 	char editorial[21];
 public:
	Libro(char* isbn, char* nombre, char* autor, char* editorial);
	Libro();
	~Libro();
	string getIsbn();
	string getNombre();
	string getAutor();
	string getEditorial();
	void setIsbn(char* isbn);
	void setNombre(char* nombre);
	void setAutor(char* autor);
	void setEditorial(char* editorial);
	string toString();
};