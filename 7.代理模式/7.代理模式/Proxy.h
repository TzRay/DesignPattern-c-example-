#pragma once
#include <iostream>
#include <string>

//SchoolGirl类
class SchoolGirl
{
private:
	std::string name;
public:
	void setName(std::string n) {
		name = n;
	}
	std::string getName() {
		return name;
	}
};

//C++通过纯虚函数实现接口类
class IGiveGift
{
public:
	virtual void GiveDolls() = 0;
	virtual void GiveFlowers() = 0;
	virtual void GiveChocolate() = 0;
};

//追求者类，即真实主题类，即代理所代表的真实实体
class Pursuit :public IGiveGift
{
private:
	SchoolGirl* mm;
public:
	Pursuit(SchoolGirl *mm) {
		this->mm = mm;
	}
	void GiveDolls() {
		std::cout << mm->getName() << " 洋娃娃\n";
	}
	void GiveFlowers() {
		std::cout << mm->getName() << " 花\n";
	}
	void GiveChocolate() {
		std::cout << mm->getName() << " 巧克力\n";
	}
};

//代理类，提供了与真实主题类相同的接口，代理即可借此访问与代替实体
class Proxy :IGiveGift
{
protected:
	IGiveGift *gg;
public:
	Proxy(SchoolGirl* mm=nullptr) {
		gg = new Pursuit(mm);
	}
	void GiveDolls() {
		gg->GiveDolls();
	}
	void GiveFlowers() {
		gg->GiveFlowers();
	}
	void GiveChocolate() {
		gg->GiveChocolate();
	}
};
