#include <iostream>
using namespace std;

void func1()
{
    //References are not separate variables
    int a = 89;
    int& rf = a;
    int& rf2 = a;
    int& rf3 = rf2;
    rf2 = 14;
    cout << a << endl;
    cout << rf << endl;
    cout << rf2 << endl;
    cout << rf3 << endl;
    cout << "Adresses " << endl;
    cout << &a << endl;
    cout << &rf << endl;
    cout << &rf2 << endl;
    cout << &rf3 << endl;
}

void func2()
{
    //Pointer to Pointers
    int a = 56;
    int *ptr = &a;
    int **ptr2 = &ptr; // (int*)* ptr2
    int ***ptr3 = &ptr2;
    cout << " *ptr3 = " << *ptr3 << endl;
    cout << " ptr2 = " << ptr2 << endl;
    cout << " **ptr3 = " << **ptr3 << endl;
    cout << " *ptr2 = " << *ptr2 << endl;
    cout << " ptr = " << ptr << endl;
    cout << " ***ptr3 = " << ***ptr3 << endl;
    cout << " **ptr2 = " << **ptr2 << endl;
    cout << " *ptr = " << *ptr << endl;
    cout << " a = " << a << endl;
}

int* func3()
{
    //Function Returning pointer or address

    int a = 4;
    int* ptr = &a;
//    cout << ptr << endl;
//    return ptr;
//    return &a;
    //Dynamic
    return new int(6);
}
//Change to show reference of Pointers
void func4(int* &a)
{
    //Function taking a pointer as parameter
    int i = 99;
    cout << "a when function is called " << a << endl;
    a = &i;
    cout << "a when reassigned inside function " << a << endl;
    //Dynamic memory if we want to regain the pointer
    int *ptr = new int;
    *ptr = 100;
    a = ptr;
}
int& func5()
{
    int a = 4;
    return a;
}
int& maximum(int& a, int& b)
{
    return a > b ? a : b;
}
void PrintAddress2D(int a[][4], int rows, int columns)
{
    // a[i][j] => *(*(a+i) + j)
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << "Address:" << (int)&a[i][j];
            cout << "   b[" << i << "][" << j << "] = " << a[i][j] << '\t';
//            cout << "   b[" << i << "][" << j << "] = " << *(*(a + i) + j) << '\t';
        }
        cout << endl;
    }
}
int global_var = 42;
// function to change pointer to pointer value
void changePointerValue(int** ptr_ptr)
{
*ptr_ptr = &global_var;
}
int main()
{
    int var = 23;
    int* pointer_to_var = &var;
    cout << "Passing a pointer to a pointer to function " << endl;
    cout << "Before :" << *pointer_to_var << endl; // display 23
    changePointerValue(&pointer_to_var);
    cout << "After :" << *pointer_to_var << endl; // display what? 23 or 42
    return 0;
}

/*
int main()
{
    //cout << PrintAddress2D << endl;
    //func1();
    //func2();
    // Difference between static and dynamic
//    int a0[3];
//    int* a1 = new int[3];
////    a0 = a1;
//    delete[] a1;

    //Function returning pointer or address
/*
    int* ptr = func3();
    cout << ptr << endl;
    func1();
    cout << *ptr << endl;
    delete ptr;
    ptr = nullptr;
*/
    //Function returning address of dynamic memory
/*
    int *ptr = func3();
    cout << *ptr << endl;
    delete ptr;
*/
    //Function dealing with pointer as parameter
/*
    int a = 34;
    int *ptr = &a;
    cout << "Pointer Before calling function " << ptr << endl;
    func4(ptr);
    cout << "Pointer After calling function " << ptr << endl;
    cout << "VAlue After calling function " << *ptr << endl;
*/
    //Function returning reference
/*
    cout << func5();
    int a = func5();
    cout << a;
*/
    //Maximum Number's reference
/*
    int a = 105;
    int b = 67;
 //   int maximumNumber = maximum(a, b);
   int& maximumNumber = maximum(a, b);
    cout << "a : " << a << " b : " << b << " max : " << maximumNumber << endl;
    b = 45;
    cout << "a : " << a << " b : " << b << " max : " << maximumNumber << endl;
    maximumNumber = 100;
    cout << "a : " << a << " b : " << b << " max : " << maximumNumber << endl;
*/
    //Arrays can be of anything except references
//    int& ab[5];
//    int* a[];
    //Array Of Pointers
/*
    int a = 3, b = 4, c = 5;
    int *ptr = &a, *ptr2 = &b, *ptr3 = &c;
    int* arr[3] = {ptr, ptr2, ptr3};
    cout << " arr[0] " << (int)arr[0] << " *arr[0] " << *arr[0] << endl;
    cout << " arr[1] " << (int)arr[1] << " *arr[1] " << *arr[1] << endl;
    cout << " arr[2] " << (int)arr[2] << " *arr[2] " << *arr[2] << endl;
*/
    // Two Dimensional Array
//    int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//    PrintAddress2D(b, 3, 4);
//    return 0;
//}

