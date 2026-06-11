//Programmer: Christopher Hercules
//Purpose: calculating the length of a string using pointers

#include <iostream>
using namespace std;

int main()
{
    char str[] = "Hello, World!";

    char* ptr = str;
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}