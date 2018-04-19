#pragma once
#include "Department.h"
#include "User.h"

//定义一个访问表对象的工厂接口 
class IFactory
{
public:
	virtual IUser* CreateUser() = 0;
	virtual IDepartment* CreateDepartment() = 0;
};

//实例化sql user和department 
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

//具体工厂2：AccessFactory  
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