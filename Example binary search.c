#include <stdio.h>

int binarySearchSalary(int salaries[], int size, int targetSalary) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (salaries[mid] == targetSalary) {
            return mid;
        }

        if (salaries[mid] < targetSalary) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int salaries[] = {2000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    int size = sizeof(salaries) / sizeof(salaries[0]);
    int targetSalary = 4000;

    int result = binarySearchSalary(salaries, size, targetSalary);

    if (result != -1) 
    {
        printf("Arun's salary of %d USD is found at index %d.\n", targetSalary, result);
    } 
    else
    {
        printf("Arun's salary of %d USD is not found in the array.\n", targetSalary);
    }

    return 0;
}