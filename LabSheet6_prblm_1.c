#include<stdio.h>
//1. Write a program to enter 10 floating number in an array,
// display it and find the summation and average of those number.
int main()
{
    float Array[10] = {19.0,23.4,4.5,56.7,33.3,34.4,55.5,12.12,55.9,89.0};
    float sum = 0;
    for(int i = 0; i<10; i++){
        printf("%.2f ",Array[i]);
        sum = sum+Array[i];
    }
    printf("\nSum is : %.2f", sum);
    float avarage = sum/10;
    printf("\nAvarage of those number is : %.2f\n",avarage);
    return 0;
}
