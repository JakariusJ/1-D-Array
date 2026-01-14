#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int fuel[size];

    for (int index = 0; index < size; index++)
    {
        cin >> fuel[index];
    }

    cout << "Costs: ";
    for (int index = 0; index < size; index++)
    {
        cout << fuel[index] << " ";
    }

    int max = fuel[0];
    for (int index = 0; index < size; index++)
    {
        if (max < fuel[index])
        {
            max = fuel[index];
        }
    }

    cout << "\nHighest cost: " << max;
}

