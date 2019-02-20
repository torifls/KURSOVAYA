#include "stdafx.h"
#include "Kia.h"


Kia::Kia()
{
}

// ������ ������
void Kia::SetModel() {
	car.model = "Kia";
}

// ������ ��������� ������� ���������
void Kia::SetHeatingMirrors() {
	car.heatingMirrors = true;
}

// ���������� �� �����
bool Kia::GetInFile(ifstream &in) {
	car.model = "Kia";
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
void Kia::Print() {
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
void Kia::Read() {
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
	SetHeatingMirrors();
}

// ��������� ������ �����������
void Kia::PrintDifference() {
	cout << "�����������: ����������� ��������� ��������� ������ ������� ����" << endl;
}

// ���������� � ���� � ����� �� �����
Car Kia::GetAndSave() {
	Print();
	ofstream out("kia.txt", ios::app);

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

Kia::~Kia()
{
}
