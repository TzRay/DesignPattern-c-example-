#include "operator.h"
class Operationfs
{
private:
    Operation* oper = nullptr;
public:
    Operationfs(char type, double num1, double num2)
    {
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
            oper = new OperationPow;//³Ë·½
            break;
        }
        oper->setA(num1);
        oper->setB(num2);
    }
    double GetResult(){
        return oper->GetResult();
    }
};