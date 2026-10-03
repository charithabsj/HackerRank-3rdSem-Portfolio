// Sparse Arrays - Time: O(N * Q), Space: O(1) extra (N, Q <= 1000)
int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    int* result = calloc(queries_count, sizeof(int));
    for (int i = 0; i < queries_count; i++) {
        for (int j = 0; j < strings_count; j++) {
            if (strcmp(queries[i], strings[j]) == 0) result[i]++;
        }
    }
    *result_count = queries_count;
    return result;
}
