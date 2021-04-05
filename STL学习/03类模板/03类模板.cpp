#include<iostream>
using namespace std;


template<class T>
class Person
{
public:
	Person(T id,T age)
	{
		this->m_id = id;
		this->m_age = age;
	}
	void Show()
	{
		cout << m_id << " " << m_age << " " << endl;
	}
public:
	T m_age;
	T m_id;
};


void test01()
{
	//函数模板在调用的时候可与i自动类型推导
	//类模板必须显式指定类型
	
	Person<int> a(01, 18) ;
	a.Show();
}

void main()
{
	test01();
}