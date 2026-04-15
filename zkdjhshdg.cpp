
#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100005];  // Array to store the topics of interest

        // Input the topics of interest
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Variables to track the first and last disturbances
        int first = -1, last = -1;

        // Step 1: Identify first and last disturbance
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                if (first == -1) {
                    first = i;  // First occurrence of a disturbance
                }
                last = i;  // Last occurrence of a disturbance
            }
        }

        // Step 2: Calculate the minimal disturbance possible
        if (first == -1) {
            // No disturbances found, so answer is 0
            cout << 0 << endl;
        } else if (last - first <= 1) {
            // If the disturbance is small or just one block, a single swap can minimize it
            cout << 1 << endl;
        } else {
            // More than one disturbance block, might need multiple swaps
            cout << last - first - 1 << endl;
        }
    }

    return 0;
}
