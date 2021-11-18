// 12-OOP-Destructor-Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class intArr {
private:
    int* m_array{};
    int m_length{};
public:
    // construction
    intArr(int length) {
        m_array = new int[length] {};
        m_length = length;
    }
    
    // destructor
    ~intArr() {
        delete[] m_array;
    }

    // methods
    void setValue(int index, int value) {
        m_array[index] = value;
    }

    int getValue(int index) {
        return m_array[index];
    }

    int getLength() {
        return m_length;
    }
};

int main()
{
    std::cout << "Hello World!\n";

    intArr ar(10); // allocate 10 elements
    for (int count{ 0 }; count < ar.getLength(); ++count) {
        ar.setValue(count, count + 1);
    }
    cout << "value of element 5: " << ar.getValue(5) << '\n';
    // destructor called here 
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
