// Dynamic Array - Time: O(n + q), Space: O(n + q)
int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
    int** seq = calloc(n, sizeof(int*));      // n sequences
    int* size = calloc(n, sizeof(int));       // how many items in each
    int* cap = calloc(n, sizeof(int));        // space reserved in each
    int* result = malloc(queries_rows * sizeof(int));
    int lastAnswer = 0, count = 0;

    for (int i = 0; i < queries_rows; i++) {
        int type = queries[i][0], x = queries[i][1], y = queries[i][2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            if (size[idx] == cap[idx]) {      // full -> double the space
                cap[idx] = cap[idx] * 2 + 1;
                seq[idx] = realloc(seq[idx], cap[idx] * sizeof(int));
            }
            seq[idx][size[idx]] = y;
            size[idx]++;
        } else {
            lastAnswer = seq[idx][y % size[idx]];
            result[count] = lastAnswer;
            count++;
        }
    }
    *result_count = count;
    return result;
}
