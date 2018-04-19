#pragma once
#include <iostream>
using namespace std;

//���ݿ���Department  
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

//IDepartment�ӿڣ����ڿͻ��˵ķ��ʣ������������ݿ�����
class IDepartment
{
public:
	virtual void Insert(Department Department) = 0;
	virtual Department* GetDepartment(int id) = 0;
};

//����Access Department�ľ��巽��  
class AccessDepartment :public IDepartment
{
public:
	void Insert(Department Department)
	{
		cout << "��Access�и�Department��������һ����¼" << endl;
	}
	Department* GetDepartment(int id)
	{
		cout << "��Access�и���ID�õ�Department��һ����¼" << endl;
		return NULL;
	}
};

//����SQL Server Department�ľ��巽�� 
class SqlserverDepartment :public IDepartment
{
public:
	void Insert(Department Department)
	{
		cout << "��SQL Server�и�Department��������һ����¼" << endl;
	}
	Department* GetDepartment(int id)
	{
		cout << "��SQL Server�и���ID�õ�Department��һ����¼" << endl;
		return NULL;
	}
};
