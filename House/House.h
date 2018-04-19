#pragma once
#include<string>
using namespace std;
class House {
private:
	int reg_no;
	class address {
	private:
		string street;
		int flat_number;
	public:
		address() {
			street = "";
			flat_number = 0;
		}
		address(string street, int flat_number) {
			this->street = street;
			this->flat_number = flat_number;
		}
		//accessors
		string getStreet() { return street; }
		int getFlatNumber(){return flat_number;	}

		//mutators
		void setStreet(string street) {this->street == street;	}
		void setFlatNumber(int flat_number) { this->flat_number == flat_number; }
	}house_add;
	int floor;
	int room_number;
	double area;

public:
	House() :house_add() {
		reg_no = 0; floor = 0;room_number = 0;area = 0;	}
	House(int reg_no, string street, int floor, int room_number, double area) :house_add(street, room_number)
	{
		
		this->reg_no = reg_no;
		this->floor = floor;
		this->room_number = room_number;
		this->area = area;}

public:
	//accessors
	int getReg_no() { return reg_no; }
	int getFloor() { return floor; }
	int getRoomNum() { return room_number; }
	double getArea() { return area; }
	//mutators
	void setReg_no(int reg_no) {this->reg_no = reg_no;	}
	void setFloor(int floor) { this->floor = floor; }
	void setRoomNum(int room_number) { this->room_number = room_number; }
	void setArea(double area) { this->area = area; }	
};