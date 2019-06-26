#include <iostream>
using namespace std;
// char* a or char a[]
void Concatenate(char* &a,const char b[])
{
    int sizea = 5;
    int sizeb = 6;
    char* temp = new char[sizea + sizeb];
//    a = new char[sizea + sizeb];
    int i;
    for(i = 0; i < sizea; i++)
    {
        temp[i] = a[i];
    }
    for( ; i < sizea + sizeb; i++)
    {
        temp[i] = b[i - sizea];
    }
    delete[] a;
    a = temp;
}

int main()
{
    char* a = new char[5];
    a = "Hello";
    char b[] = " World";
    Concatenate(a, b);
    cout << a << endl;
    delete[] a;
    return 0;
}
