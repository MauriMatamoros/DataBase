#include "header.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::stringstream;

Header::Header(){
	this->size=0;
	this->al;
}

int Header::getSize()const{
	return this->size;
}

vector<int> Header::getAl()const{
	return this->al;
}

void Header::Size(){
	this->size = this->size + 1;
}
void Header::setAl(int position){
	this->al = al;
}

string Header::toString(){
	stringstream ss;
	ss << "Size: " << this->size;
	return ss.str();
}

string Header::PrintAl(){
	stringstream ss;
	ss << " ";
	for (int i = 0; i < this->al.size(); ++i)
	{
		ss << al.at(i) << " ";
	}
	return ss.str();
}