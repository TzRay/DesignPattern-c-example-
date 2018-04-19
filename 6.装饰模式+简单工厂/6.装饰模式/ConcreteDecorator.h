// Copyright [2018] <Copyright Owner>
#pragma once
#include <iostream>
#include "Decorator.h"
class Tshirts :public Finery{
 public:
     virtual void Show() {
         std::cout << "Tshirts ";
         Finery::Show();
     }
};
class Jeans :public Finery{
 public:
     virtual void Show() {
         std::cout << "Jeans ";
         Finery::Show();
     }
};
