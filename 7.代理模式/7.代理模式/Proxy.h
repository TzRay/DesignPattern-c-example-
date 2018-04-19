#pragma once
#include <iostream>
#include <string>

//SchoolGirl��
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

//C++ͨ�����麯��ʵ�ֽӿ���
class IGiveGift
{
public:
	virtual void GiveDolls() = 0;
	virtual void GiveFlowers() = 0;
	virtual void GiveChocolate() = 0;
};

//׷�����࣬����ʵ�����࣬���������������ʵʵ��
class Pursuit :public IGiveGift
{
private:
	SchoolGirl* mm;
public:
	Pursuit(SchoolGirl *mm) {
		this->mm = mm;
	}
	void GiveDolls() {
		std::cout << mm->getName() << " ������\n";
	}
	void GiveFlowers() {
		std::cout << mm->getName() << " ��\n";
	}
	void GiveChocolate() {
		std::cout << mm->getName() << " �ɿ���\n";
	}
};

//�����࣬�ṩ������ʵ��������ͬ�Ľӿڣ������ɽ�˷��������ʵ��
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
