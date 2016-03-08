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


Index_File::Index_File(char* fname){
	/*string name(fname);
	this->list = new std::vector<Nodo>;
	fstream file(fname,ios::in|ios::binary);
	if (file.fail())
	{
		file.close();
		if (name.compare("libros.in"))
		{
			
		}else{

		}
	}
	if(file.good()){
		int bandera = 0;
		while(!file.eof()){
			//file.write();
		}
	}*/
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
void Index_File::Reindex(char* fname){
	//

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
