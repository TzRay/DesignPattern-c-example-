// Copyright [2018] <Copyright Owner>
#pragma once
#include "ConcreteDecorator.h"
int main() {
    Person wyz("������");
    std::cout << "\n��һ��װ��:";
    Tshirts tx;
    Jeans nz;
    tx.Decorate(&wyz);
    nz.Decorate(&tx);
    nz.Show();
}