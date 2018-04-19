#pragma once
#include<math.h> 
class CashSuper{
public:
	virtual double acceptCash(double money){ return 1; };
};
class CashNormal :public CashSuper{
	virtual double acceptCash(double money){
		return money;
	}
};
class CashRebate :public CashSuper{
private:
	double moneyRebate;
public:
	CashRebate(double rebate = 1){
		moneyRebate = rebate;
	}
	virtual double acceptCash(double money){
		return money*moneyRebate;
	}
};
class CashReturn :public CashSuper{
private:
	double moneyCondition;
	double moneyReturn;
public:
	CashReturn(double condition = 0, double mreturn = 0){
		moneyCondition = condition;
		moneyReturn = mreturn;
	}
	virtual double acceptCash(double money){
		double result = money;
		if (money >= moneyCondition)
			result = money - floor(money / moneyCondition)*moneyReturn;
		return result;
	}
};