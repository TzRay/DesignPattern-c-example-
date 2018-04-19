#include "Proxy.h"

int main() {
	SchoolGirl *jiaojiao = new SchoolGirl;
	jiaojiao->setName("¿ÓΩøΩø");
	Proxy daili(jiaojiao);
	daili.GiveDolls();
	daili.GiveFlowers();
	daili.GiveChocolate();
	delete jiaojiao;
	return 0;
}