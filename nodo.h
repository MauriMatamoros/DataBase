#pragma once 
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

class Nodo{
 protected:
 	char key[14];
 	int rrn;
 public:
 	Nodo(char* key, int rnn);
 	Nodo();
	string getKey();
	int getRrn();
	void setKey(char* key);
	void setRrn(int rrn);
	string toString();
};