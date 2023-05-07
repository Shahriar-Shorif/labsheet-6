#include<stdio.h>
int main()
{
    int array[1000],n;
    int sum = 0;
    float mean;
    int i,count = 0;
  printf("Enter number of elements = ");
  scanf("%d",&n);
  for(i = 0; i<n; i++){
    scanf("%d",&array[i]);
    sum += array[i];
  }
  mean = sum/n;
  for(i = 0; i<n; i++){
    if(mean > array[i]){
        count++;
    }
  }
  printf("%f",mean);








    return 0;
}
