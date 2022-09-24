#include <iostream>
// using namespace std; // @ namespace : std
// ! every library has own prefix or namespace.
// ! include the namespace will be convenience. But can create potential problems

int main(int argc, char const *argv[])
{
    // cout << "Hello World!" << endl; // @ if namespace included
    std::cout << "Hello World!, I don't have namespace" << std::endl;

    using namespace std;
    cout << "Enter an integer: ";
    int number;
    cin >> number; // ! not like C, don't need the reference operator
    cout << "Your input is " << number << endl;
    // ======================================================
    cout << "I want a char and integer: " << endl;
    char ch;
    cin >> ch >> number;
    cout << "Char is : " << ch << endl;
    cout << "New number is : " << number << endl;
    return 0;
}
