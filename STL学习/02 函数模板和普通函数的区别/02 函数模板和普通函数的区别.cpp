#include<iostream>
using namespace std;



//����ģ�����ͨ����������
/*
1.����ģ�岻�����Զ�����ת�����ϸ�����ƥ��
2.��ͨ�����ܹ��Զ���������ת��
*/
//���ù���
//����ģ���������ͨ��������������
//�������û����ȵ�����ͨ����
//���ģ�庯�����Բ���һ�����õ�ƥ�䣬��ô����ѡ��ģ��
//
template<class T>
int MyAdd(T a, T b)
{
	return a + b;
}

int MyAdd(int  a, char  b)
{
	return a + b;
}

void test01()
{
	int a = 1;
	int b = 2;
	char c = 'a';

	MyAdd(a, b);
	MyAdd(a, c);
	MyAdd(c, a);
}


void main()
{
	test01();
}