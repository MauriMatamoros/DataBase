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
 	vector<int> al;
 public:
	Header(int size);
	int getSize()const;
	vector<int> getAl()const;
	void setSize(int size);
	void setAl(int position);
	string toString();
};