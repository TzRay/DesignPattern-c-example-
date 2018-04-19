#pragma once
#include "CashContext.h"
#include <iostream>
using namespace std;
int main(){
	char type;
	double money;
	cout << "Plz enter the number.\n";
	cin >> money;
	cout << "Plz enter the type of sale.\n";
	cin >> type;
	CashSuper* CS = NULL;
	switch (type){
	case 'n':
		CS = new CashNormal;
		break;
	case 'b':
		CS = new CashRebate(0.8);
		break;
	case 'r':
		CS = new CashReturn(300,100);
		break;
	}
	CashContext cc = CashContext(CS);
	cout << "You should pay " << cc.GetResult(money) << endl;
	system("pause");
}