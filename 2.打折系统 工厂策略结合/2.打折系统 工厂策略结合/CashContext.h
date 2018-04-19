// Copyright [2018] <Copyright Owner>
#pragma once
#include "sale.h"
class CashContext{
 private:
    CashSuper* cs = nullptr;
 public:
     explicit CashContext(char type) {
        switch (type) {
        case 'n':
            cs = new CashNormal;
            break;
        case 'b':
            cs = new CashRebate(0.8);
            break;
        case 'r':
            cs = new CashReturn(300, 100);
            break;
        }
    }
    double GetResult(double money) {
        return cs->acceptCash(money);
    }
};
