//
//  main.cpp
//  Revision
//
//  Created by Aiman Khan on 28/06/2019.
//  Copyright © 2019 Aiman Khan. All rights reserved.
//

#include <iostream>
using namespace std;
int global_var = 42;
// function to change pointer to pointer value
void changePointerValue(int** ptr_ptr)
{
    *ptr_ptr = &global_var;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";

    //how to make reference to a variable?
    int x = 3;
    int &ref = x;

    //references to const variables must be constant.
    const int y = 0;
    const int &yref = y;

    //int &uyref = y; //not okay, because variable is constant

    //however this is allowed
    int z = 0;
    const int &zref = z; //this is possible
    z = 1;
    //zref = 9; //error

    const int a = 9;
    //int *a_ptr = &a; //not allowed
    const int *a_ptr_ = &a; //allowed - a non-const pointer pointing to const var,
    //we can't do this *ptr = 6;
    //*ptr  = 4;

    int b = 0;
    const int *b_ptr = &b;

    b = 1;
    //*b_ptr = 2;
    //b_ptr = &x;
    int* const ptr = &b;

    *ptr = 5;


    //Enums
    //arrays
    //difference between char and other types of arrays
    //cout

    int array[3] = {1,2,3};
    //array = {4,5,6};
    //cout <<array << endl;

    char c_array[] = "Hello";
    //c_array = "Aiman";
    //cout << c_array;
    //pointers

    //array[i] and *(array+i) is the same


    //types of memory allocation - static, automatic, dynamic
    //why do we need dynamic allocation? dynamic arrays? array of pointers

    //void pointers and how to derefence them?

    //int var = 4;
    //void *_ptr = &var;

    //cout << *static_cast<int*>(_ptr) << endl; //*_ptr
    //cout << *(int*)_ptr << endl; //*_ptr
    //reference to pointers

    int var = 23;
    int* pointer_to_var = &var;
    cout << "Passing a pointer to a pointer to function " << endl;
    cout << "Before :" << *pointer_to_var << endl; // display 23
    changePointerValue(&pointer_to_var);
    cout << "After :" << *pointer_to_var << endl; // display what? 23 or 42

    return 0;
}
