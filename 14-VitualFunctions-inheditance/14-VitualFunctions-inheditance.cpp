#include <iostream>
#include <string>

using namespace std;

class Base {
protected:
    int m_value{};

public:
    Base(int value)
        : m_value{ value }
    {

    }

    int getValue() {
        return m_value;
    }

    virtual string getName() {
        return "Base";
    }
};

class Derived : public Base {
public:
    Derived(int value)
        : Base{ value }
    {

    }

    virtual string getName() {
        return "Derived";
    }

    int getValueDouble() {
        return 2 * m_value;
    }
};

// more example
class A {
public:
    virtual string getName() {
        return "A";
    }
};

class B : public A {
public:
    virtual string getName() {
        return "B";
    }
};

class C : public B {
public:
    virtual string getName() {
        return "C";
    }
};

class D : public C {
public:
    virtual string getName() {
        return "D";
    }
};
int main()
{
    // 1. set Derived poiters and references to Derived object
   // Derived derived{ 10 };
   // cout << "Derived is: " << derived.getName() << " and has value: " << derived.getValue() << '\n';

  //  Derived& rDerived{ derived };
  //  cout << "rDerived is " << rDerived.getName() << "and has value: " << rDerived.getValue() << '\n';
  //  Derived* pDerived{ &derived };
  //  cout << "pDerived is " << pDerived->getName() << "and has value: " << pDerived->getValue() << '\n';
    
    // 2. set a Base poiters and references to a Derived object
    /*
    Derived derived{ 10 };
    Base& rBase{ derived };
    Base* pBase{ &derived };

    cout << "Derived is: " << derived.getName() << " and value: " << derived.getValue() << '\n';
    cout << "rDerived is: " << rBase.getName() << " and value: " << rBase.getValue() << '\n';
    cout << "pDerived is: " << pBase->getName() << " and value: " << pBase->getValue() << '\n';

    //Derived* t = dynamic_cast<Derived*>(pBase);
    // cout << t->getValueDouble();
    // rBase.getValueDouble(); // cannot
   // pBase->getValueDouble();// cannot
    cout << dynamic_cast<Derived*>(pBase)->getValueDouble();
   */

    C c;
    A* pBase{ &c };
    cout << "rBase is: " << pBase->getName() << '\n';


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
