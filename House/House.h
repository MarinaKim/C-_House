/*5.House: �����, ����, ���������� ������, �������.
������� ������ ��������. �������:
a) ������ �������, ������� �������� ����� ������;
b) ������ �������, ������� �������� ����� ������, � ������������� �� �����, ������� ��������� � �������� ����������;
c) ������ �������, ������� �������, ������������� ��������.
*/
#pragma once
#include"Library.h"

class House {
private:
	int reg_no;
	string street;
	int houseNum;
	int floor;
	int room_number;
	double area;

public:
	House();
	House(int reg_no, string street, int houseNum, int floor, int room_number, double area);/* :house_add(street, house_number)*/
		
	void setReg_no(int reg_no) { this->reg_no = reg_no; }
	void setStreet(string street) {this->street = street;}
	void setHouseNum(int houseNum) {this->houseNum = houseNum;}
	void setFloor(int floor) { this->floor = floor; }
	void setRoomNum(int room_number) { this->room_number = room_number; }
	void setArea(double area) { this->area = area; }	
	void setHouses(const int &reg_no, const string &street, const int &houseNum, const int &floor, const int &room_number, const double &area);

	int getReg_no() { return reg_no; }
	string getStreet() { return street; }
	int getHouseNum() { return houseNum; }
	int getRoomNum() { return room_number; }
	int getFloor() { return floor; }
	double getArea() { return area; }
};