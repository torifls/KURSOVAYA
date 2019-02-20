#pragma once
#include "BaseBuilder.h"

// ��� - �������� ������ ���������������  ������
class Kia : public BaseBuilder {
public:
	Kia();
	void SetModel();
	void SetHeatingMirrors();

	bool GetInFile(ifstream &in);
	void Print(); 
	Car GetAndSave();
	void Read();
	void PrintDifference();

	~Kia();
};

