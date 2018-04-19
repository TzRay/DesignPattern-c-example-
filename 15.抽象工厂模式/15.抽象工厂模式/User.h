#pragma once
#include <iostream>
using namespace std;

//���ݿ���User 
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

//IUser�ӿ�,���ڿͻ��˷��ʣ������������ݿ�����
class IUser {
public:
	virtual void Insert(User user) = 0;
	virtual User* GetUser(int id) = 0;
};

//����Access User�ľ��巽��  
class AccessUser :public IUser
{
public:
	void Insert(User user)
	{
		cout << "��Access�и�User�������һ����¼" << endl;
	}
	User* GetUser(int id)
	{
		cout << "��Access�и���ID�õ�User���һ����¼" << endl;
		return NULL;
	}
};

//����SQL Server User�ľ��巽��  
class SqlserverUser :public IUser
{
public:
	void Insert(User user)
	{
		cout << "��SQL Server�и�User�������һ����¼" << endl;
	}
	User* GetUser(int id)
	{
		cout << "��SQL Server�и���ID�õ�User���һ����¼" << endl;
		return NULL;
	}
};