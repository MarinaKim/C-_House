/*5.House: Адрес, Этаж, Количество комнат, Площадь.
Создать массив объектов. Вывести:
a) список квартир, имеющих заданное число комнат;
b) список квартир, имеющих заданное число комнат, и расположенных на этаже, который находится в заданном промежутке;
c) список квартир, имеющих площадь, превосходящую заданную.
*/
// библиотека работы с файлами

#include"House.h"
#include"File.h"
#include"Bus.h"

int main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Enter the number of task:";
	cin >> n;

	switch (n) {
		//HOUSE
	case 1: {
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
			cout << h[k].getReg_no() << "\t" << h[k].getStreet() << "\t"
				<< h[k].getHouseNum() << "\t" << h[k].getFloor() << "\t"
				<< h[k].getRoomNum() << "\t" << h[k].getArea() << endl;
		}

		int l;
		int count;
		cout << "Enter the item: ";
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
				}
			}
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
				if (h[i].getRoomNum() == count&&h[i].getFloor() >= start&&h[i].getFloor() <= end) {
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
		}}break;
		/*4.File: Имя файла, Размер, Дата создания, Количество обращений. 
Создать массив объектов. Вывести: 
a) список файлов, упорядоченный в алфавитном порядке; 
b) список файлов, размер которых превосходит заданный; 
c) список файлов, число обращений к которым превосходит заданное число. 
*/
	case 2: {
		ifstream in_file("File.txt");

		string name,mm;
		int dd, yy, calls, size,num;

		file *f;
		f = new file[10];
		int i = 0;
		if (!in_file) {
			cerr << "file open erros" << endl;
		}
		else
		{
			while (!in_file.eof()) {
				in_file >> num>>name>> size >> dd>>mm>>yy >> calls ;
				file F(num,name, size, dd,mm,yy, calls);
				f[i++] = F;
			}
		}

		for (int k = 0; k < 10; k++) {
			cout << f[k].getNum()<<f[k].getName() << "\t" << f[k].getSize() << "\t"
				<< f[k].getDd() << "\t" << f[k].getMm() << "\t"
				<< f[k].getYy() << "\t" << f[k].getCalls() << endl;
		}
			int l;
			int count;
			cout << "Enter the item: ";
			cin >> l;

			switch (l) {

			case 1: {
				
			}break;

			case 2: {
				cout << "Enter the size:";
				cin >> count;
				for (int i = 0; i < 10; i++) {
					if (f[i].getSize() > count) {
						cout << f[i].getName() << "\t" << f[i].getSize() << "\t"
							<< f[i].getDd() << "\t" << f[i].getMm() << "\t"
							<< f[i].getYy() << "\t" << f[i].getCalls() << endl;
					}
				}
			}break;

			case 3: {
				cout << "Enter the calls:";
				cin >> count;
				for (int i = 0; i < 10; i++) {
					if (f[i].getCalls() > count) {
						cout << f[i].getName() << "\t" << f[i].getSize() << "\t"
							<< f[i].getDd() << "\t" << f[i].getMm() << "\t"
							<< f[i].getYy() << "\t" << f[i].getCalls() << endl;
					}
				}
			}break;
			}
	}break;

		/*2. Bus: Фамилия и инициалы водителя, Номер автобуса, Номер маршрута, Марка, Год начала эксплуатации, Пробег. 
Создать массив объектов. Вывести: 
a) список автобусов для заданного номера маршрута; 
b) список автобусов, которые эксплуатируются больше 10 лет; 
c) список автобусов, пробег у которых больше 10000 км. 
*/
	case 3: {
		ifstream in_file("Bus.txt");

		string surname, inits,marka;
		int yy, mileage, numBus, numRoute;

		bus *f;
		f = new bus[10];
		int i = 0;
		if (!in_file) {
			cerr << "file open erros" << endl;
		}
		else
		{
			while (!in_file.eof()) {
				in_file >> surname>> inits >> numBus >> numRoute >> marka >> yy >> mileage;
				bus F(surname, inits, numBus, numRoute, marka, yy, mileage);
				f[i++] = F;
			}
		}

		for (int k = 0; k < 10; k++) {
			cout << f[k].getSurname() << f[k].getInits() << "\t" << f[k].getNumBus() << "\t"
				<< f[k].getNumRoute() << "\t" << f[k].getMarka() << "\t"
				<< f[k].getYy() << "\t" << f[k].getMileage() << endl;
		}

		int l;
		int count;
		cout << "Enter the item: ";
		cin >> l;

		switch (l) {

		case 1: {
			cout << "Enter the numRoute:";
			cin >> count;

			for (int k = 0; k < 10; k++)
			{
				if (f[k].getNumRoute() == count) 
				{
					cout << f[k].getSurname() << f[k].getInits() << "\t" << f[k].getNumBus() << "\t"
						<< f[k].getNumRoute() << "\t" << f[k].getMarka() << "\t"
						<< f[k].getYy() << "\t" << f[k].getMileage() << endl;
				}
			}
		}break;

		case 2: {

			for (int k = 0; k < 10; k++) {
				if((2018-f[k].getYy())>10)
				{
					cout << f[k].getSurname() << f[k].getInits() << "\t" << f[k].getNumBus() << "\t"
						<< f[k].getNumRoute() << "\t" << f[k].getMarka() << "\t"
						<< f[k].getYy() << "\t" << f[k].getMileage() << endl;
				}
			}

		}break;

		case 3: {
			for (int k = 0; k < 10; k++) {
				if (f[k].getMileage()>10000)
				{
					cout << f[k].getSurname() << f[k].getInits() << "\t" << f[k].getNumBus() << "\t"
						<< f[k].getNumRoute() << "\t" << f[k].getMarka() << "\t"
						<< f[k].getYy() << "\t" << f[k].getMileage() << endl;
				}
			}
		}break;
		}
	}break;

	}

	system("pause");
	return 0;
}