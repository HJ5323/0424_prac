#include <iostream>

//1. city��� �迭 ������ ����� 5���� ���� �̸��� ������ ����
//2. ����ڰ� list��� �Է��ϸ� �����̸��� ���� ���
//3. ����ڰ� �����̸��� �Է��ϸ� �迭���� �����̸��� ã�Ƽ� �ε����� �����̸��� ���
//4. ����ڰ� �� �̿� �ٸ� ���� �Է��ϸ� ���� �޽����� ���

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
				cout << "�ε��� : " << i << ", �����̸� : " << city[i] << endl;		
				b_ok = true;
			}		

		}

		if (b_ok == false)
		{
			cout << "�ٽ� �Է��� �ּ���." << endl;
		}

}
