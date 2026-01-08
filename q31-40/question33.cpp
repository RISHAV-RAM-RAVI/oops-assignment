// Program to find second-largest element. 
#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (largest == second_largest)
    {
        cout << "There is no second-largest element." << endl;
    }
    else
    {
        cout << "The second-largest element is: " << second_largest << endl;
    }

    return 0;
}