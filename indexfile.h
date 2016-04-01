#pragma once 
#include "nodo.h"
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

class Index_File{
 protected:
 	char* fname;
 	vector<Nodo>* list;
 	//vector<Nodo>* list_e;
 public:
	Index_File(const char* fname);
	~Index_File();
	void add(Nodo nodo);
	void remove(const char* key);
	long int find(const char* key);
	void reindex(const char* fname);
  	void order();
};

bool compare(Nodo leftnode, Nodo rightnode);