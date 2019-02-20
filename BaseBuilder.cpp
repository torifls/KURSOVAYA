#include "stdafx.h"
#include "BaseBuilder.h"


BaseBuilder::BaseBuilder()
{
}

BaseBuilder::~BaseBuilder()
{
}

void BaseBuilder::SetColor(string color) {
	car.color = color;
}

void BaseBuilder::SetEngineType(string engineType) {
	car.engineType = engineType;
}

void BaseBuilder::SetEngineVolume(double engineVolume) {
	car.engineVolume = engineVolume;
}

void BaseBuilder::SetDimention(string dimention) {
	car.dimention = dimention;
}

void BaseBuilder::SetYear(int year) {
	car.year = year;
}

void BaseBuilder::SetDoorCount(int doorCount) {
	car.doorCount = doorCount;
}

void BaseBuilder::SetMark(string mark) {
	car.mark = mark;
}

void BaseBuilder::SetVolumeTrunk(double volumeTrunk) {
	car.VolumeTrunk = volumeTrunk;
}

void BaseBuilder::PrintModel() {
	cout << "������ " << car.model << endl;
}

void BaseBuilder::PrintColor() {
	cout << "����: " << car.color << endl;
}

void BaseBuilder::PrintEngineType() {
	cout << "��� ���������: " << car.engineType << endl;
}

void BaseBuilder::PrintEngineVolume() {
	cout << "����� ���������: " << car.engineVolume << endl;
}

void BaseBuilder::PrintDimention() {
	cout << "��������: " << car.dimention << endl;
}

void BaseBuilder::PrintYear() {
	cout << "��� ������������: " << car.year << endl;
}

void BaseBuilder::PrintDoorCount() {
	cout << "���������� ������: " << car.doorCount << endl;
}

void BaseBuilder::PrintMark() {
	cout << "����� ���: " << car.mark << endl;
}

void BaseBuilder::PrintVolumeTrunk() {
	cout << "����� ���������: " << car.VolumeTrunk << endl;
}
