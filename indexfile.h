#pragma once 
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

class Index_File{
 protected:
 	vector<string> keys;
 public:
	void Index_File();
	void Add();
	string Find(int posicion);
	void Reindex();
};