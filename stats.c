#include <stdio.h>
#include "stats.h"

void find_maximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum: %d\n", max);
}

void find_minimum(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum: %d\n", min);
}

void find_median(int arr[], int size) {
    printf("Median function (not implemented)\n");
}

void find_mean(int arr[], int size) {
    printf("Mean function (not implemented)\n");
}

void print_array(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_statistics(int arr[], int size) {
    find_maximum(arr, size);
    find_minimum(arr, size);
}
