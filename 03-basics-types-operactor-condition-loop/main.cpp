// 03-basics-types-operactor-condition-loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>

#include<string>

#include<iomanip>


using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    std::string name;
    int age;
    string lớp;

    cout << "enter your name: ";
    //cin >> name 
    std::getline(std::cin, name);
    cout << "Hello my name is: " << name << '\n';

    cout << "enter your age: ";
    cin >> age;
    cout << "I am " << age << " years old" << '\n';

    /*
     Format code: Alt + Shift + F
    */

    // nhập điểm 3 môn 
    float diemToan;
    float diemvan;
    float diemanh;
    float dtb;

    cout << "Nhap diem Toan: ";
    cin >> diemToan;
    cout << "\n";

    cout << "Nhap diem van: ";
    cin >> diemvan;
    cout << "\n";

    cout << "Nhap diem anh: ";
    cin >> diemanh;
    cout << "\n";

    dtb = (diemToan + diemvan + diemanh) / 3;
    printf("\nDTB = %.2f", dtb);
    if (dtb < 4)
    {
        printf("YEU");
    }
    else if (dtb < 6.5) {
        printf("TB");
    }
    else if (dtb < 8.0) {
        printf("KHA");
    }
    else {
        printf("GIOI");
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
