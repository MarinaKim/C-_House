#include <iostream>
#include<string>
#include<ctime>
#include<fstream> // библиотека работы с файлами
#include"House.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	
	int k;
	cout << "Enter tasks number:";
	cin >> k;

	switch (k) {

	case 1: {
		ifstream in;
		ofstream out;
		out.open("write.txt");
		in.open("House.txt");
		string house_addStreet;
		int floor, room_number, area,reg_no, house_addNum;
		
		House *h;
		h = new House[10];
		
		int i = 0;
		if (!in) {
			cerr << "File open error" << endl;
		}
		else
		{
			while (!in.eof()) {
				in >> reg_no>>house_addStreet>>house_addNum >>floor >> room_number >> area;
				House H(reg_no,house_addStreet, house_addNum, floor, room_number, area);
				h[i++] = H;
			}}

		for (int k = 0; k < 10; k++) {
			cout << h[k].getReg_no()<<h[k].getStreet()<<h[k].getHouseNum()<<h[k].getFloor()<<h[k].getRoomNum()<<h[k].getArea()<< endl;
		}
	}break;
	}

	system("pause");
	return 0;
}