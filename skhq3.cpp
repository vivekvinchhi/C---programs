#include <iostream>
using namespace std;

int main() {
    int num[5] = {4, 5, 6, 2, 2};
    int targetsum = 13;

    int size = sizeof(num) / sizeof(num[0]);

    int sum = 0;
    int start = 0; // Keep track of the starting index of the current sequence

    for (int i = 0; i < size; i++) {
        sum = sum + num[i];

        while (sum > targetsum) {
            // If the sum exceeds the target, remove elements from the beginning of the sequence
            sum = sum - num[start];
            start++;
        }

        if (sum == targetsum) {
            // Print the consecutive sequence that sums up to the targetsum
            for (int j = start; j <= i; j++) {
                cout << num[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
