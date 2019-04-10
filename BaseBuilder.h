#pragma once

#include "Car.h"
#include<fstream>
#include<iostream>
#include<string>
#include <vector>

using namespace std;

// �����-���������
class BaseBuilder {
protected:
	Car car; // ������
public:
	BaseBuilder();

	// ����������� ������ ��� ��������������� � ������ ������
	virtual void SetModel() {};
	virtual void SetTrunkRoof() {};
	virtual void SetHeatingMirrors() {};
	virtual void SetHeatingSeats() {};
	virtual void SetAKPP() {};
	
	// ��������� ���� ����������
	void SetColor(string color);
	void SetEngineType(string engineType);
	void SetEngineVolume(double engineVolume);
	void SetDimention(string dimention);
	void SetYear(int yesr);
	void SetDoorCount(int doorCount);
	void SetMark(string mark);
	void SetVolumeTrunk(double volumeTrunk);

	virtual void PrintDifference() = 0; // ������� ������ �����������

	// ������� ������ ����������
	void PrintModel();
	void PrintColor();
	void PrintEngineType();
	void PrintEngineVolume();
	void PrintDimention();
	void PrintYear();
	void PrintDoorCount();
	void PrintMark();
	void PrintVolumeTrunk();

	virtual Car GetAndSave() = 0; // ��������� � ���������� ������
	virtual bool GetInFile(ifstream &in) = 0; // ���������� �� �����
	virtual void Print() = 0; // �����
	virtual void Read() = 0; // ����������
	
	~BaseBuilder();
};

