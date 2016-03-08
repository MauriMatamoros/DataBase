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

Nodo::Nodo(const char* key, int rrn){
	string retval(key);
	long int a=stoll(retval);
	this->key=a;
	this->rrn=rrn;
}
long long int Nodo::getKey(){
	return this->key;
}
int Nodo::getRrn(){
	return this->rrn;
}
void Nodo::setKey(char* key){
	string llave(key);
	this->key=stoll(llave);
}
void Nodo::setRrn(int rrn){
	this->rrn=rrn;
}
string Nodo::toString(){
	stringstream ss;
	ss << "Key: " << key << " RRN: " << this->rrn;
	return ss.str();
}
