#include <iostream>
using namespace std;

int main()
 {
    int i;
    int num[7] = {3, 1, 4, 1, 5, 9, 2};
    int max = num[0];

    for (i = 1; i < 7; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    cout << "The maximum number is: " << max << endl;

    return 0;
}
