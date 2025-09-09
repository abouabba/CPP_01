// C++ Program to Declare a Function Pointer to Member
// Function
#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Constructor to initialize the member variable 'value'
    MyClass(int val)
        : value(val)
    {
    }

    // Member function to add two integers and return the
    // result
    int add(int x, int y) { return x + y; }
};

int main()
{
    // Create an instance of MyClass with the initial value
    // of 10
    MyClass obj(10);

    // Declare a pointer to the member function 'add' of
    // MyClass
    int (MyClass::*ptrToMemberFunc)(int, int)
        = &MyClass::add;

    // Call the member function 'add' using the function
    // pointer

    int result = (obj.*ptrToMemberFunc)(49, 51);

    // Print the result of the function call
    cout << "Result from the member function: " << result
         << endl;

    return 0;
}
