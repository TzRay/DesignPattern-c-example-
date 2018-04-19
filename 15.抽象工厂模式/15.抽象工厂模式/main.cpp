#pragma once
#include "Factory.h"

int  main()
{
	User user;
	Department department;

	//ConcreteFactory1  
	IFactory* factory = NULL;
	factory = new SqlserverFactory;

	//ProductA1  
	IUser* iu = NULL;
	iu = factory->CreateUser();
	iu->Insert(user);
	iu->GetUser(1);

	//ProductB1  
	IDepartment* id = NULL;
	id = factory->CreateDepartment();
	id->Insert(department);
	id->GetDepartment(1);

	if (factory != NULL)
	{
		delete factory;
		factory = NULL;
	}
	if (iu != NULL)
	{
		delete iu;
		iu = NULL;
	}
	if (id != NULL)
	{
		delete id;
		id = NULL;
	}

	system("pause");
}