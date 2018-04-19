#include "factory.h"

//¿Í»§¶Ë  
int main()
{
	double num1,num2;
	char o1;
	Operation* oper = NULL;
	OperationFactory of;
	cout << "Plz enter your frist number.\n";
	cin >> num1;
	cout << "Plz enter your operation.\n";
	cin >> o1;
	cout << "Plz enter your second number.\n";
	cin >> num2;
	oper = of.createOperation(o1);
	oper->setA(num1);
	oper->setB(num2);
	cout <<"The result is "<< oper->GetResult() <<"."<< endl;
	if (oper != NULL)
	{
		delete oper;
		oper = NULL;
	}
	system("pause");
}