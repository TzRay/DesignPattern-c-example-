#include <iostream>
#include "operatorfs.h"
using namespace std;
int main()
{
    double num1, num2;
    char o1;
    cout << "Plz enter your frist number.\n";
    cin >> num1;
    cout << "Plz enter your operation.\n";
    cin >> o1;
    cout << "Plz enter your second number.\n";
    cin >> num2;
    Operationfs oper = Operationfs(o1, num1, num2);
    cout << "The result is " << oper.GetResult() << "." << endl;
    system("pause");
}