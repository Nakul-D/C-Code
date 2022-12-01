// Traversing of array

#include<stdio.h>

void main() {

    // int marks[5];  //declare the array
    // marks[0] = 80; //initialize the array
    // marks[1] = 60;
    // marks[2] = 70;
    // marks[3] = 85;
    // marks[4] = 75;

    int marks[5] = {80, 60, 70, 85, 75};

    //transversal of array
    for (int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }
}
