//Найти жильца с наибольшей задолжностью, и вывести информацию о нем.

#include <iostream>
#include <string>

using namespace std;

struct PublicUtilities {
	int numberApartament;
	int numberEntrance;
	string surname;
	float debt;

	void printStruct() {
		cout << this->numberApartament << " "<< this->numberEntrance << " " << this->surname << " " << this->debt;
	}
};

int main() {
	const int n = 7;
	PublicUtilities sUser[n] = {
		{10,1,"Ivanov",150.23},
		{11,2,"Malgin",151.23},
		{12,3,"Kuznetsov",152.23},
		{13,4,"Gromov",152.23},
		{14,4,"Novikov",153.23},
		{15,3,"Malenkih",149.23},
		{16,1,"Kurochkin",148.23}
		};

	PublicUtilities* pChoice = &sUser[0];
	for (int i = 1; i < n; i++) {
		if (pChoice->debt < sUser[i].debt) {
			pChoice = &sUser[i];
		}
		else if (pChoice->debt == sUser[i].debt) {
			if (pChoice->numberEntrance < sUser[i].numberEntrance)
				pChoice = &sUser[i];
		}
	}
	pChoice->printStruct();	
}