#include "indexfile.h"
#include "nodo.h"
#include "header.h"
#include "editorial.h"
#include "libro.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>

using std::vector;
using std::string;
using std::ifstream;
using namespace std;


Index_File::Index_File(){
	list_l = new vector<Nodo>;
	list_e = new vector<Nodo>;
	fstream file ("libros.in", ios::binary|ios::in|ios::out|ios::trunc);
	fstream file2 ("editoriales.in", ios::binary|ios::in|ios::out|ios::trunc);
	if(!file.fail() && !file2.fail()){
		while(!file.eof()){
			Nodo temp;
			file.read(reinterpret_cast<char*>(&temp),sizeof(Nodo));
			list_l->push_back(temp);
		}
		while(!file2.eof()){
			Nodo temp;
			file2.read(reinterpret_cast<char*>(&temp),sizeof(Nodo));
			list_l->push_back(temp);
		}
	}
	else{
		Reindex();
	}
	file.flush();
	file.close();
	file2.flush();
	file2.close();
}
void Index_File::Add(Nodo node){
	if(){

	}else{

	}
	this->list->push_back(node);
	Order();
}

int Index_File::Find(long long int key){
	for (int i = 0; i < this->list->size(); ++i)
	{
		if (this->list->at(i).getKey() == key )
		{
			return this->list->at(i).getRrn();
		}
	}
}
void Index_File::Reindex(){
	list_l = new vector<Nodo>;
	list_e = new vector<Nodo>;
	fstream file ("libros.bin", ios::binary|ios::in|ios::out|ios::trunc);
	fstream file2 ("editoriales.bin", ios::binary|ios::in|ios::out|ios::trunc);
	if(!file.fail() && !file2.fail()){
		file.seekg(sizeof(Header));
		file2.seekg(sizeof(Header));

		int contbook = 0;
		int contedit = 0;

		while(!file.eof()){
			Libro ltemp;
			file.read(reinterpret_cast<char*>(&ltemp),sizeof(Libro));
			if(ltemp.getIsbn().c_str()[0] != '*'){
				Nodo nodo(ltemp.getIsbn().c_str(),contbook);
				list_l->push_back(nodo);
				contbook++;
			}
		}
		while(!file2.eof()){
			Editorial etemp;
			file2.read(reinterpret_cast<char*>(&etemp),sizeof(Editorial));
			if(etemp.getId().c_str()[0] != '*'){
				Nodo nodo(etemp.getId().c_str(),contedit);
				list_e->push_back(nodo);
				contedit++;
			}	
		}
	}
	file.flush();
	file.close();
	file2.flush();
	file2.close();
}

void Index_File::Order(){
	vector<Nodo>* newlist = new vector<Nodo>;
	Nodo temp = this->list->at(0);
	int bandera = 0;
	while(this->list->size() != bandera ){
		for (int i = 0; i < this->list->size(); ++i)
		{
			if (temp.getKey() < this->list->at(i).getKey() )
			{
				temp = this->list->at(i);
				bandera++;
			}
		}
		newlist->push_back(temp);
	}	
	this->list = newlist;
}
