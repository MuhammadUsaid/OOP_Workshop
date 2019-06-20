#include <iostream>
#include <array>
#include <string>
using namespace std;

//void update(int* a; int* b)
//{
//    int temp = *a + *b;
//    *b = *a > *b ? *a - *b : *b - *a;
//    *a = temp;
//}
//void update(int& a; int& b)
//{
//    int temp = a + b;
//    b = a > b ? a - b : b - a;
//    a = temp;
//}
void print(char a[])
{
    cout << a << endl;
}
void foo()
{
    int* ptr = new int;
}
int func(int a)
{
    int temp = 0;
    return a+9;
}
int main()
{
    //foo();
    //Memory Leaks
//    int *ptr = nullptr;
//    delete ptr;
    //Dynamic Memory Allocation
//    int a = 0;
//    func(a);
//    int *ptr = new int;
//    *ptr = 8;
//    cout << *ptr << endl;
//    delete ptr;
//    cout << *ptr << endl;


    //Pointer Arithmetic
//    char r = 'a';
//    int q = (int) r; //int(r)
//    int a[] = {1,2,3,4,5};
//    * (int*)((char*) a + 8) = 8;
//    cout << a[2];
 //   int len = sizeof(a)/sizeof(a[0]);
//    for (int i = 0; i < len; i++)
//    {
//        cout << a[i] << endl;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        cout << *(a+i) << endl;
//    }
    //int *ptr = &a;
    //a + 1 = 5;

    //Intro String Lib
//    string a = "Hello" + "World";
//    a += " World";
//    cout << a;

    //Intro Array Library
//    array<int,4> a = {1,2,3,4};
//    cout << a[0] << endl;
//    cout << a.size();
//    char name[5]; // declare array large enough to hold 255 characters
//    std::cout << "Enter your name: ";
//    std::cin.getline(name, 5);
//    std::cout << "You entered: " << name << '\n';
    //Character Array Intro
//    char str[] = {'a','b','c'};
//    char str2[] = "Hello";
//    str2[5] = 't';
//    print(str2);
//    cout << str << endl;
//    cout << str2 << endl;


//    int a = 10;
//    int b = 16;
//    const int* ptr = &a;
//    int* const ptr2 = &a;
//    //Changing values of a
// //   *ptr = 55;
// //   *ptr2 = 66;
//    //Changing Pointer
////    ptr = &b;
////    *ptr = 44;
//    ptr2 = &b;
//    cout << *ptr ;
    //Question
//    int a = 5;
//    int b = 3;
//    int *ptr = &a;
//    update(ptr, &b);
//    cout << a << '\t' << b;










//    int a = 10;
//    int b = 15;
//    const int* ptr = &a;
//    int* const ptr2 = &a;
//    *ptr2 = 56;
//    a = 34;
//    ptr = &b;
//    cout << *ptr2;

//    int a = 6;
//    int *ptr = &a;
//    int* &refe = ptr;
//    cout << ptr << endl;
//    cout << refe;
//    string str = "Hello" + " Bro";
//    str += " Bro";
//    array<int, 5> myArray;
//    myArray[3] = 3;
//    cout << myArray.size();
//    int a[3] = {1,2,3};
//    int *ptr = a;
//    *(int*)((char*)ptr + 4) = 5;
//    int b = 97;
//    ptr = &b;
//    char t = 'a';
//    char* ptr2 = &t;
//    cout << (int)*ptr2 << endl;
//    cout << (char)*ptr << endl;
//    cout << ptr[2] << endl;

    return 0;
}
