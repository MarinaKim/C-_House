#pragma once
#include<string>
using namespace std;

/*5.House: Адрес, Этаж, Количество комнат, Площадь. 
Создать массив объектов. Вывести: 
a) список квартир, имеющих заданное число комнат; 
b) список квартир, имеющих заданное число комнат, и расположенных на этаже, который находится в заданном промежутке; 
c) список квартир, имеющих площадь, превосходящую заданную. 
*/
class House {
private:
	int reg_no;
	//class address {
	//private:
	//	string street;
	//	int house_number;
	//public:
	//	address() {
	//		street = "";
	//		house_number = 0;
	//	}
	//	address(string street, int house_number) {
	//		this->street = street;
	//		this->house_number =house_number;
	//	}
	//	//accessors
	//	string getStreet() { return street; }
	//	int getHouseNumber(){return house_number;	}

	//	//mutators
	//	void setStreet(string street) {this->street = street;	}
	//	void setHouseNumber(int house_number) { this->house_number = house_number; }
	//}house_add;
	string street;
	int houseNum;
	int floor;
	int room_number;
	double area;

public:
	House() /*:house_add()*/ {
		reg_no = 0; street = ""; houseNum = 0; floor = 0; room_number = 0; area = 0;	}
	House(int reg_no, string street, int house_number, int floor, int room_number, double area)/* :house_add(street, house_number)*/
	{
		this->street = street;
		this->houseNum = houseNum;
		this->reg_no = reg_no;
		this->floor = floor;
		this->room_number = room_number;
		this->area = area;}
public:
	/*address *add;
	add = new address a;*/
	//accessors
	int getReg_no() { return reg_no; }
	int getFloor() { return floor; }
	int getRoomNum() { return room_number; }
	double getArea() { return area; }
	string getStreet() { return street; }
	int getHouseNum() { return houseNum; }

	//mutators
	void setHouseStr(string street) {this->street = street;}
	void setHouseNum(int houseNum) {this->houseNum = houseNum;}
	void setReg_no(int reg_no) {this->reg_no = reg_no;	}
	void setFloor(int floor) { this->floor = floor; }
	void setRoomNum(int room_number) { this->room_number = room_number; }
	void setArea(double area) { this->area = area; }	
};