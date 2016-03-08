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
 	Nodo(char* key, int rnn);
	long long int getKey();
	int getRrn();
	void setKey(char* key);
	void setRrn(int rrn);
	string toString();
};