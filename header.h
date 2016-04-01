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
	long int al;
 public:
	Header();
	int getSize()const;
	int getAl()const;
	void Size();
	void Decrease();
	void Clean();
	void setAl(long int position);
	string toString();
	string PrintAl();
};