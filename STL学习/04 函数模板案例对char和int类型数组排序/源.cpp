#include<iostream>
using namespace std;

//��char��int������������

//��ӡ
//����ģ��
template<class T>
void PrintArray(T *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//-----------------------��ð������---------------------
//ð�ݷ�ʽһ��
//����ģ��
template<class T>
void MySort(T *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//�Ӵ�С����
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
	//����
	int arr[] = { 2,6,1,8,9,2 };
	//��ȡ���鳤��
	int len = sizeof(arr) / sizeof(int);
	//����
	int len1 = sizeof(arr) / sizeof(arr[0]);

	cout << "����֮ǰ:" << endl;
	PrintArray(arr, len);

	//����
	MySort(arr, len);
	cout << "����֮��" << endl;
	PrintArray(arr, len);

	char chArr[] = { 'a','c','b','p','t' };
	len = sizeof(chArr) / sizeof(char);

	cout << "---------------------------------" << endl;
	cout << "����֮ǰ:" << endl;
	PrintArray(chArr, len);

	//����
	MySort(chArr, len);
	cout << "����֮��" << endl;
	PrintArray(chArr, len);
	return 0;
}