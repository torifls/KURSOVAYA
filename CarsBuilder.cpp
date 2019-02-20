#include "stdafx.h";
#include <vector>
#include <locale.h>
#include <cstdlib>

#include "Kia.h";
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

int main() {