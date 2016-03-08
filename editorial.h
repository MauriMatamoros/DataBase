#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Editorial{
 protected:
 	char id[13];
 	char nombre[50];
 	char direccion[50];
 public:
	Editorial(char* id, char* nombre, char* direccion);
	string getId()const;
	string getNombre()const;
	string getDireccion()const;
	void setId(char* id);
	void setNombre(char* nombre);
	void setDireccion(char* direccion);
	~Editorial();
	string toString();
};