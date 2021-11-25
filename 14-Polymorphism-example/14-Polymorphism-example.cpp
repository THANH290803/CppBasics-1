#include <iostream>
#include <string>

using namespace std;

// Base class: Animal,.../speak(),....

// sub class: Cat, Dog

// dynamic array[] // (vertor) 

class Animal {
protected: 
    string m_name;
   
public:
    Animal(string name)
        : m_name{ name }
    {
        
    }

    string getName() {
        return m_name;
    }
    
    virtual string speak() {
        return "???";
    }

    // pure vỉtual function // abtract
   // vitual string speak() = 0; 
};

class Cat : public Animal {
public:
    Cat(string name)
        : Animal{ name }
    {

    }
    
    virtual string speak() {
        return "meo meo";
    }
};

class Dog : public Animal {
public:
    Dog(string name)
        : Animal{ name }
    {

    }

    virtual string speak() {
        return "gau gau";
    }
};

class Horse : public Animal {
public:
    Horse(string name)
        : Animal{ name }
    {

    }

    virtual string speak() {
        return "hi hi";
    }
};


int main()
{
    //Cat cat{ "Cat 1 " };
    //Dog dog{ "Dog 1 " };

    //cout << cat.getName() << "say " << cat.speak() << '\n';
    //cout << dog.getName() << "say " << dog.speak() << '\n';
    /*
    Cat  cat1{ "Cat 1" };
    Cat  cat2{ "Cat 2" };
    Cat  cat3{ "Cat 3" };

    Dog dog1{ "Dog 1" };
    Dog dog2{ "Dog 2" };
    Dog dog3{ "Dog 3" };

    Horse horse1{ "Horse 1" };
    Horse horse2{ "Horse 2" };
    Horse horse3{ "Horse 3" };

    Animal* animals[]{ &cat1, &dog3, &dog1, &cat3, &dog2, &cat2, &horse1, &horse3, &horse2 };

    for (auto* animal : animals) {
        cout << animal->getName() << " say " << animal->speak() << '\n';
    }
    */

    //Animal animal{ "animal" };
    //cout << animal.getName() << " say " << animal.speak() << '\n';

    Cat cat{ "cat" };
    cout << cat.getName() << " say " << cat.speak() << '\n';



}

 
/*
- Quan ly cac con vat nuoi: meo, cho
- Danh sach
*/

/*
- B1: Base class
- B2: sub classes
- array[BaseClass*]
*/