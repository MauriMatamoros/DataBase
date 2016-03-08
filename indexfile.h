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
 	vector<Nodo>* list;
 public:
	Index_File(char* fname);
	void Add(Nodo node);
	int Find(long long int key);
	void Reindex(char* fname);
	void Order();
};