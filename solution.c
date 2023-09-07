//AMAAN BHATI
//ROLL NUMBER - 21054377
//DAA LAB ASSIGNMENT 1

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void merge(int *result, int *p1, int *p2, int *p3, int *p4, int size1, int size2, int size3, int size4) {
    // Implement 4-way merge algorithm here
}

int main() {
    int p1[MAX_SIZE], p2[MAX_SIZE], p3[MAX_SIZE], p4[MAX_SIZE];
    int size1, size2, size3, size4;
    // Read data from files and store in arrays p1, p2, p3, p4
    
    // Sort the arrays p1, p2, p3, p4 (you can use any sorting algorithm)
    
    int result[MAX_SIZE];
    merge(result, p1, p2, p3, p4, size1, size2, size3, size4);
    
    // Print the selected students
    printf("Selected students: ");
    for(int i = 0; i < MAX_SIZE; i++) {
        if(result[i] != 0) {
            printf("%d ", result[i]);
        }
    }
    printf("\n");
    
    return 0;
}

