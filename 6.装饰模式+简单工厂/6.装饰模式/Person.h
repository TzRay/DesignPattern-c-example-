// Copyright [2018] <Copyright Owner>
#pragma once
#include <string>
#include <iostream>
using std::string;
class Person{
 private:
     string name;
 public:
     Person() {}
     explicit Person(string n) {
         name = n;
     }
     virtual void Show() {
         std::cout << "×°°çµÄ" << name << std::endl;
     }
};
