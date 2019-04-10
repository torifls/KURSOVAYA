#pragma once
#include "BaseBuilder.h"

// ������ - �������� ������ ���������������  ������
class Nissan : public BaseBuilder {
public:
	Nissan();
	void SetModel();
	void SetHeatingSeats();

	Car GetAndSave(); 
	bool GetInFile(ifstream &in);
	void Print();
	void Read();
	void PrintDifference();

	~Nissan();
};

