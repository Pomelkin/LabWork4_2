#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	ifstream FileIn ("File.txt");
	vector <int> vec;
	cout << FileIn.is_open();
	while (!FileIn.eof())
	{
		int num;
		FileIn >> num;
		vec.push_back(num);
	}
	
	for (auto i = vec.begin(); i < vec.end(); i++) 
		cout << *i << " ";
	cout << endl;
	auto i = vec.begin();
	bool Flag = 0;
	while (Flag != 1)
	{
		Flag = 1;
		for (i = vec.begin(); i < vec.end(); i++)
			if (*i < 0 && *(i-1) != 0)
			{
				vec.insert(i, 0);
				Flag = 0;
				break;
			}
	}
	for (auto i = vec.begin(); i < vec.end(); i++)
		cout << *i << " ";
	cout << endl;
	FileIn.close();
}