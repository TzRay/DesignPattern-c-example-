// Copyright [2018] <Copyright Owner>
#pragma once
#include "CashContext.h"
#include <iostream>
int main() {
    char type;
    double money;
    std::cout << "Plz enter the number.\n";
    std::cin >> money;
    std::cout << "Plz enter the type of sale.\n";
    std::cin >> type;
    CashContext cc = CashContext(type);
    std::cout << "You should pay " << cc.GetResult(money) << std::endl;
    system("pause");
}
