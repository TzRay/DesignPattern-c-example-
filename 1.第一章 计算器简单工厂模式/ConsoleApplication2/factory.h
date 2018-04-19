#include <iostream>  
#include <cstdlib>  

using namespace std;

//�����Ʒ��  
class Operation
{
protected:
	double numberA;
	double numberB;

public:
	double getA()
	{
		return numberA;
	}
	double getB()
	{
		return numberB;
	}
	void setA(double number)
	{
		numberA = number;
	}
	void setB(double number)
	{
		numberB = number;
	}

	virtual double GetResult()
	{
		double result = 0;
		return result;
	}
};

//���������־����Ʒ��  
class OperationAdd :public Operation
{
public:
	virtual double GetResult()
	{
		double result = 0;
		result = numberA + numberB;
		return result;
	}
};

class OperationSub :public Operation
{
public:
	virtual double GetResult()
	{
		double result = 0;
		result = numberA - numberB;
		return result;
	}
};

class OperationMul :public Operation
{
public:
	virtual double GetResult()
	{
		double result = 0;
		result = numberA*numberB;
		return result;
	}
};

class OperationDiv :public Operation
{
public:
	virtual double GetResult()
	{
		double result = 0;
		if (numberB != 0)
			result = numberA / numberB;
		return result;
	}
};

class OperationPow :public Operation //�˷�
{
public:
	virtual double GetResult()
	{
		double result = 0;
		if (numberB != 0 | numberA != 0)
			result = numberA / numberA;
		for (int i = 0; i < numberB; i++)
			result *= numberA;
		return result;
	}
};
//������     
class OperationFactory
{
public:
	Operation* createOperation(char type)
	{
		Operation* oper = NULL;
		switch (type)
		{
		case '+':
			oper = new OperationAdd;
			break;
		case '-':
			oper = new OperationSub;
			break;
		case '*':
			oper = new OperationMul;
			break;
		case '/':
			oper = new OperationDiv;
			break;
		case '^':
			oper = new OperationPow;//�˷�
			break;
		}
		return oper;
	}
};
