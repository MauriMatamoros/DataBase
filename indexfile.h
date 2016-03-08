#pragma once 
#include <iostream>
#include "nodo.h"
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

class Index_File{
 protected:
 	char* fname;
 	vector<Nodo>* list_l;
 	vector<Nodo>* list_e;
 public:
	Index_File();
	void Add(Nodo node);
	int Find(long long int key);
	void Reindex();
	void Order();
};