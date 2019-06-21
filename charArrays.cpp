#include <iostream>
using namespace std;

void func(char* a)
{
    a[0] = 'A';
    a = new char[3];
    a[0] = 'T';
}
int main()
{
    char a[] = "New";
    func(a);
    cout << a[0];
    //Encryption
//    cout << "Enter The Size of Your message: \n";
//    int length;
//    cin >> length;
//    char* message = new char[length];
//    cout << "Enter Your Message: \n";
//    cin >> message;
//    cout << "Enter The Key: \n";
//    int key;
//    cin >> key;
//    cout << (message[length] == '\0');
//  Encrypt(message, key, length);
//  cout << message << endl;
//  Decrypt(message, key, length);
//  cout << message << endl;


//    int a[6] = {5,6,7};
////    cout << a[0] << '\t' << a[1] << endl;
//    int* ptr = new int[3] {1,2,3};
////    cout << ptr[0] << endl; //ptr[0] => *(ptr + 0)
////    a = ptr;
//    cout << ptr[0] << '\t' << ptr[1] << endl;
//    ptr = a; // You have lost the access to memory where ptr was pointing
//    cout << ptr[0] << '\t' << ptr[1] << endl;
//    delete[] ptr;
    return 0;
}
