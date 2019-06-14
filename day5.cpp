#include <iostream>
using namespace std;
/*
bool isPrime(int a)
{
    //return true or false
}
void primeNumbers(int a)
{
    //Print all the prime numbers till a
}
int factorial1(int a)
{
    //Return factorial of a (a!) using loops
}
int factorial2(int a)
{
    //Return factorial of a (a!) using recursion
}
*/

//The value of count will not increment after calling the function
/*
int increment(int a)
{
    a++;
    return a;
}
int main()
{
    int count = 0;
    increment();
    cout << count;
    return 0;
}
*/

void increment(const int& a)
{
    int b = a + 1;
}
int main()
{
    /* Using Reference in Functions
    int i = 0;
    increment(i);
    cout << i ;
    */
    /* Reference Introduction
    int a = 10;
    int &b = a;
    int c = 25;
    b = c;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    */
    int a = 10;
    const int &b = a;
    a = 12;
    increment(a);
    return 0;
}











