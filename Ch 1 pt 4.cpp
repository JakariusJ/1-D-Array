#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int step[size];

    cout << "Enter the step counts: ";
    for (int index = 0; index < size; index++)
    {
        cin >> step[index];
    }

    cout << "Steps: ";
    for (int index = 0; index < size; index++)
    {
        cout << step[index] << " ";
    }

    int total = 0;
    for (int index = 0; index < size; index++)
    {
        total = total + step[index];
    }

    cout << "\nTotal: " << total;

    return 0;
}

