// Copyright [2018] <Copyright Owner>
#pragma once
#include "ConcreteDecorator.h"
class DecoratorFactory{
 public:
     Finery* CreateDecorator(char type,Person* fp) {
         Finery* f = NULL;
         switch (type)
         {
            case 't':
                f = new Tshirts();
                f->Decorate(fp);
                break;
            case 'j':
                f = new Jeans();
                f->Decorate(fp);
                break;
         }
         return f;
     }
};
