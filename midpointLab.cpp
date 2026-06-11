//Programmer: Christopher Hercules
//Purpose: determine the midpoint of a vector using pointers

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values = { 4, 9, 14, 50, 33, 27, 21 };

    int* left = values.data();
    int* right = values.data() + values.size() - 1;

    while (left < right)
    {
        ++left;
        --right;
    }

    int midpoint;
    if (left == right)
    {
        midpoint = left - values.data();
    }
    else
    {
        midpoint = left - values.data();
    }
    cout << "Midpoint: " << midpoint << endl;
    cout << "Value at midpoint: " << *(values.data() + midpoint) << endl;

    return 0;
}
