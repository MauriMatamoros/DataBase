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

int main(int argc, char *argv[]){
	
	if (menu() == 1)
	{
		if (menu2() == 1)
		{
			
		}else if (menu2() == 2)
		{
			
		}else if (menu2() == 3)
		{
			
		}else if (menu2() == 4)
		{
			
		}else{

		}
	}else{
		if (menu2() == 1)
		{
			
		}else if (menu2() == 2)
		{
			
		}else if (menu2() == 3)
		{
			
		}else if (menu2() == 4)
		{
			
		}else{
			
		}

	}
}
int menu(){
	cout << "1. libros" << endl
	<< "2. editoriales" << endl;
	int respuesta = 0;
	cin >> respuesta;
	return respuesta;
}

int menu2(){
	cout << "1. agregar" << endl
	<< "2. modificar" << endl << 
	"3. eliminar" << endl <<
	"4. buscar" << endl <<"5. defragmentar" << endl;
	int respuesta = 0;
	cin >> respuesta;
	return respuesta;
}