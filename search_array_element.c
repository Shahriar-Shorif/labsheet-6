#include<stdio.h>
int main()
{
    int linearArray[10] = {11, 12, 25 , 45, 48, 41, 69, 30},searchEelement, i;
    printf("Enter the seaaching element = ");
    scanf("%d",&searchEelement);
    for(i = 1; i <= 10; i++){km

        if(searchEelement == linearArray[i]){
            printf("Locaation is = %d",i+1);
            break;
        }
        if(i == 10){
            printf("Not matched");
            break;
        }
    }
    return 0;
}
