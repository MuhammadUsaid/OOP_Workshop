#include <iostream>
using namespace std;

struct Car
{
    short petrol;
    short mileage;
    Car()
    {
        cout << "Constructor Called \n";
        petrol = 0;
        mileage = 9;
    }
    Car(int petrol, int mileage)
    {
        cout << "Overloaded Constructor Called \n";
        this->petrol = petrol;
        this->mileage = mileage;
    }
    void ShowPetrol()
    {
        cout << "Petrol: " << petrol << endl;
    }
    ~Car()
    {
        cout << "Destructor Called \n";
    }
};
void ShowPetrol(Car a)
{
    cout << "Petrol: " << a.petrol << endl;
}
int main()
{
    Car Toyota; // Car()
    //ShowPetrol(Toyota);
    Toyota.petrol = 105;

    Toyota.ShowPetrol();
    //ShowPetrol(Toyota);
    Car Mehran(50, 6);
    //ShowPetrol(Mehran);
    Mehran.ShowPetrol();
    return 0;
}

struct Point
{
    //member variables x and y

    //simple constructor
    //overloaded construction
    //function to print point --- void print(), should print like this: (x,y)
    //Destructor
};

struct Triangle
{
    //Member variables three Points
    //simple constructor
    //overloaded construction
    //function to print three point -- void print()
    //function to calculate area -- float area()
    //function to calculate perimeter -- float perimeter()
    //Destructor
};
struct Rectangle
{
    //Member variables four Points
    //simple constructor
    //overloaded construction
    //function to print four point -- void print()
    //function to calculate area -- float area()
    //function to calculate perimeter -- float perimeter()
    //Destructor
};












