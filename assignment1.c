#include <stdio.h>

void assignment1() {

    int num1 = 21;
    int *pointer1 = &num1;

    printf("Address of number using &num1 %p\n", &num1);
    printf("Address of number using pointer1 %p\n", pointer1);

    *pointer1 = 12;

    printf("New number after modification using pointer %d\n", num1);

}

void assignment2() {

    int arr2[5] = {12, 13, 14, 15, 16};
    int *pointer2 = arr2;

    printf("Original Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pointer2+i));
    }

    printf("\n");

    printf("Modified Array Values (Using pointer notation): ");
    for (int i = 0; i < 5; i++) {
        *(pointer2+i) += 100;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(pointer2+i));
    }

    printf("\n");

    printf("Modified Array Values (Using array name notation): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}

void swap(int *val1, int *val2) {
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void assignment3() {

    int num3 = 21; 
    int num4 = 31;

    printf("Number 1 before swap: %d\n", num3);
    printf("Number 2 before swap: %d\n", num4);

    swap(&num3, &num4);

    printf("Number 1 after swap: %d\n", num3);
    printf("Number 2 after swap: %d\n", num4);

    printf("\n");
}

void assignment4() {
    
}

void assignment5() {

}

int main() {

    printf("Assignment 1 \n");
    assignment1();

    printf("Assignment 2 \n");
    assignment2();

    printf("Assignment 3 \n");
    assignment3();

    printf("Assignment 4 \n");
    assignment4();








    return 0;

}