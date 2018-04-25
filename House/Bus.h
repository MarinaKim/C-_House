/*2. Bus: ������� � �������� ��������, ����� ��������, ����� ��������, �����, ��� ������ ������������, ������.
������� ������ ��������. �������:
a) ������ ��������� ��� ��������� ������ ��������;
b) ������ ���������, ������� ��������������� ������ 10 ���;
c) ������ ���������, ������ � ������� ������ 10000 ��.
*/

#pragma once
#include"Library.h"

class bus {
private:
	string surname;
	string inits;
	int numBus;
	int numRoute;
	string marka;
	int yy;
	int mileage;
public:
	bus() = default;
	bus(string surname, string inits, int numBus, int numRoute, string marka, int yy, int mileage);

	void setSurname(const string &surname) { this->surname = surname; }
	void setInits(const string &inits) { this->inits = inits; }
	void setNumBus(const int &numBus) { this->numBus = numBus; }
	void setNumRoute(const int &numRoute) { this->numRoute = numRoute; }
	void setMarka(const string &marka) { this->marka = marka; }
	void setYy(const int &yy) { this->yy = yy; }
	void setMileage(const int &mileage) { this->mileage =mileage; }
	void setBus(string surname, string inits, int numBus, int numRoute, string marka, int yy, int mileage);

	string getSurname() { return surname; }
	string getInits() { return inits; }
	int getNumBus() { return numBus; }
	int getNumRoute() { return numRoute; }
	string getMarka() { return marka; }
	int getYy() { return yy; }
	int getMileage() { return mileage; }
};