#include <iostream>
using namespace std;

//Warm Up
int Length(const char*);
bool Equal(const char* a, const char* b);

// Encryption and Decryption using Rotational Cipher
void Encrypt(char* str, int key); //Function to Encrypt the string according to the given key
void Decrypt(char* str, int key); //Function to Decrypt the string according to the key

// Concatenation
void Concatenate(char* &a, const char*b);

//Stack Up
bool Push(char* stk, int* current, int value, int height);
int Pop(char* stk, int* current);

//Unification of Arrays
int* Unify(const int* a, const int* b, int sizea, int sizeb);

int main()
{
    return 0;
}
