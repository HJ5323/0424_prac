#include <iostream>

using namespace std;

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };

	int array_size = sizeof(intArray) / sizeof(intArray[0]);

	for (int i = 0; i < array_size; i++)
	{
		cout << intArray[i] << endl;
	}

	for (int num : intArray) // 인덱스 0번부터 1씩 증가
	{

	}
}

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };

	int array_size = sizeof(intArray) / sizeof(intArray[0]);

	// for-each : 배열의 모든 요소를 처음부터 끝까지 탐색
	int target_min = 2;
	int target_max = 4;
	int loop_count = 0;

	for (int num : intArray) // 인덱스 0번부터 1씩 증가
	{
		if (loop_count > target_min && loop_count < target_max)
		{
			cout << num << endl;
		}

		loop_count++;
	}

	for (int i = 0; i < array_size; i++)
	{
		cout << intArray[i] << endl;
	}
}