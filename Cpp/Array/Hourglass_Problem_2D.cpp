//hourglass

//234
//234
//234
//calculated sum to be
//234
// 3
//234

#include <iostream>
#include <climits> // For INT_MIN

using namespace std;

int findMaxHourglassSum(int arr[6][6]) {
    int maxSum = INT_MIN; // Initialize to the smallest integer value

    // Traverse the 6x6 array, leaving out the edges
    for (int i = 0; i < 4; i++) { // Rows: from 0 to 3
        for (int j = 0; j < 4; j++) { // Columns: from 0 to 3
            // Calculate the hourglass sum
            int currentSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] // Top row
                           + arr[i+1][j+1]                        // Middle element
                           + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]; // Bottom row

            // Update maxSum if currentSum is greater
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    // Example 6x6 2D array
    int arr[6][6] = {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };

    int maxHourglassSum = findMaxHourglassSum(arr);
    cout << "Maximum Hourglass Sum: " << maxHourglassSum << endl;

    return 0;
}
