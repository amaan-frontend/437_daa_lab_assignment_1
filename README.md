# daa_lab_assignment_1
NAME - AMAAN BHATI
ROLL NUMBER - 2105437
DAA LAB ASSIGNMENT 1


QUESTION -

Best Student Award
KIIT Deemed to be University is planning to select the best students in the School of
Computer Engineering. Four Panels had been formed. Each student file is processed by the
rollno. The list of students nominated by the faculty members is scrutinized by members of
each panel. Each panel proposes a list of students in some arbitrary order. The list contains
the rollno of the students, which indicates the recommendation of the panel for the award. Any student who is recommended by three or more panels is selected. There is no lower limit
or upper limit on the number of recommendations from each panel. Your task is to calculate how many students are selected for the award, given the lists
recommended by the four panels. For example, suppose the students recommended by the four panels are as follows:  Panel 1: [40,38,15,162,5]  Panel 2: [14,162,92,38,7,748]  Panel 3: [14,5,40,38]  Panel 4: [17,952,40,92,14,38]
In this example, 3 students are selected having rollno [40,38,14]. Notes#
 Each panel number submitted the shortlisted rollno in a file named panelno.txt. In the above
example file “panel1.txt” contains 40, 38, 15, 162, 5.  Read each file and store the elements in the corresponding array. E.g. panel1 data stored in an
array p1[5], panel2 data in p2[6].  Write a C program to implement the given problem statement. Solution Hints#
Sort each array and then perform a 4-way merge.

![Screenshot 2023-09-07 225715](https://github.com/amaan-frontend/daa_lab_assignment_1/assets/134868734/73386b22-8ff4-43d1-ab8a-264e8dd8bded)

PSEUDO CODE-
#include <stdio.h>
#include <stdlib.h>

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

Explanation: Selecting Best Students in the School of Computer Engineering
Problem Statement Overview
The problem involves selecting the best students in the School of Computer Engineering at KIIT Deemed to be University. Four panels have been formed, each nominating students based on their evaluation. A student is selected if they are recommended by three or more panels.

Algorithm Overview
Reading Data from Files:

Read the recommendations from each panel stored in respective files (e.g., panel1.txt, panel2.txt, etc.).
Store the recommendations in separate arrays (p1[], p2[], p3[], p4[]).
Sorting:

Sort each array (p1[], p2[], p3[], p4[]) to prepare for merging.
Merging:

Perform a 4-way merge on the sorted arrays.
Implement a merging algorithm that combines the recommendations from all panels.
Selection Criteria:

Any student recommended by three or more panels is selected.
Output:

Print the list of selected students.
