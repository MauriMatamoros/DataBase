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

Nodo::Nodo(long long int key, int rrn){
	this->key=key;
	this->rrn=rrn;
}
long long int Nodo::getKey(){
	return this->key;
}
int Nodo::getRrn(){
	return this->rrn;
}
void Nodo::setKey(long long int key){
	this->key=key;
}
void Nodo::setRrn(int rrn){
	this->rrn=rrn;
}
string Nodo::toString(){
	stringstream ss;
	ss << "Key: " << this->key << " RRN: " << this->rrn;
	return ss.str();
}
