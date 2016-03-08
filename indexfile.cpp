#include "indexfile.h"
#include "nodo.h"
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
	fstream file ("libros.in", ios::binary|ios::in|ios::out|ios::trunc);
	fstream file2 ("editoriales.in", ios::binary|ios::in|ios::out|ios::trunc);
	if(!file.is_open() && !file2.is_open()){

	}else{
		Reindex();
	}
}
void Index_File::Add(Nodo node){
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
	fstream librosindex ("libros.in", ios::binary|ios::in|ios::out|ios::trunc);
	fstream libros ("libros.bin", ios::binary|ios::in|ios::out|ios::trunc);
	fstream editorialesindex ("editoriales.in", ios::binary|ios::in|ios::out|ios::trunc);
	fstream editoriales ("editoriales.bin", ios::binary|ios::in|ios::out|ios::trunc);
	while(!libros.eof()){
		Nodo temp;
		

	}
	while(!editoriales.eof()){

	}

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
