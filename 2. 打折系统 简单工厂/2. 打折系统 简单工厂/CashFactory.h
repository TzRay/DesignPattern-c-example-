#pragma once
#include "sale.h"
#include <string>
using namespace std;
class CashFactory{
public:
	CashSuper* createCashAccept(char type){
		CashSuper* cs = NULL;
		switch (type)
		{
		case 'n'://normal
			cs = new CashNormal;
			break;
		case 'b':
			cs = new CashRebate(0.8);//rebate
			break;
		case 'r':
			cs = new CashReturn(300, 100);//return
			break;
		}
		return cs;
	}
};