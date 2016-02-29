#pragma once 
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

class Nodo{
 protected:
 	long long int key;
 	int rrn;
 public:
	long long int getKey();
	int getRrn();
	void setKey();
	void setRrn();
	string toString();
};