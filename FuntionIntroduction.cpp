#include <iostream>
//Forward Declaration
int add(int a, int b);

int main()
{
    int a = 0, b = 0;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    int c = add(a,b);
    std::cout << "The sum is: " << c << std::endl;
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
