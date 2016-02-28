#include "header.h"
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

Header::Header(string nombre, double precio){
	this->nombre = nombre;
	this->precio = precio;
	this->ingredientes = new string[5];
	for (int i=0; i< 5; i++)
		this->ingredientes[i] = " " ;
}

string Header::getNombre()const{
	return this->nombre;
}
double Header::getPrecio()const{
	return this->precio;
}

string Header::getIngredienteAt(int posicion)const{
	return this->ingredientes[posicion];
}

void Header::setNombre(string nombre){
	this->nombre = nombre;
}
void Header::setPrecio(double precio){
	this->precio = precio;
}

void Header::setIngredienteAt(int posicion, string ingrediente){
	this->ingredientes[posicion] = ingrediente;
}


string Header::toString(){
	stringstream ss;
	if(ingredientes[0]==" ")
	{
		ss << "Comida: " << this->nombre << " Precio: $" << this->precio;
	}else if (ingredientes[1]==" ")
	{
		ss << "Comida: " << this->nombre << " Precio: $" << this->precio << endl <<"Ingredientes: "
		<< endl << "	-" << ingredientes[0];
	}else if(ingredientes[2]==" ")
	{
		ss << "Comida: " <<this->nombre << " Precio: $" << this->precio << endl <<"Ingredientes: "
		<< endl <<"	-" << ingredientes[0] << endl <<"	-" << ingredientes[1];
	}else if(ingredientes[3]==" ")
	{
		ss <<"Comida: " << this->nombre << " Precio: $" << this->precio << endl <<"Ingredientes: "
		<< endl <<"	-" << ingredientes[0] << endl <<"	-" << ingredientes[1]<< endl <<"	-" << ingredientes[2];
	}else if(ingredientes[4]==" ")
	{
		ss <<"Comida: " << this->nombre << " Precio: $" << this->precio << endl <<"Ingredientes: "
		<< endl <<"	-" << ingredientes[0] << endl << "	-" <<ingredientes[1]<< endl <<"	-" << ingredientes[2] 
		<< endl <<"	-" << ingredientes[3];
	}else{
	ss <<"Comida: " << this->nombre << " Precio: $" << this->precio << endl <<"Ingredientes: "
	<< endl <<"	-" << ingredientes[0] << endl <<"	-" << ingredientes[1] << endl <<"	-" << ingredientes[2] << endl <<
	"	-" << ingredientes[3] << endl <<"	-" << ingredientes[4]; 
	}
	return ss.str();
}