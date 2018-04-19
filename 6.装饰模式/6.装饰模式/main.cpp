// Copyright [2018] <Copyright Owner>
#pragma once
#include "ConcreteDecorator.h"
int main() {
    Person wyz("吴彦祖");
    std::cout << "\n第一种装扮:";
    Tshirts tx;
    Jeans nz;
    tx.Decorate(&wyz);
    nz.Decorate(&tx);
    nz.Show();
}