// CarsBuilder.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <vector>
#include <locale.h>
#include <cstdlib>
#include "BaseBuilder.h";

#include "Kia.h";
#include "Nissan.h";
#include "Toyota.h";
#include "VAZ.h";

using namespace std;

// добавление ваза
void CreateVAZ(vector<BaseBuilder*> &cars) {
	VAZ vaz;
	vaz.Read();

	cars.push_back(new VAZ(vaz));
}

// добавление kia
void CreateKia(vector<BaseBuilder*> &cars) {
	Kia kia;
	kia.Read();

	cars.push_back(new Kia(kia));
}

// добавление nissan 
void CreateNissan(vector<BaseBuilder*> &cars) {
	Nissan nissan;
	nissan.Read();

	cars.push_back(new Nissan(nissan));
}

// добавление toyota
void CreateToyota(vector<BaseBuilder*> &cars) {
	Toyota toyota;
	toyota.Read();

	cars.push_back(new Toyota(toyota));
}

// создание машины
void Create(vector<BaseBuilder*> &cars) {
	cout << "Какой автомобиль хотите создать? " << endl;
	cout << "1. ВАЗ" << endl;
	cout << "2. Kia" << endl;
	cout << "3. Nissan" << endl;
	cout << "4. Toyota" << endl;
	int item;

	cin >> item; // считываем пункт меню

	// обрабатываем некорректный ввод
	while (item < 1 || item > 5) {
		cout << "Некорректный пункт. Введите ещё раз: ";
		cin >> item; // считываем пункт меню заново
	}

	// в зависимости от выбранного пункта выполняем действие
	switch (item) {
	case 1:
		CreateVAZ(cars);
		break;

	case 2:
		CreateKia(cars);
		break;

	case 3:
		CreateNissan(cars);
		break;

	case 4:
		CreateToyota(cars);
		break;
	}

	cars[cars.size() - 1]->GetAndSave();
}

// вывод всех машин
void Print(vector<BaseBuilder*> cars) {
	for (size_t i = 0; i < cars.size(); i++) {
		cout << "Текущий номер машины: " << (i + 1);
		cars[i]->Print();
	}
}

void ReadInFile(vector<BaseBuilder*> &cars) {
	int item;

	cout << "Вы хотите считать машины из файла(1) или начать с пустой базой(0)?" << endl;
	cin >> item;

	while (item < 0 || item > 1) {
		cout << "Некорректный пункт. Введите ещё раз: ";
		cin >> item;
	}

	if (item == 0) {
		// очистка всех файлов
		ofstream f("ВАЗ.txt");
		f.close();

		f.open("kia.txt");
		f.close();

		f.open("toyota.txt");
		f.close();

		f.open("nissan.txt");
		f.close(); 
		
		return;
	}
	
	// считывание из всех файлов всех машин
	ifstream f1("ВАЗ.txt");

	if (f1) {
		while (!f1.eof()) {
			VAZ vaz;
			if (vaz.GetInFile(f1))
				cars.push_back(new VAZ(vaz));
		}

		f1.close();
	}

	ifstream f2("kia.txt");

	if (f2) {
		while (!f2.eof()) {
			Kia kia;
			if (kia.GetInFile(f2))
				cars.push_back(new Kia(kia));
		}

		f2.close();
	}

	ifstream f3("toyota.txt");

	if (f3) {
		while (!f3.eof()) {
			Toyota toyota;
			if (toyota.GetInFile(f3))
				cars.push_back(new Toyota(toyota));
		}

		f3.close();
	}

	ifstream f4("nissan.txt");

	if (f4) {
		while (!f4.eof()) {
			Nissan nissan;
			if (nissan.GetInFile(f4))
				cars.push_back(new Nissan(nissan));
		}

		f4.close();
	}

	if (cars.size() > 0) {
		cout << "Считанные автомобили: " << endl << endl;
		Print(cars);
	}
	else
		cout << "База была пуста";

	system("pause"); // задерживаем экран
}

int main() {
	setlocale(LC_ALL, "Russian"); // задаём русский текст
	system("chcp 1251"); // настраиваем кодировку консоли
	vector<BaseBuilder*> cars;

	ReadInFile(cars);

	int item; // выбираемый пункт меню

	do {
		system("cls"); // очищаем экран
					   // выводим меню
		cout << "Что хотите сделать?" << endl;
		cout << "1. Создать автомобиль" << endl;
		cout << "2. Вывести автомобиль" << endl;
		cout << "3. Выход" << endl;
		cout << ">";
		cin >> item; // считываем пункт меню

					 // обрабатываем некорректный ввод
		while (item < 1 || item > 3) {
			cout << "Некорректный пункт. Введите ещё раз: ";
			cin >> item; // считываем пункт меню заново
		}

		// в зависимости от выбранного пункта выполняем действие
		switch (item) {
		case 1:
			Create(cars);
			break;

		case 2:
			Print(cars);
			break;
		}

		if (item != 3) {
			system("pause"); // задерживаем экран
		}
	} while (item != 3); // повторяем, пока не решим выйти

	return 0;
}