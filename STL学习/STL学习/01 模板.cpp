#include<iostream>
using namespace std;



//ģ�弼�� ���Ͳ�����
//��д������Ժ�������
//�������������ģ�庯��


template<class T> //T����������
void Mywap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//templateֻ�Ժ�����ŵ�һ������������


//���ʹ��
void test01()
{
	int a = 10;
	int b = 20;
	//1.�����������㴫���ֵ�����������Զ��Ƶ�
	Mywap(a, b);//
	cout << a << " " << b<<" " << endl;

	//2����ʾָ������
	Mywap<int>(a, b);
}

void main()
{
	test01();
}


