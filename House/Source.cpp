/*5.House: Адрес, Этаж, Количество комнат, Площадь.
Создать массив объектов. Вывести:
a) список квартир, имеющих заданное число комнат;
b) список квартир, имеющих заданное число комнат, и расположенных на этаже, который находится в заданном промежутке;
c) список квартир, имеющих площадь, превосходящую заданную.
*/
// библиотека работы с файлами

#include"House.h"

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
	int count;
	cout <<"Enter the item: ";
	cin >> l;

	switch (l) {

	case 1: {
		/*system("cls");*/
		cout << "-------------------------------------------------------------------------------" << endl;

		cout << "Enter a count of rooms:";
		cin >> count;

		for (int i = 0; i < 10; i++) {
			if (h[i].getRoomNum() == count) {
				cout << h[i].getReg_no() << "\t" << h[i].getStreet() << "\t"
					<< h[i].getHouseNum() << "\t" << h[i].getFloor() << "\t"
					<< h[i].getRoomNum() << "\t" << h[i].getArea() << endl;
			}}		
	}break;
	case 2: {
		/*system("cls");*/
		cout << "-------------------------------------------------------------------------------" << endl;

		int start, end;
		cout << "Enter a count of rooms:";
		cin >> count;
		cout << "Enter start of floor:";
		cin >> start;
		cout << "Enter end of floor:";
		cin >> end;
		for (int i = 0; i < 10; i++) {
			if (h[i].getRoomNum() == count&&h[i].getFloor()>=start&&h[i].getFloor()<=end) {
				cout << h[i].getReg_no() << "\t" << h[i].getStreet() << "\t"
					<< h[i].getHouseNum() << "\t" << h[i].getFloor() << "\t"
					<< h[i].getRoomNum() << "\t" << h[i].getArea() << endl;
			}
		}
	}break;

	case 3: {
		/*system("cls");*/
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "Enter an area:";
		cin >> count;

		for (int i = 0; i < 10; i++) {
			if (h[i].getArea() > count) {
				
				cout << h[i].getReg_no() << "\t" << h[i].getStreet() << "\t"
					<< h[i].getHouseNum() << "\t" << h[i].getFloor() << "\t"
					<< h[i].getRoomNum() << "\t" << h[i].getArea() << endl;
			}
			
		}
	}break;


	}

	system("pause");
	return 0;
}