#include "Proxy.h"

int main() {
	SchoolGirl *jiaojiao = new SchoolGirl;
	jiaojiao->setName("���");
	Proxy daili(jiaojiao);
	daili.GiveDolls();
	daili.GiveFlowers();
	daili.GiveChocolate();
	delete jiaojiao;
	return 0;
}