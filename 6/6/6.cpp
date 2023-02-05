#include <iostream>
#include <vector>
#include <fstream>
#include <deque>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream FileIn("File.txt");
	deque <int> deq;
	while (!FileIn.eof())
	{
		int num;
		FileIn >> num;
		deq.push_back(num);
	}

	for (auto i = deq.begin(); i < deq.end(); i++)
		cout << *i << " ";
	cout << endl;

	cout << "Введите K"<<endl;
	int k;
	cin >> k;
	auto i = deq.begin();

	deque <int> deq1 = deq;
	bool Flag = 0;
	while (Flag != 1)
	{
		Flag = 1;
		for (i = deq.begin(); i < deq.end(); i++)
 			if (*i < k)
			{
				deq.erase(i);
				Flag = 0;
				break;
			}
		
	}

	for (auto i = deq.begin(); i < deq.end(); i++)
		cout << *i << " ";
	cout << endl;

	cout << "Введите N\n";
	int n,kol = 0;
	cin >> n;

	for (auto i = deq1.begin(); i < deq1.end(); i++)
		if (*i == n) kol += 1;
	cout << "Кол-во N: " << kol;
	
	FileIn.close();
}