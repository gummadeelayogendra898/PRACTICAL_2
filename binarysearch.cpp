
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 7, 9, 12, 15, 18, 21, 25, 30, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 21;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        cout << "Element not found";

    return 0;
}
