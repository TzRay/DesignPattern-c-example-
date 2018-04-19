#pragma once
#include <iostream>
using namespace std;

//数据库表项：User 
class User
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

//IUser接口,用于客户端访问，解除与具体数据库的耦合
class IUser {
public:
	virtual void Insert(User user) = 0;
	virtual User* GetUser(int id) = 0;
};

//访问Access User的具体方法  
class AccessUser :public IUser
{
public:
	void Insert(User user)
	{
		cout << "在Access中给User表添加了一条记录" << endl;
	}
	User* GetUser(int id)
	{
		cout << "在Access中根据ID得到User表的一条记录" << endl;
		return NULL;
	}
};

//访问SQL Server User的具体方法  
class SqlserverUser :public IUser
{
public:
	void Insert(User user)
	{
		cout << "在SQL Server中给User表添加了一条记录" << endl;
	}
	User* GetUser(int id)
	{
		cout << "在SQL Server中根据ID得到User表的一条记录" << endl;
		return NULL;
	}
};