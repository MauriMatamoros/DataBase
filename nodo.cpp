#include "nodo.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::stringstream;
using std::stoll;
using namespace std;

Nodo::Nodo(char* key, int rrn){
	setKey(key);
	setRrn(rrn);
}
Nodo::Nodo(){
}

string Nodo::getKey(){
	return this->key;
}
int Nodo::getRrn(){
	return this->rrn;
}
void Nodo::setKey(char* key){
	strcpy(this->key,key);
}
void Nodo::setRrn(int rrn){
	this->rrn=rrn;
}
string Nodo::toString(){
	stringstream ss;
	ss << "Key: " << key << " RRN: " << this->rrn;
	return ss.str();
}
