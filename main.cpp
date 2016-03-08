#include <iostream>
#include <vector>
#include <string>
#include "libro.h"
#include "header.h"
#include "editorial.h"
#include "nodo.h"
#include "indexfile.h"
#include <fstream>

using std::vector;
using namespace std;

int menu();
int menu2();
Libro libros();

int main(int argc, char *argv[]){
	fstream file ("libros.bin", ios::binary|ios::in|ios::out|ios::trunc);
	fstream file2 ("editorial.bin", ios::binary|ios::in|ios::out|ios::trunc);
	if(!file.is_open() && !file2.is_open()){

	}else{
		
		
	
		
	bool valid = false;
	while(!valid){
	int respuesta2 = menu();
	
	

			if (respuesta2 == 1)
			{
				int respuesta = menu2();
				if (respuesta == 1)
				{

					char isbn[13];
					char nombre[50];
					char autor[50];
					char editorial[50];
					cout << "ISBN: " << endl;
					cin.getline(isbn,13);
					cout << "Nombre: " << endl;
					cin.getline(nombre,50);
					cout << "Autor: " << endl;
					cin.getline(autor,50);
					cout << "Editorial: " << endl;
					cin.getline(editorial,50);
					Libro book(isbn,nombre,autor,editorial);
					file.seekp(0);
					Header h;
					file.write((char*)&h,sizeof(Header));
					file.write((char*)&book,sizeof(Libro));
					file.flush();
					//leer
					file.seekg(sizeof(Header));
					Libro l;
					file.read(reinterpret_cast<char*>(&l),sizeof(Libro));
					cout << l.toString() << endl;

			
				}else if (respuesta == 2)
				{
			
				}else if (respuesta == 3)
				{
			
				}else if (respuesta == 4)
				{
			
				}else{

				}
			}else if(respuesta2 == 2){
				int respuesta = menu2();
				if (respuesta == 1)
				{	
			
				}else if (respuesta == 2)
				{
			
				}else if (respuesta == 3)
				{
			
				}else if (respuesta == 4)
				{
			
				}else{

				}	
		
			}else{
				valid = true;
			}
		file.close();
		return 0;
	}
	}
}
int menu(){
	cout << "1. libros" << endl
	<< "2. editoriales" << endl << "3. terminar" << endl;
	int respuesta = 0;
	cin >> respuesta;
	cin.ignore();
	return respuesta;
}

int menu2(){
	cout << "1. agregar" << endl
	<< "2. modificar" << endl << 
	"3. eliminar" << endl <<
	"4. buscar" << endl <<"5. defragmentar" << endl;
	int respuesta = 0;
	cin >> respuesta;
	cin.ignore();
	return respuesta;
}

