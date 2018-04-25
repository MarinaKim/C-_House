#include "Bus.h"

bus::bus(string surname, string inits, int numBus, int numRoute, string marka, int yy, int mileage) {
	this->surname = surname;
	this->inits = inits;
	this->numBus = numBus;
	this->numRoute = numRoute;
	this->marka = marka;
	this->yy = yy;
	this->mileage = mileage;
}

	void bus::setBus(string surname, string inits, int numBus, int numRoute, string marka, int yy, int mileage) {
	this->surname = surname;
	this->inits = inits;
	this->numBus = numBus;
	this->numRoute = numRoute;
	this->marka = marka;
	this->yy = yy;
	this->mileage = mileage;
	}