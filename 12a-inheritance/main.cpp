// 12a-inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// base class
class Employee {
protected: 
    int m_id;
    string m_name;
    string email;
    string phone;

public:
    void showINfo() {
        cout << "name: " << m_name << '\n';
    }
};

class Programmer : public Employee {
    string programminglanguage;
    
};

int main()
{
    Programmer pr;
    pr.showINfo();
}

/*
- Quan ly 1 cong ty phan mem: lap trinh vien, tester, nv quan ly, 
- Danh sach cac nhan vien trong cong ty
-Cac tinh nang: in ra toan bo nhan vien ( ten, email, luong ...);
chi in ra lap trinh vien; them nhan vien vao; tim kiem; sap xep;....


*/

/*
- base (parent, super) class: employee
- sub (child, derived) Class: lap trinh vien, tester, manager,...
- objects
- []
*/

