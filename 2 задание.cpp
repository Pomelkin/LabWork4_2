#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <int> vec;
    int n = 0;
    while (n != 7)
    {
        cout << "\n\nВыберите действие (Введите номер операции) :\n";
        cout << "1.Добавить элемент\n";
        cout << "2.Удалить элемент\n";
        cout << "3.Вывести элемент с номером N\n";
        cout << "4.Вывести содержимое вектора\n";
        cout << "5.Вывести количество элементов\n";
        cout << "6.Очистить вектор\n";
        cout << "7.Выход\n";
        cout << "\n";
        cin >> n;
        switch (n)
        {
        case 1:
            system("cls");
            int num;
            cout << "Введите число:\n";
            cin >> num;
            vec.push_back(num);
            cout << "число добавлено!";
            break;
        case 2:
            system("cls");
            vec.pop_back();
            cout << "Элемент удален";
            break;
        case 3:
            system("cls");
            int num1;
            cout << "Ведите число:\n";
            cin >> num1;
            cout<<"Число с номером " << num1 << " : "<<vec[num1] - 1;
            break;
        case 4:
            system("cls");
            cout << "содержимое вектора: \n";
            for (auto i = vec.begin(); i < vec.end(); i++) cout << *i << " ";
            break;
        case 5:
            system("cls");
            if (vec.size() == 0) cout << "Вектор пуст";
            else cout << "Длина вектора: " << vec.size();
            break;
        case 6:
            system("cls");
            vec.clear();
            cout << "Теперь вектор пуст";
            break;
        case 7:
            system("cls");
            cout << "До новых волнующих встреч!\n";
            break;
        }

    }
}


