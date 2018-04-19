#pragma once
#include "Department.h"
#include "User.h"

//����һ�����ʱ����Ĺ����ӿ� 
class IFactory
{
public:
	virtual IUser* CreateUser() = 0;
	virtual IDepartment* CreateDepartment() = 0;
};

//ʵ����sql user��department 
class SqlserverFactory :public IFactory
{
public:
	IUser* CreateUser()
	{
		return new SqlserverUser;
	}

	IDepartment* CreateDepartment()
	{
		return new SqlserverDepartment;
	}
};

//���幤��2��AccessFactory  
class AccessFactory :public IFactory
{
public:
	IUser* CreateUser()
	{
		return new AccessUser;
	}

	IDepartment* CreateDepartment()
	{
		return new AccessDepartment;
	}
};