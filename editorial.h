#pragma once 
#include <iostream>
#include <string>
#include <cstring>

using std::string;

class Editorial{
 protected:
 	int id;
 	string nombre;
 	string direccion;
 public:
	Editorial(int id, string nombre, string direccion);
	int getId()const;
	string getNombre()const;
	string getDireccion()const;
	void setId(int id);
	void setNombre(string nombre);
	void setDireccion(string direccion);
	string toString();
};