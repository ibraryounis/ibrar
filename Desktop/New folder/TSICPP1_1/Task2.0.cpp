#include <iostream>
using namespace std;

int main() 
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    int arrr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int j = 0, k = size - 1;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) {
            arrr[j] = arr[i];
            j++;
        } else 
        {
            arrr[k] = arr[i];
            k--;
        }
    }

    cout << "Array after separating even and odd numbers: ";
    for (int i = 0; i < size; i++)
    {
        cout << arrr[i] << " ";
    }
    cout << endl;

    return 0;
}