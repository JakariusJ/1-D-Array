#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int distance[size];

    for (int index = 0; index < size; index++)
    {
        cout << "Reading " << index << ": ";
        cin >> distance[index];
    }

    int first_reading = distance[0];
    int last_reading = distance[size - 1];

    cout << "The first reading: " << first_reading << endl;
    cout << "The last reading: " << last_reading << endl;

    return 0;
}

