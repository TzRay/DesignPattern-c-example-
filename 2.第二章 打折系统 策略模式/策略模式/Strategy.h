#ifndef STRATEGY_H  
#define STRATEGY_H  

#include <string>  
#include <math.h>  

//父类抽象类  
class CashSuper
{
public:
	virtual double acceptCash(double money) = 0;
};

//子类：正常付费类型  
class CashNormal :public CashSuper
{
public:
	double acceptCash(double money)
	{
		return money;
	}
};

//子类：返现类型  
class CashReturn :public CashSuper
{
private:
	double moneyCondition;
	double moneyReturn;
public:
	CashReturn(double moneyCondition, double moneyReturn)
	{
		this->moneyCondition = moneyCondition;
		this->moneyReturn = moneyReturn;
	}
	double acceptCash(double money)
	{
		double result = money;
		if (money>moneyCondition)
			result = money - floor(money / moneyCondition)*moneyReturn;
		return result;
	}
};

//子类：打折扣类型  
class CashRebate :public CashSuper
{
private:
	double moneyRebate;
public:
	CashRebate(double moneyRebate)
	{
		this->moneyRebate = moneyRebate;
	}
	double acceptCash(double money)
	{
		return money*moneyRebate;
	}
};

#endif STRATEGY_H  