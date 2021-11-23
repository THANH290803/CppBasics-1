#include <iostream>

class Base {

private:
    int m_private{};

protected:
    int m_protected;


public:
    int m_public{};


public: 
    void info() {
        std::cout << "base" << '\n';
    }

    void infor() {

        Base::info();
        std::cout << "Derived" << '\n';       
    }
};

class Derived : public Base {

public:
    Derived() {
        m_public = 1;
        m_protected = 1;
       // m_private = 1; // cannot 
    }
};


int main()
{
    std::cout << "Hello World!\n";

    Base base;
    base.m_public = 1;
   // base.m_protected = 1; // cannot
   // base.m_private = 1; // cannot
    base.info();

    Derived derived;
    derived.info();
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
