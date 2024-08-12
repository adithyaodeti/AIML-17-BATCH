#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%5d\n", arr[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n, int order) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((order == 1 && arr[i] < arr[j]) || (order == 2 && arr[i] > arr[j])) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int prices[100]; // array to store product prices
    int n; // number of products
    int order; // 1 for descending order, 2 for ascending order

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Enter 1 for high to low or 2 for low to high: ");
    scanf("%d", &order);

    sortArray(prices, n, order);

    printArray(prices, n);

    return 0;
}
