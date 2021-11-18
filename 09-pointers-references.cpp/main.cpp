// 09-pointers-references.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
/*
void printSize(int* array) {
    cout << sizeof(array) << '\n'; // prints size of pointer 
}
void printSize2(int array[]) {
    cout << sizeof(array) << '\n'; // prints size of pointer 
}*/
int main()
{
    std::cout << "Hello World!\n";
    // introduction
    // 1
    //int x{ 5 };
    //cout << x << '\n';

    // address of: &
    //cout << &x << '\n';

    // references operator (indirection operator)
    // cout << *(&x) << '\n';

    // int *iPtr(&x);
    //cout << iPtr << '\n';
    // cout << *iPtr << '\n';

  //double *dPtr{}, d2; // d2 double

  //int* iPtr2;
  // iPtr = &x ;
  // cout << iPtr << '\n';
    // cout << *iPtr << '\n';

    // int* iPtr3; 
    // iPtr3 = 

    // 4 reassign pointer

  //int v1{ 5 };
  //int v2{ 10 };

  //int* ptr{};

    // ptr = &v1;
    // cout << *ptr << '\n';

    // ptr = &v2;
    // cout << *ptr << '\n';

    // 5 Types
   //int iValue{ 5 };
   //double* dValue{ 10.5 };

    // int* iPtr{&iValue};
    // double* dPtr{ &dValue };

    // iPtr = dValue;//error
    // dPtr = iValue;// error 

    // int* ptr{ 5 }; // error

    // 6 address of (&) => return a pointer
    /*
    int x{ 8 };
    cout << typeid(x).name() << '\n';
    cout << typeid(&x).name() << '\n';
    */

    //7 Once assigned, a pointer value can be reassigned to another value 

      // int value1{ 5 };
      // int value2{ 7 };

      // int* ptr{}
      // ptr = &value1;
      // cout << *ptr << '\n';

      // int* ptr{}
      // ptr = &value2;
      // cout << *ptr << '\n';

      // *ptr = 10;
    //cout << *ptr << '\n';

      // cout << value1 << '\n';

      // cout << value2 << '\n';

      // 8
      // ptr ~ &value
      // *ptr ~ value

    //9 size of pointers

      // char* chPtr{};
      // int* iPtr{};

      // cout << sizeof(chPtr) << '\n';
      // cout << sizeof(iPtr) << '\n';

   /**************************************************************************************************************************************************************/

      // pointer and arrays
      // arrays vs pointer

    //int array[5]{ 1, 3, 5, 7, 9 };

   // cout << array << '\n';
   // cout << &array[0] << '\n';

   // cout << *array << '\n';

   // int* ptr{ array };

   // cout << *ptr << '\n';

  // differences between arrays vs pointer
   // cout << sizeof(array) << '\n';
  // cout << sizeof(ptr) << '\n';

     // array decays to pointer 
     // int array[]{ 1, 2, 3, 4, 5, 7, 8 };

     // cout << sizeof(array) << '\n';

     // printSize2(array);
    //  printSize(array);

  /*************************************************************************************************************************/

  /*
  cout << "enter number of intergers: ";
      int length{};
      cin >> length;

      int* array{ new int{length} };
      cout << "created array of length " << length << " elements";

      array[0] = 10;
      */
      // ........
     // delete[] array; 


  /***************************************************************************************************************************************/
// references
/*
int value{ 5 };
int& ref{ value };

cout << ref << '\n';

value = 6;
cout << ref << '\n';

ref = 7;
cout << value << '\n';

cout << &value << '\n';
cout << &ref << '\n';
*/

// 2. references must be initialized 
   // int value{ 7 };
   // int& ref{ value };

// 3. references cannot be re-assigned 
    int value1{ 5 };
    int value2{ 10 };

    int& ref{ value1 };
    cout << ref << '\n';

    ref = value2;
    cout << value1 << '\n';



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
