#include"House.h"

House::House() {
	reg_no = 0;
	street = "";
	houseNum = 0;
	floor = 0;
	room_number = 0;
	area = 0;
}

House::House(int reg_no, string street, int houseNum, int floor, int room_number, double area)/* :house_add(street, house_number)*/
{
	this->reg_no = reg_no;
	this->street = street;
	this->houseNum = houseNum;
	this->floor = floor;
	this->room_number = room_number;
	this->area = area;
}

void House::setHouses(const int &reg_no, const string &street, const int &houseNum, const int &floor, const int &room_number, const double &area) {
	this->reg_no = reg_no;
	this->street = street;
	this->houseNum = houseNum;
	this->floor = floor;
	this->room_number = room_number;
	this->area = area;
}