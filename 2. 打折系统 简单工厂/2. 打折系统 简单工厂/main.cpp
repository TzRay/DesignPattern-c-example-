#pragma once
#include <iostream>
#include "CashFactory.h"
int main(){
	CashFactory cf;
	char type;
	double money;
	cout << "Plz enter the number.\n";
	cin >> money;
	cout << "Plz enter the type of sale.\n";
	cin >> type;
	CashSuper* cs = cf.createCashAccept(type);
	cout << "You should pay " << cs->acceptCash(money) << endl;
	system("pause");
}