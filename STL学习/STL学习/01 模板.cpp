#include<iostream>
using namespace std;



//模板技术 类型参数化
//编写代码可以忽略类型
//编译起如何区分模板函数


template<class T> //T来代替类型
void Mywap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//template只对后面跟着第一个函数起作用


//如何使用
void test01()
{
	int a = 10;
	int b = 20;
	//1.编译器根据你传入的值，进行类型自动推导
	Mywap(a, b);//
	cout << a << " " << b<<" " << endl;

	//2。显示指定类型
	Mywap<int>(a, b);
}

void main()
{
	test01();
}


