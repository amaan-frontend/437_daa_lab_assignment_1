// AMAAN BHATI
// 2105437
// DAA LAB ASSIGNMENT 1

#include <stdio.h>
#include <stdlib.h>

// Function to merge four arrays
int *merge_113(int arr1[], int n, int arr2[], int m, int arr3[], int p, int arr4[], int q) {
    // Allocate memory for the merged array
    int *arr = (int *)malloc(sizeof(int) * (n + m + p + q));
    if (arr == NULL) {
        // If memory allocation fails, exit the program
        exit(1);
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        arr[k++] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        arr[k++] = arr2[i];
    }
    for (int i = 0; i < p; i++) {
        arr[k++] = arr3[i];
    }
    for (int i = 0; i < q; i++) {
        arr[k++] = arr4[i];
    }
    return arr; // Return the merged array
}

// Function to perform bubble sort on an array
void bubbleSort_113(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *panel1, *panel2, *panel3, *panel4;
    panel1 = fopen("panel1.txt", "r");
    panel2 = fopen("panel2.txt", "r");
    panel3 = fopen("panel3.txt", "r");
    panel4 = fopen("panel4.txt", "r");

    if (!panel1 || !panel2 || !panel3 || !panel4) {
        // Check if any of the files failed to open
        printf("Error opening file(s).\n");
        return 1;
    }

    int arr1[20], arr2[20], arr3[20], arr4[20];
    int i = 0, j = 0, k = 0, l = 0;

    // Read data from panel1.txt into arr1
    while (!feof(panel1)) {
        fscanf(panel1, "%d", &arr1[i]);
        i++;
    }
    // Read data from panel2.txt into arr2
    while (!feof(panel2)) {
        fscanf(panel2, "%d", &arr2[j]);
        j++;
    }
    // Read data from panel3.txt into arr3
    while (!feof(panel3)) {
        fscanf(panel3, "%d", &arr3[k]);
        k++;
    }
    // Read data from panel4.txt into arr4
    while (!feof(panel4)) {
        fscanf(panel4, "%d", &arr4[l]);
        l++;
    }

    int *mergedArray = merge_113(arr1, i, arr2, j, arr3, k, arr4, l); // Merge the arrays

    int x = i + j + k + l;

    bubbleSort_113(mergedArray, x); // Sort the merged array

    // Print the sorted merged array
    for (int p = 0; p < x; p++) {
        printf("%d ", mergedArray[p]);
    }

    int count = 1;
    int n = 0;

    int counts[1000] = {0}; // Initialize an array to count occurrences of each element
    for (int i = 0; i < x; i++) {
        counts[mergedArray[i]]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (counts[i] >= 3) {
            n++;
        }
    }
    printf("\n%d", n); // Print the count of elements occurring three or more times

    fclose(panel1);
    fclose(panel2);
    fclose(panel3);
    fclose(panel4);

    free(mergedArray); // Free the dynamically allocated memory

    return 0;
}
