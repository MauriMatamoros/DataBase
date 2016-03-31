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
	bool valid = false;
	while(!valid){
		int opcion = menu();
		if (opcion == 1)
		{
			int option = menu2();// operaciones de libros
			if (option == 1)//agregar
			{
				/* code */
				char isbn[14];
				char nombre[21];
				char autor[21];
				char editorial[14];
				cout << "Ingrese isbn: " << endl;
				cin.getline(isbn,14);
				cout << "Ingrese nombre: " << endl;
				cin.getline(nombre,21);
				cout << "Ingrese autor: " << endl;
				cin.getline(autor,21);
				cout << "Ingrese editorial: " << endl;
				cin.getline(editorial,14);
				//debugging
				/*
				cout << "isbn" << isbn << endl;
				cout << "nombre" << nombre << endl;
				cout << "autor" << autor << endl;
				cout << "editorial" << editorial << endl;
				*/
				//debugging
				Libro temp(isbn,nombre,autor,editorial);
				fstream archivo("libro.bin",ios::in|ios::out|ios::binary);
				if(archivo.good()){
					cout << sizeof(Libro) << endl;
					cout << sizeof(temp) << endl;
					archivo.write((char*)&temp,sizeof(Libro));//Escribir en archivo
					archivo.flush();
					archivo.close();
				}

			}else if (option == 2)//modificar
			{
				/* code */

			}else if (option == 3)//eliminar
			{
				/* code */
				char isbn[14];
				cout << "Ingrese isbn: " << endl;
				cin.getline(isbn,14);
			}else if (option == 4)//buscar
			{
				/* code */
				char isbn[14];
				cout << "Ingrese isbn: " << endl;
				cin.getline(isbn,14);
			}else if (option == 5)//defragmentar
			{
				/* code */
			}
		}else if (opcion == 2)
		{
			int option = menu2();// operaciones de editoriales
			if (option == 1)//agregar
			{
				/* code */
				char id[14];
				char nombre[21];
				char direccion[21];
				cout << "Ingrese id: " << endl;
				cin.getline(id,14);
				cout << "Ingrese nombre: " << endl;
				cin.getline(nombre,21);
				cout << "Ingrese direccion: " << endl;
				cin.getline(direccion,21);
				Editorial* temp = new Editorial(id,nombre,direccion);

			}else if (option == 2)//modificar
			{
				/* code */

			}else if (option == 3)//eliminar
			{
				/* code */
				char id[14];
				cout << "Ingrese id: " << endl;
				cin.getline(id,14);
			}else if (option == 4)//buscar
			{
				/* code */
				char id[14];
				cout << "Ingrese id: " << endl;
				cin.getline(id,14);
			}else if (option == 5)//defragmentar
			{
				/* code */
			}
		}else if (opcion == 3)//salir del programa
		{
			valid = true;
		}
	}
	return 0;
}
	

	int menu(){
		cout << "**********M E N U**********" << endl << "1. libros" << endl
		<< "2. editoriales" << endl << "3. terminar" << endl;
		int respuesta = 0;
		cin >> respuesta;
		cin.ignore();
		return respuesta;
	}

	int menu2(){
		cout << "*********O P E R A C I O N E S*********" << endl <<"1. agregar" << endl
		<< "2. modificar" << endl << 
		"3. eliminar" << endl <<
		"4. buscar" << endl <<"5. defragmentar" << endl;
		int respuesta = 0;
		cin >> respuesta;
		cin.ignore();
		return respuesta;
	}

