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
	//����ģ���ڵ��õ�ʱ�����i�Զ������Ƶ�
	//��ģ�������ʽָ������
	
	Person<int> a(01, 18) ;
	a.Show();
}

void main()
{
	test01();
}