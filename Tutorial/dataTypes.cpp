/* especially in C++

int : range [-2147483648 to 2147483647]
wchar_t : size is 2 bytes 
bool
void : "nothing", mostly used on functions and pointers. cannot be declared on variables.
------------------------------------------------------------
============================================================
Type Modifiers
- signed
- unsigned
- short
- long
============================================================
Can use above modifiers to the following data types
- int 
- double
- char
>>>>>>>>>> reference to FromZeroToC

*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    wchar_t test = L'ם';
    cout << "2 bytes char : " << test << endl;
    char16_t sixteen = 'A'; // 2 bytes
    char32_t thirtytwo = 'B'; // 4 bytes
    cout << "16_t : " << sixteen << " / 32_t : " << thirtytwo << endl;
    // void thisisinvalid; // @ compilation error 
    return 0;
}
