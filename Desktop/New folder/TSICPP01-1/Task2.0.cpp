#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n], evenNumbers[n], oddNumbers[n];
    int evenCount=0 , oddCount =0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
        	
            evenNumbers[evenCount++] = numbers[i];
        }
        else
        {
            oddNumbers[oddCount++] = numbers[i];
        }
    }
    
    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;
}

