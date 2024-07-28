/*=================================================================
/* TSICPP01-2: Teresol
/* Name : Ibrar Younis
/* Task No.: 2.1.
/*==================================================================
/*   program to find at least two significant elements.
/*==================================================================*/
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements with at least two significant digits are: ";
    
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int count = 0;
        if (num == 0)
        {

            count = 1; 
        } else {
            while (num != 0) {
                num /= 10;
                count++;
            }
        }
        if (count >= 2) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}

