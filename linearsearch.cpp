#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 25, 18, 9, 30, 45, 7, 56, 21, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
