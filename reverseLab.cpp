//Programmer: Christopher Hercules
//Purpose: print a C-string in reverse using pointers

#include <iostream>
using namespace std;

int main()
{
    char str[] = "Hello, World!";

    char* ptr = str; 

    while (*ptr != '\0')
    {
        ptr++;
    }
    --ptr;

    cout << "Reversed string: ";

    while (ptr >= str)
    {
        cout << *ptr;
        ptr--;
    }
    cout << endl;
    return 0;
}