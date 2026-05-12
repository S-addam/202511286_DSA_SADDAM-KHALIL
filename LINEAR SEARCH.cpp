#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int size = 5;
    bool found = false;

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Element found at position " << i;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout << "Element not found";
    }

    return 0;
}
