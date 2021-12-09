#include <iostream>
#include <vector>
#include <fstream>
#include "Employee.h"
#include "Programmer.h"
#include "Tester.h"
#include "Manager.h"
#include "Utils.h"

void showMenu() {
	cout << "-------------------Menu------------------------" << '\n';
	cout << "1. Add employee" << '\n';
	cout << "2. Edit employee" << '\n';
	cout << "3. Remove employee" << '\n';
	cout << "4. Sort employee by name" << '\n';
	cout << "5. Show all employees" << '\n';
	cout << "0. Exit" << '\n';
	cout << "-----------------------------------------------" << '\n';
	cout << "Please choose: ";
}

void showAll(vector<Employee*> list) {
	for (auto e : list) {
		e->show();
	}
}

int main()
{
	//Employee* e{ new Employee() };

	//e->input();

	//e->show();

	//Employee* p{ new Programmer() };
	//Employee* t{ new Tester() };
	//Employee* m{ new Manager() };
	/*
	vector<int> numbers{ 1, 2, 3 };
	cout << numbers[0] << '\n';
	cout << numbers.at(1) << '\n';

	numbers.push_back(4);
	cout << numbers.at(3);
	*/
	//vector<Employee*> list{};

	//list.push_back(e);
	//list.push_back(p);
	//list.push_back(t);
	//list.push_back(m);

	//for (int i{ 0 }; i < list.size(); ++i) {
	//	list.at(i)->input();
	//}

	//for (Employee* e : list) {
	//for (auto e : list) {
	//	e->show();
	//}

	vector<Employee*> list{};
	ifstream fileIn{ "input.txt" };

	// doc du lieu tu file
	string line;
	while (getline(fileIn, line)) {

		auto vec = Utils::split(line, ",");

		if (vec.at(0) == "1")
		{
			list.push_back(new Programmer{ stoi(vec.at(1)), vec.at(2) });
		}
		else if (vec.at(0) == "2")
		{
			list.push_back(new Tester{ stoi(vec.at(1)), vec.at(2) });
		}
		else if (vec.at(0) == "3")
		{
			list.push_back(new Manager{ stoi(vec.at(1)), vec.at(2) });
		}
	}
	
		//for (auto e : list) {
		//	e->show();
		//}
	int choose;
	bool exit{ false };

	showMenu();
	while (true)
	{
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Add employee" << '\n';
			break;
		case 2:
			cout << "Edit employee" << '\n';
			break;
		case 3:
			cout << "Remove employee" << '\n';
			break;
		case 4:
			cout << "Sort by name" << '\n';
			break;
		case 5:
			cout << "Show all employees" << '\n';
			showAll(list);
			break;
		case 0:
			cout << "Exit" << '\n';
			exit = true;
			break;
		}
		if (exit) {
			break;
		}
		showMenu();
	}
		
}


/*
Quản lý nhân viên 
- Có đc danh sách nhân viên
- Xem, sửa thông tin của nvien 
- Thêm, xóa nhân viên 
- Sắp xếp tìm kiếm nhân viên (tên, lương)
*/

/*
- Nhân viên: Programming, Tester, Manager, ... => Base class Employee
- List (array) -> vector<Employee *>
- Logics: sort, search, ...

- Giao diện; console, menu
*/
/*
- Add employee:
    + menu: chonj loại nv (pr, t, m)
	+ if...=>new...=> list.push_back()
*/