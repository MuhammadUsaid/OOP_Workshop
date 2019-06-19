#include <iostream>
int* max_ptr(int*,int);
int main()
{
//    int array[] = {2,4,9,5};
//
//    int size = sizeof(array)/sizeof(array[0]);
//
//    std::cout << *max_ptr(array,size) << std::endl;
//    std::cout << max_ptr(array,size) << std::endl;
//    std::cout << &array[2] << std::endl;
}
int* max_ptr(int* array ,int size)
{
    int* max = &array[0];
    for (int i = 0; i < size; i++)
    {
        if (*max < array[i])
        {
            max = &array[i];
        }
    }
    return max;
}
