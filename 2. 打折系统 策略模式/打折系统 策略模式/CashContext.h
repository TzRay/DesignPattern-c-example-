#pragma once
#include "sale.h"
class CashContext{
private:
	CashSuper* cs;
public:
	CashContext(CashSuper* csuper){
		cs = csuper;
	}
	double GetResult(double money)
	{
		return cs->acceptCash(money);
	}
};