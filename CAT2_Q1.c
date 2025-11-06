/*
Name: Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 6 ASSIGNMENT [EXTRA TASK]
DESCRIPTION:
Program that declares and initializes a 2D array named 'scores' with 4 rows and 2 columns.
The program prints all the elements of the array using nested for loops and formats
the output neatly with spacing and line breaks for readability.
*/


#include <stdio.h>
int main(void) {
    // Declare and initialize a 2D array named scores with 4 rows and 2 columns 
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        
        {35, 70},
        {59, 67}
    };

    //Print the elements of the above array using a nested for loop
    int i, j;  //Declare loop counters
      printf("Elements of the scores array:\n");

        for (i = 0; i < 4; i++) {  //Loop through rows 
         for (j = 0; j < 2; j++) { // Loop through columns
            printf(" %d\t", scores[i][j]);
        }
             printf("\n");  //prints a new line after each row
        
          if (i == 1) {
        printf("\n");// Add a blank line between the first and second matrix to separate them 
       }
    }
    
    return 0;
}
