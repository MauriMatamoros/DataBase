#include "nodo.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::vector;
using std::string;

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
