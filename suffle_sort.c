#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fisher_yates_shuffle(int arr[], int n) {
    srand(time(0));
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void sort_array(int arr[], int n) {
    fisher_yates_shuffle(arr, n);
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 2, 8, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    clock_t start_time = clock();
    sort_array(arr, n);
    clock_t end_time = clock();
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", execution_time);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
