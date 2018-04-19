// Copyright [2018] <Copyright Owner>
#pragma once
#include "Person.h"
class Finery :public Person{
 protected:
     Person *componet;
 public:
     void Decorate(Person* cmt) {
         componet = cmt;
     }
     virtual void Show() {
         componet->Show();
     }
};
