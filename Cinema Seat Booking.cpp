#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int seat[size];

    cout << "Enter the seats: ";
    for (int index = 0; index < size; index++)
    {
        cin >> seat[index];
    }

    cout << "Enter the new second seat value to be updated: ";
    int new_seat;
    cin >> new_seat;
    seat[1] = new_seat;

    cout << "Updated seats: ";
    for (int index = 0; index < size; index++)
    {
        cout << seat[index] << " ";
    }
}

