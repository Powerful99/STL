#include<iostream>
using namespace std;

//对char和int类型数组排序

//打印
//定义模板
template<class T>
void PrintArray(T *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//-----------------------【冒泡排序】---------------------
//冒泡方式一：
//定义模板
template<class T>
void MySort(T *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//从大到小排序
			if (arr[j] < arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}




int main()
{
	//数组
	int arr[] = { 2,6,1,8,9,2 };
	//获取数组长度
	int len = sizeof(arr) / sizeof(int);
	//或者
	int len1 = sizeof(arr) / sizeof(arr[0]);

	cout << "排序之前:" << endl;
	PrintArray(arr, len);

	//排序
	MySort(arr, len);
	cout << "排序之后：" << endl;
	PrintArray(arr, len);

	char chArr[] = { 'a','c','b','p','t' };
	len = sizeof(chArr) / sizeof(char);

	cout << "---------------------------------" << endl;
	cout << "排序之前:" << endl;
	PrintArray(chArr, len);

	//排序
	MySort(chArr, len);
	cout << "排序之后：" << endl;
	PrintArray(chArr, len);
	return 0;
}