#include <iostream>

using namespace std;

int GetTen()
{
	return 10; // 10 반환
}

int IntSum(int n1, int n2)
{
	return n1 + n2;
}

int main()
{
	int ten = GetTen(); // ten = 10; , 깊이가 1 생겼다

	int result = IntSum(4, 7); // 4 + 7, 괄호 안에 빈칸 불가능. 무조건 3개 받아야함
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
