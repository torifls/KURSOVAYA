#pragma once
#include "BaseBuilder.h"

// ������ - �������� ������ ���������������  ������
class Toyota : public BaseBuilder {
public:
	Toyota();
	void SetModel();
	void SetAKPP();

	bool GetInFile(ifstream &in);
	void Print();
	void Read();
	void PrintDifference();

	Car GetAndSave(); 
	~Toyota();
};

