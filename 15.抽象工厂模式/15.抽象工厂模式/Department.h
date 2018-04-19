#pragma once
#include <iostream>
using namespace std;

//数据库表项：Department  
class Department
{
private:
	int id;
	string name;
public:
	int getID()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
	void setID(int ID)
	{
		this->id = ID;
	}
	void setName(string NAME)
	{
		this->name = NAME;
	}
};

//IDepartment接口，用于客户端的访问，解除与具体数据库的耦合
class IDepartment
{
public:
	virtual void Insert(Department Department) = 0;
	virtual Department* GetDepartment(int id) = 0;
};

//访问Access Department的具体方法  
class AccessDepartment :public IDepartment
{
public:
	void Insert(Department Department)
	{
		cout << "在Access中给Department表增加了一条记录" << endl;
	}
	Department* GetDepartment(int id)
	{
		cout << "在Access中根据ID得到Department表一条记录" << endl;
		return NULL;
	}
};

//访问SQL Server Department的具体方法 
class SqlserverDepartment :public IDepartment
{
public:
	void Insert(Department Department)
	{
		cout << "在SQL Server中给Department表增加了一条记录" << endl;
	}
	Department* GetDepartment(int id)
	{
		cout << "在SQL Server中根据ID得到Department表一条记录" << endl;
		return NULL;
	}
};
