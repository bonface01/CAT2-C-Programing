/*
Name : Bonface Mutinda 
RegNo : CT101/G/26531/25
CAT 2 [Q3]
DESCRIPTION :
Program that reads 10 integers from the user and writes them to a file named "input.txt".
It then reads the integers from the file, calculates the sum and average, 
writes the results to another file named "output.txt", 
and finally displays the contents of both files .
*/


#include <stdio.h>

int main(void) {
    FILE *fpIn, *fpOut;
    int num, i, sum = 0, count = 0;
    float avg;
    char ch;

    // Step 1: Write 10 integers to input.txt
    fpIn = fopen("C:\\Users\\name\\Desktop\\cat2\\input.txt", "w");
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fpIn, "%d\n", num);
    }
    fclose(fpIn);
    printf("\nData successfully written to input.txt\n");

    // Step 2: Read integers, calculate sum and average, write to output.txt
    fpIn = fopen("C:\\Users\\name\\Desktop\\cat2\\input.txt", "r");
    fpOut = fopen("C:\\Users\\name\\Desktop\\cat2\\output.txt", "w");

    while (fscanf(fpIn, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fpIn);

    avg = (float)sum / count;
    fprintf(fpOut, "Sum = %d\nAverage = %.2f\n", sum, avg);
    fclose(fpOut);
    printf("Sum and average written to output.txt\n");

    // Step 3: Display contents of input.txt
   
    printf("Contents of input.txt:\n");
    
    fpIn = fopen("C:\\Users\\name\\Desktop\\cat2\\input.txt", "r");
    while ((ch = fgetc(fpIn)) != EOF)
        putchar(ch);
    fclose(fpIn);

    // Step 4: Display contents of output.txt
   
    printf("Contents of output.txt:\n");
    
    fpOut = fopen("C:\\Users\\name\\Desktop\\cat2\\output.txt", "r");
    while ((ch = fgetc(fpOut)) != EOF)
        putchar(ch);
    fclose(fpOut);

    return 0;
}
