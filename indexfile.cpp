#include "editorial.h"
#include "libro.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
#include <algorithm>

using std::vector;
using std::string;
using std::ifstream;
using namespace std;


Index_File::Index_File(const char* fname){
	list = new vector<Nodo>;

	ifstream index(fname,ios::in|ios::binary);
	if(index.fail()){
		index.close();
		ifstream datos(fname, ios::in | ios::binary);
		if(datos.good()){
			datos.seekg(sizeof(Header));

			while(!datos.eof()){
				Libro libro;
				datos.read(reinterpret_cast<char*>(&libro),sizeof(Libro));
				if(!libro.getIsbn().c_str()[0] == '*'){
					Nodo nodo(const_cast<char *>(libro.getIsbn().c_str()),datos.tellg());
					list->push_back(nodo);
				}
			}
			order();
		}
		datos.close();

		ofstream index("indice.bin",ios::out|ios::binary);
		for (int i = 0; i < list->size(); ++i)	{
			Nodo temp = list->at(i);
			index.write((char*)&temp,sizeof(Nodo));
		}
		index.flush();
		index.close();
	}
	if(index.good()){
		while(!index.eof()){
			Nodo nodo;
			index.read(reinterpret_cast<char*>(&nodo),sizeof(Nodo));
			list->push_back(nodo);
		}
	}
}
Index_File::~Index_File(){
	delete list;
}

void Index_File::add(Nodo nodo){
	list->push_back(nodo);
	order();
}

void Index_File::remove(const char* key){
	string look(key);

	for (int i = 0; i < list->size(); ++i)	{
		if(look == list->at(i).getKey()){
			list->erase(list->begin() + i);
			break;
		}
	}
}
long int Index_File::find(const char* key){
	string look(key);

	for (int i = 0; i < list->size(); ++i)	{
		if(look == list->at(i).getKey()){
			return list->at(i).getRrn();
		}
	}
	return -1;
}

void Index_File::reindex(const char* fname){
	list = new vector<Nodo>;

	ifstream datos(fname, ios::in | ios::binary);
	if(datos.good()){
		datos.seekg(sizeof(Header));

		while(!datos.eof()){
			Libro libro;
			datos.read(reinterpret_cast<char*>(&libro),sizeof(Libro));
			if(!libro.getIsbn().c_str()[0] == '*'){
				Nodo nodo(const_cast<char *>(libro.getIsbn().c_str()),datos.tellg());
				list->push_back(nodo);
			}
		}
		order();
	}
	datos.close();

	ofstream index("indice.bin",ios::out|ios::binary);
	for (int i = 0; i < list->size(); ++i)	{
		Nodo temp = list->at(i);
		index.write((char*)&temp,sizeof(Nodo));
	}
	index.flush();
	index.close();

}

void Index_File::order(){
	sort(list->begin(), list->end(), compare);
}

bool compare(Nodo leftnode, Nodo rightnode){
	if(stoll(leftnode.getKey()) < stoll(rightnode.getKey()))
		return true;
	return false;
}