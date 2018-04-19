// Copyright [2018] <Copyright Owner>
#pragma once
#include "DecoratorFactory.h"
int main() {
    Person wyz("吴彦祖"),*dec=&wyz,*dec2=NULL;
    DecoratorFactory df;
    char type=NULL;
    while (1) {
        std::cin >> type;
        if (type == '0')
            break;
        dec=df.CreateDecorator(type, dec);
    }
    std::cout << "\n第一种装扮:";
    dec->Show();
}