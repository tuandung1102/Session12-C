#include <stdio.h>


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 8, 3, 9, 12};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    
    printArray(arr, size);

    return 0;
}

