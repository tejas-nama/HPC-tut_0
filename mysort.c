#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 18250  // 50 years of daily data

// Swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort (Baseline)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Partition function for QuickSort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// QuickSort recursive function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int *arr_bubble = (int*)malloc(SIZE * sizeof(int));
    int *arr_quick = (int*)malloc(SIZE * sizeof(int));

    if (!arr_bubble || !arr_quick) {
        printf("Memory allocation failed\n");
        return 1;
    }

    srand(time(NULL));

    // Fill both arrays with the exact same random temperatures (0 to 100)
    for (int i = 0; i < SIZE; i++) {
        int temp = rand() % 101; 
        arr_bubble[i] = temp;
        arr_quick[i] = temp;
    }

    clock_t start, end;
    double time_taken;

    // Measure Bubble Sort
    start = clock();
    bubbleSort(arr_bubble, SIZE);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble Sort of %d elements took %f seconds.\n", SIZE, time_taken);

    // Measure Quick Sort
    start = clock();
    quickSort(arr_quick, 0, SIZE - 1);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Quick Sort of %d elements took %f seconds.\n", SIZE, time_taken);

    free(arr_bubble);
    free(arr_quick);
    return 0;
}