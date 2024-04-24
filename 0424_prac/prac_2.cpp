#include <iostream>

//1. city라는 배열 변수를 만들고 5개의 나라 이름을 값으로 지정
//2. 사용자가 list라고 입력하면 나라이름을 전부 출력
//3. 사용자가 나라이름을 입력하면 배열에서 나라이름을 찾아서 인덱스와 나라이름을 출력
//4. 사용자가 그 이외 다른 값을 입력하면 오류 메시지를 출력

using namespace std;

void main()
{
	string input;
	string city[5] = { "korea", "canada", "japan", "usa", "china"};

	cin >> input;
	cout << "\n";

	bool b_ok = false;

	int array_size = sizeof(city) / sizeof(city[0]);

		for (int i = 0; i < array_size; i++)
		{

			if (input == "list")
			{
				cout << city[i] << endl;
				b_ok = true;
			}
			
			else if (input == city[i])
			{
				cout << "인덱스 : " << i << ", 나라이름 : " << city[i] << endl;		
				b_ok = true;
			}		

		}

		if (b_ok == false)
		{
			cout << "다시 입력해 주세요." << endl;
		}

}
