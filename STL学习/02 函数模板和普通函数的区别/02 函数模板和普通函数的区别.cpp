#include<iostream>
using namespace std;



//函数模板和普通函数的区别
/*
1.函数模板不允许自动类型转换，严格类型匹配
2.普通函数能够自动进行类型转化
*/
//调用规则
//函数模板可以像普通函数那样被重载
//函数调用会优先调用普通函数
//如果模板函数可以产生一个更好的匹配，那么可以选择模板
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