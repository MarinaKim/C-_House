/*5.House: Адрес, Этаж, Количество комнат, Площадь.
Создать массив объектов. Вывести:
a) список квартир, имеющих заданное число комнат;
b) список квартир, имеющих заданное число комнат, и расположенных на этаже, который находится в заданном промежутке;
c) список квартир, имеющих площадь, превосходящую заданную.
*/
#include <iostream>
#include<string>
#include<ctime>
#include<fstream> // библиотека работы с файлами
#include"House.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	ifstream in_file("House.txt");
	
	string street;
	int floor, room_number, area, reg_no, houseNum;

	House *h;
	h = new House[10];
	int i = 0;
	if (!in_file) {
		cerr << "file open erros" << endl;
	}
	else
	{
		while (!in_file.eof()) {
			in_file >> reg_no >> street >> houseNum >> floor >> room_number >> area;
			House H(reg_no, street, houseNum, floor, room_number, area);
			h[i++] = H;
		}
	}

	for (int k = 0; k < 10; k++) {
		cout << h[k].getReg_no() <<"\t"<< h[k].getStreet()<< "\t" 
			<< h[k].getHouseNum() << "\t" << h[k].getFloor() << "\t"
			<< h[k].getRoomNum() << "\t" << h[k].getArea() << endl;}

	int l;
	cout <<"Enter the item: ";
	cin >> l;

	switch (l) {

	case 1: {
		
	}break;
	}

	system("pause");
	return 0;
}