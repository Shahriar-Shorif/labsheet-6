#include<stdio.h>
int main()
{
    //2. Write a program to enter 10 present ages and find the mean of the ages
    int ages[10];
    int sum = 0;
    int x;
    scanf("%d",&x);
    float mean;
    for(int i = 1; i<=x; i++){
        scanf("%d",&ages[i]);
    }
    for(int i = 1; i<=x; i++){
        sum = sum+ages[i];
    }
    mean = sum/x;
    printf("Mean of the ages is : %.2f",mean);
    return 0;
}
