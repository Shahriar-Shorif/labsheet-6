#include<stdio.h>
//3. Write a program to search an element whether the number is present or not.

int main()
{
    int Array[10] = {19,23,4,56,3,34,55,12,55,89};
    int x;
    printf("Search the element : ");
    scanf("%d",&x);
    for(int i = 0; i<=x; i++){
        if(x == Array[i]){
            printf("The number is present\n");
            break;
        }else{
            printf("The number is not present\n");
            break;
        }
    }
    return 0;
}
