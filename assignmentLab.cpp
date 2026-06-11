//Programmer: Chrsitopher Hercules
//Purpose: Practing pointers 

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int *ptra = &a; 
    int *ptrb = &b; 

    cout << "ptra points to: " << *ptra << endl;
    cout << "ptrb points to: " << *ptrb << endl;

    return 0;
}