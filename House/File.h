#pragma once
/*4.File: Имя файла, Размер, Дата создания, Количество обращений.
Создать массив объектов. Вывести:
a) список файлов, упорядоченный в алфавитном порядке;
b) список файлов, размер которых превосходит заданный;
c) список файлов, число обращений к которым превосходит заданное число.
*/
#include "Library.h"
class file {
private:
	int num;
	string name;
	int size;
	int dd;
	string mm;
	int yy;
	/*class dates {
	private:
		int dd;
		int mm;
		int yy;
	public:
		dates() = default;

		void setDd(const int &dd) { this->dd = dd;}
		void setMm(const int &mm) { this->mm = mm; }
		void setYy(const int &yy) { this->yy = yy; }
		void setDate(const int &dd, const int &mm, const int &yy) {
			this->dd = dd;
			this->mm = mm;
			this->yy = yy;}

		int getDd() { return dd; }
		int getMm() { return mm; }
		int getYy() { return yy; }
	}date;*/
	int calls;

public:
	file() = default;
	file(int num, string name, int size, int dd, string mm, int yy, int calls);
	void setNum(int &num) { this->num = num; }
	void setName(const string &name) { this->name = name; }
	void setSize(const int &size) { this->size = size; }
	void setCalls(const int &calls) { this->calls = calls; }
	void setFile(int &num, const string &name, const int &size, int dd, string mm, int yy, const int &calls);
	int getNum() { return num; }
	string getName() { return name; }
	int getSize() { return size; }
	int getDd() { return dd; }
	string getMm() { return mm; }
	int getYy() { return yy; }
	int getCalls() { return calls; }
};
