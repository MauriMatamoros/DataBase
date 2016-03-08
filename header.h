#pragma once 
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

class Header{
 protected:
 	int size;
 	bool dirty;
	int al;
 public:
	Header();
	int getSize()const;
	int getAl()const;
	void Size();
	void Clean();
	void setAl(int position);
	string toString();
	string PrintAl();
};