//Programmer: Christopher Hercules
//Purpose: Finding the maximum value in an array using pointers

#include <iostream>
using namespace std;

int main()
{
    int values[] = {10, 20, 5, 15, 25};
    int size = sizeof(values) / sizeof(values[0]);

    int* max_ptr = values;
    int* ptr = values;
    int* end_ptr = values + size;

    while (ptr < end_ptr)
    {
        if (*ptr > *max_ptr)
        {
            max_ptr = ptr;
        }
        ptr++;
    }

    cout << "Maximum value: " << *max_ptr << endl;
    
    return 0;
}
