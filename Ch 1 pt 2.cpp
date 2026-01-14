#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int pin[size];

    for (int index = 0; index < size; index++)
    {
        cout << "Pin attempt " << index + 1 << ": ";
        cin >> pin[index];
    }

    int third_attempt = pin[2];

    cout << "The third attempt: " << third_attempt << endl;

    return 0;
}

