#include <iostream>

using namespace std;

int num_sum(int num1, int num2)
{
	return num1 + num2;
}

int num_sub(int num1, int num2)
{
	return abs(num1 - num2);
}

int num_mul(int num1, int num2)
{
	return num1 * num2;
}

int num_div(float num1, float num2)
{
	return num1 / num2;
}

int main()
{
		int num1, num2;

		cin >> num1 >> num2;

		cout << "sum : " << num_sum(num1, num2) << endl;
		cout << "sub : " << num_sub(num1, num2) << endl;
		cout << "mul : " << num_mul(num1, num2) << endl;
		cout << "div : " << num_div(num1, num2) << endl;

		return 0;
}