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
bool exists_test(const std::string& name);
Libro libros();

int main(int argc, char *argv[]){
	bool valid = false;
	while(!valid){
		int opcion = menu();
		if (opcion == 1)
		{
			int option = menu2();
			if(option == 1)//agregar
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
				bool file_exists = exists_test("libro.bin");
				if (file_exists)//check si existe el archivo
				{
					cout<< "Entro" << endl;
					fstream archivo("libro.bin",ios::in | ios::out | ios::binary);
					if(archivo.good()){
						archivo.seekg(0,ios::beg);
						Header header;
						archivo.read(reinterpret_cast<char*>(&header),sizeof(Header));
						if (header.getAl() != -1)
						{
							archivo.seekg(0,ios::beg);
							Header header;
							archivo.read(reinterpret_cast<char*>(&header),sizeof(Header));
							archivo.seekp(header.getAl(),ios::beg);
							Libro tempo;
							long int posicion = archivo.tellp();
							archivo.read(reinterpret_cast<char*>(&temp),sizeof(Libro));
							header.setAl(stoll(tempo.getEditorial()));
							archivo.seekp(0,ios::beg);
							archivo.write((char*)&header,sizeof(Header));
							archivo.seekp(header.getAl(),ios::beg);
							archivo.write((char*)&temp,sizeof(Libro));
							archivo.flush();
							archivo.close();
						}else{
							archivo.seekg(0,ios::beg);
							Header header;
							archivo.read(reinterpret_cast<char*>(&header),sizeof(Header));
							header.Size();
							archivo.seekp(0,ios::beg);
							archivo.write((char*)&header,sizeof(Header));
							archivo.seekp(0,ios::end);
							cout << "Existo y excribieron en mi" << endl;
							archivo.write((char*)&temp,sizeof(Libro));
							archivo.flush();
							archivo.close();
						}
					}
				}else{
					fstream archivo("libro.bin", ios::out | ios::binary);
					cout << "entro no existe" << endl;
					if(archivo.good()){
						cout << "No existo pero me crearon" << endl;
						Header header;
						header.Size();
						archivo.write((char*)&header,sizeof(Header));
						archivo.write((char*)&temp,sizeof(Libro));
						archivo.flush();
						archivo.close();
					}
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
				fstream archivo("libro.bin",ios::in| ios::out | ios::binary);
				Header header;
				archivo.read(reinterpret_cast<char*>(&header),sizeof(Header));
				cout << "Header: " << header.toString() << endl;
				string tocompare(isbn);
				while (true){
					Libro tempo;
					long int ofset = archivo.tellp();
					archivo.read(reinterpret_cast<char*>(&tempo),sizeof(Libro));
					if(archivo.eof()|| tocompare.compare(tempo.getIsbn()) == 0){
						tocompare[0]='*';
						tempo.setIsbn(const_cast<char*>(tocompare.c_str()));
						if (header.getAl() != -1)
						{
							/* code */
							string longint = std::to_string(header.getAl());
							tempo.setEditorial(const_cast<char*>(longint.c_str()));
						}

						archivo.seekg(0,ios::beg);
						//Header header;
						archivo.read(reinterpret_cast<char*>(&header),sizeof(Header));
						header.Decrease();
						header.setAl(ofset);
						archivo.seekg(0,ios::beg);
						archivo.write((char*)&header,sizeof(Header));
						archivo.seekp(ofset, ios::beg);
						archivo.write((char*)&tempo,sizeof(Libro));
						break;
					}
				}
				archivo.close();
			}else if (option == 4)//buscar
			{
				/* code */
				char isbn[14];
				cout << "Ingrese isbn: " << endl;
				cin.getline(isbn,14);
			}else if (option == 5)//defragmentar
			{
				/* code */
			}else if (option == 6)//leer
			{
				/* code */
				fstream archivo("libro.bin",ios::in | ios::binary);
				cout << "**********Read debugging*******" << endl;
				Header header;
				archivo.read(reinterpret_cast<char*>(&header),sizeof(Header));
				cout << "Header: " << header.toString() << endl;
				while (true){
					Libro temp;
					archivo.read(reinterpret_cast<char*>(&temp),sizeof(Libro));
					if(archivo.eof()){
						break;
					}
					cout << "Libro: " << temp.toString() << endl;
				}
				archivo.close();
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
			}else if (option == 6)//leer
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
	"4. buscar" << endl <<"5. defragmentar" << endl << "6. leer" << endl;
	int respuesta = 0;
	cin >> respuesta;
	cin.ignore();
	return respuesta;
}

bool exists_test (const std::string& name) {
	if (FILE *file = fopen(name.c_str(), "r")) {
		fclose(file);
		cout << "soy true" << endl;
		return true;
	} else {
		cout << "soy false" << endl;
		return false;
	}   
}
