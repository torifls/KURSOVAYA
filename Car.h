#pragma once
#include<fstream>
#include<iostream>
#include<string>

using namespace std;

// ������
class Car {
public:
	string color = ""; // ����
	string engineType = ""; // ��� ���������
	double engineVolume = 0; // ����� ���������
	string dimention = ""; // ��������
	int year = 0; // ��� ������������
	int doorCount = 0; // ���������� ������
	string model = ""; // ������
	string mark = ""; // ����� ���
	double VolumeTrunk = 0; // ����� ���������

	bool TrunkRoof = false; // ����������� ���������� �������� �� �����(������ ��� ���-�)
	bool heatingMirrors = false; // ����������� ��������� ������ (KIA)
	bool heatingSeats = false; // ����������� ��������� �������(Nissan)
	bool AKPP = false; // ��������� ����

	Car();
	~Car();
};

