// Diagonal Difference - Time: O(n), Space: O(1)
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < arr_rows; i++) {
        sum1 += arr[i][i];                    // top-left to bottom-right
        sum2 += arr[i][arr_rows - 1 - i];     // top-right to bottom-left
    }
    int diff = sum1 - sum2;
    if (diff < 0) diff = -diff;
    return diff;
}
