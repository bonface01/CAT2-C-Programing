/*
Name : Bonface Mutinda 
RegNo : CT101/G/26531/25
CAT 2 [Q3]
DESCRIPTION :
Program that reads 10 integers from the user and writes them to a file named "input.txt".
It then reads the integers from the file, calculates the sum and average, 
writes the results to another file named "output.txt", 
and finally displays the contents of both files with proper error handling.
*/

#include <stdio.h>

// Function prototypes
void writeInput();
void processNumbers();
void displayFiles();

int main(void) {
    writeInput();
    processNumbers();
    displayFiles();
    return 0;
}

//  Function to write 10 integers to "input.txt"
void writeInput() {
    FILE *fp;
    int num, i;
    
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);
    printf("\nData successfully written to input.txt\n");
}

//  Function to calculate sum & average and write to "output.txt"
void processNumbers() {
    FILE *fpIn, *fpOut;
    int num, count = 0, sum = 0;
    float avg;

    fpIn = fopen("input.txt", "r");
    fpOut = fopen("output.txt", "w");

    if (fpIn == NULL || fpOut == NULL) {
        printf("Error opening file(s)!\n");
        return;
    }

    while (fscanf(fpIn, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    fprintf(fpOut, "Sum = %d\nAverage = %.2f\n", sum, avg);

    fclose(fpIn);
    fclose(fpOut);

    printf("Sum and average written to output.txt\n");
}

//  Function to display both files
void displayFiles() {
    FILE *fp;
    char ch;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}
