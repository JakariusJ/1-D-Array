#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int battery[size];
    

    cout << "Battery Inputs: ";
    for (int index = 0; index < size; index++)
    {
        cin >> battery[index];

       
    }

    cout << "Battery: ";
    for (int index = 0; index < size; index++)
    {
        cout << battery[index] << " ";
        
        
    }

    int low_reading = 0;
    for (int index = 0; index < size; index++)
    {
        if (battery[index] < 20)
        {
            low_reading++;
        }
    }

    cout << "\nLow Readings (<20%): " << low_reading;

    return 0;
}
