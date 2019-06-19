#include <iostream>
using namespace std;


//int main()
//{
//    int a[2][2] = {1,2,3,4};
//    cout << a[0][0] << '\t' << a[0][1] << '\t' << a[1][0] << '\t' <<  a[1][1];
//    return 0;
//}
void change(int* a[], int index, int value)
{
    //a[index] = value;
}
int main()
{
    int a = 6;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << a << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
//    int a[3] = {1,2,3};
    //change(a, 0, 2);
  //  cout << a[0] << endl;
//    int x = 5;
//
//
//    int *ptr = &x;
//
//
//
//    *ptr = 10;

    //std::cout << x << std::endl;
//    int y = 9;
//
//    ptr = &y;

    //std::cout << *ptr << std::endl;
//
//    int *b = nullptr;
//    if (b)
//        std::cout << *b << std::endl;
//
//    int a[] = {1,2,3};
//
//    std::cout << *a << std::endl;
    return 0;



}
