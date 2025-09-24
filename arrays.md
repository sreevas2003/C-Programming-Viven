##  Write a Program to store elements in an array and print them.
```c
#include<stdio.h>
void main()
{
  int i,a[5];
  for(i=0;i<5;i++)
  {
    printf("Enter %d element of Array : ",i+1);
    scanf("%d",&a[i]);
  }
  printf("Array Elements are :\n");
  for(i=0;i<5;i++)
    printf("%d ",a[i]);
  printf("\n");
}
```
