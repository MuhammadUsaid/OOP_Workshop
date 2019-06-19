#include <iostream>
#include <iterator>
using namespace std;
enum PERSON
{
    USAID, //0
    AIMAN, //1
    MAX_STUDENTS //2
};
void increment(int a)
{
    a++;
}
void change_array(int array[2])
{
    array[USAID] =2;
    array[AIMAN] = 3;
}

void change(int index, int a[], int value)
{
    a[index] = value;
//    cout << sizeof(a);
}
int main()
{
    int a[] = {1,2,3,4};
    cout << a;
    //cout << a[0] << endl;
    //change(0, a, 5);
    //cout << a[0];
//    int scores[MAX_STUDENTS];
//    scores[USAID] = 10;
//    scores[AIMAN] = 10;
//    change_array(scores);
//    int a[] = {4, 3, 5};
//    cout << sizeof(a) << endl;
//    cout << sizeof(a)/sizeof(int) << endl;
//    cout << sizeof(a)/sizeof(a[0]);

     return 0;
}
