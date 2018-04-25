#include"File.h"

file::file(int num, string name, int size, int dd, string mm, int yy, int calls) {
	this->num = num;
	this->name = name;
	this->size = size;
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
	this->calls = calls;
}

void file::setFile(int &num, const string &name, const int &size, int dd, string mm, int yy, const int &calls) {
	this->num = num;
	this->name = name;
	this->size = size;
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
	this->calls = calls;
}