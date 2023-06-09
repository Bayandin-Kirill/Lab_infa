#include <iostream> 
#include <set> 
#include <cstdlib> 
#include <Windows.h>
#include "LinkedList.h"
using namespace std;

MultiSet<double>MS;
const char menu[] = " 1 - создать контейнер множество дубликатами\n"
" 2 - вывести контейнер множество дубликатами\n"
" 3 - посчитать среднее арифметическое и добавить его в конец контейнера множество дубликатами\n"
" 4 - удалить элементы из заданного диапазона по ключам\n"
" 5 - добавить ко всем элементам сумму минимального и максимального значений\n"
" 0 - выход из программы\n";
//основная функция 
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try
	{
		multiset<double> ms;		//контейнер множество дубликатами
		int n = 0;	//размер контейнера множество дубликатами
		for (;;)
		{
			cout << menu;
			int cmd;	//команда
			cout << "\nВведите команду: ";
			cin >> cmd;
			switch (cmd)
			{
			case 1:	//создать новый контейнер множество дубликатами
				ms.clear();
				cout << "\nВведите размер контейнера множество дубликатами: ";
				cin >> n;
				MS.make_multiset(n);
				break;
			case 2:	//вывести контейнер множество дубликатами
				if (n > 0)
					MS.print_multiset();
				else
					cout << "\nСейчас список пуст";
				break;
			case 3:	//посчитать среднее арифметическое и добавить его в конец контейнера множество дубликатами
				MS.arithmetic_mean();
				break;
			case 4:	//удалить элементы из заданного диапазона по ключам
				MS.delete_elem();
				break;
			case 5:	//добавить ко всем элементам сумму минимального и максимального значений
				MS.sum_min_max();
				break;
			case 0:	//выход из программы
				cout << "\nСпасибо что выбрали данную программу!";
				return 0;
			default: //неправильно выбранная команда
				cout << "\nНеправильная команда, попробуйте другую";
			}
			cout << endl;
			/*system("pause");
			system("cls");*/
		}
	}
	catch (double)		//блок обработки ошибок
	{
		cout << "Ошибка!";
	}
	return 0;
}
