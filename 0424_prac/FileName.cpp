#include <iostream>

using namespace std;

int GetTen()
{
	return 10; // 10 ��ȯ
}

int IntSum(int n1, int n2)
{
	return n1 + n2;
}

int main()
{
	int ten = GetTen(); // ten = 10; , ���̰� 1 �����

	int result = IntSum(4, 7); // 4 + 7, ��ȣ �ȿ� ��ĭ �Ұ���. ������ 3�� �޾ƾ���
}

//void PrintSomething(string message)
//{
//	cout << "message" << endl;
//}
//
//
//int main()
//{
//	int num1, num2;
//
//	cin >> num1 >> num2;
//
//	int result = IntSum(num1, num2);
//
//	PrintSomething("Neuron");
//}
//
//int main()
//{
//	int num1, num2;
//
//	cin >> num1 >> num2;
//
//	cout << IntSum(num1, num2) << endl;
//
//	PrintSomething("Neuron");
//}
