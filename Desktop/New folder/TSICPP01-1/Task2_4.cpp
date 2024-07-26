#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string citizen;

    cout << "age=" << endl;
    cin >> age;
    cout << "citizenship (yes/no)=" << endl;
    cin >> citizen;

    if (age >= 18)
    {
        cout << "age is correct" << endl;
    }
    else
    {
        cout << "age is not correct" << endl;
    }

    if (citizen == "yes")
    {
        cout << "You are a citizen" << endl;
        if (age >= 18)
        {
            cout << "You are eligible to vote" << endl;
        }
        else
        {
            cout << "You are not eligible to vote due to age" << endl;
        }
    }
    else
    {
        cout << "You are not a citizen, hence not eligible to vote" << endl;
    }

    return 0;
}
