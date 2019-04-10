#include "stdafx.h"
#include "Nissan.h"


Nissan::Nissan()
{
}

// ������ ������
void Nissan::SetModel() {
	car.model = "Nissan";
}

// ������ ��������� ������� ���������
void Nissan::SetHeatingSeats() {
	car.heatingSeats = true;
}

// ���������� �� �����
bool Nissan::GetInFile(ifstream &in) {
	car.model = "Nissan";
	
	if (!(in >> car.color))
		return false;

	if (!(in >> car.engineType))
		return false;

	if (!(in >> car.engineVolume))
		return false;

	if (!(in >> car.dimention))
		return false;

	if (!(in >> car.year))
		return false;

	if (!(in >> car.doorCount))
		return false;

	if (!(in >> car.mark))
		return false;

	if (!(in >> car.VolumeTrunk))
		return false;

	if (!(in >> car.TrunkRoof))
		return false;

	if (!(in >> car.heatingMirrors))
		return false;

	if (!(in >> car.heatingSeats))
		return false;

	if (!(in >> car.AKPP))
		return false;

	return true;
}

// ����� 
void Nissan::Print() {
	cout << endl;
	PrintModel();
	PrintColor();
	PrintEngineType();
	PrintEngineVolume();
	PrintDimention();
	PrintYear();
	PrintDoorCount();
	PrintMark();
	PrintVolumeTrunk();
	PrintDifference();
	cout << endl;
}

// ������ � ����������
void Nissan::Read() {
	string color, dimention, mark, engineType;
	int year, doorCount;
	double engineVolume, VolumeTrunk;

	cout << "������� ����: ";
	cin >> color;

	SetColor(color);

	cout << "������� ��� ���������: ";
	cin >> engineType;
	SetEngineType(engineType);

	cout << "������� ����� ���������: ";
	cin >> engineVolume;
	SetEngineVolume(engineVolume);

	cout << "������� ��������: ";
	cin >> dimention;
	SetDimention(dimention);

	cout << "������� ��� �������: ";
	cin >> year;
	SetYear(year);

	cout << "������� ���������� ������: ";
	cin >> doorCount;
	SetDoorCount(doorCount);

	cout << "������� ����� ���: ";
	cin >> mark;
	SetMark(mark);

	cout << "������� ����� ���������: ";
	cin >> VolumeTrunk;
	SetVolumeTrunk(VolumeTrunk);

	SetModel();
	SetHeatingSeats();
}

// ��������� ������ �����������
void Nissan::PrintDifference() {
	cout << "�����������: ����������� ��������� ��������� �������" << endl;
}

// ���������� � ���� � ����� �� �����
Car Nissan::GetAndSave() {
	Print();
	ofstream out("nissan.txt", ios::app);

	out << car.color << " ";
	out << car.engineType << " ";
	out << car.engineVolume << " ";
	out << car.dimention << " ";
	out << car.year << " ";
	out << car.doorCount << " ";
	out << car.mark << " ";
	out << car.VolumeTrunk << " ";
	out << (car.TrunkRoof ? "1" : "0") << " ";
	out << (car.heatingMirrors ? "1" : "0") << " ";
	out << (car.heatingSeats ? "1" : "0") << " ";
	out << (car.AKPP ? "1" : "0") << endl;

	out.close();

	return car;
}

Nissan::~Nissan()
{
}
