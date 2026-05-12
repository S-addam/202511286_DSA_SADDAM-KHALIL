#include <iostream>
using namespace std;

int main() {
    
    // Array of roll numbers
    int rollNumbers[] = {23, 43, 56, 78, 56};
    
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            
            if (rollNumbers[j] > rollNumbers[j + 1]) {
                
                // Swap numbers
                int temp = rollNumbers[j];
                rollNumbers[j] = rollNumbers[j + 1];
                rollNumbers[j + 1] = temp;
            }
        }
    }

    // Display sorted roll numbers
    cout << "Sorted Roll Numbers: ";

    for (int i = 0; i < n; i++) {
        cout << rollNumbers[i] << " ";
    }

    return 0;
}