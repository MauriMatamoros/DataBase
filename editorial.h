#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Editorial{
 protected:
 	char id[14];
 	char nombre[21];
 	char direccion[21];
 public:
	Editorial(char* id, char* nombre, char* direccion);
	Editorial();
	~Editorial();
	string getId()const;
	string getNombre()const;
	string getDireccion()const;
	void setId(char* id);
	void setNombre(char* nombre);
	void setDireccion(char* direccion);
	string toString();
};