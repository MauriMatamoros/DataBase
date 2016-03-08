#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Libro{
 protected:
 	char isbn[13];
 	char nombre[50];
 	char autor[50];
 	char editorial[50];
 public:
	Libro(char* isbn, char* nombre, char* autor, char* editorial);
	Libro();
	//~Libro();
	string getIsbn();
	string getNombre()const;
	string getAutor()const;
	string getEditorial()const;
	void setIsbn(char* isbn);
	void setNombre(char* nombre);
	void setAutor(char* autor);
	void setEditorial(char* editorial);
	string toString();
};