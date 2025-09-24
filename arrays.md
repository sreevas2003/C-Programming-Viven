##  1 Write a Program to store elements in an array and print them.
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
##  2. Write a program in C to read n number of values in an array and display them in reverse order.
```c
#include<stdio.h>
void main()
{
        int temp,i,j,arr[8]={1,2,3,4,5,6,7,8,9};
        for(i=0,j=8;i<j;i++,j++)
        {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }
}
```

## 5. Write a program in C to count the total number of duplicate elements in an array.
```c
//duplicate numbers
#include<stdio.h>
void main()
{
        int a[8]={2,4,5,3,2,3,2,7};
        int c=0,i=0,j;
        int temp[8];
        while(i<8)
                temp[i++]=-1;
        for(i=0;i<8;i++)
        {
                if(temp[i]==-1)
                {
                        for(j=i+1;j<8;j++)
                        {
                                if(a[i]==a[j])
                                {
                                        c++;
                                        temp[j]=0;
                                }
                        }
                }
        }
        printf("duplicate numbers count is : %d\n",c);
}
```
## 6. Write a program in C to print all unique elements in an array
```c
//unique elements
#include<stdio.h>
void main()
{
        int i,c,k=0,j,temp[8],a[8],b[8];
        printf("Enter 8 elements of array : ");
        for(i=0;i<8;i++)
                scanf("%d",&a[i]);
        i=0;
        while(i<8)
                temp[i++]=-1;
        for(i=0;i<8;i++)
        {
                if(temp[i]==-1)
                {
                        c=0;
                        for(j=i+1;j<8;j++)
                        {
                                if(a[i]==a[j])
                                {
                                        c++;
                                        temp[j]=0;
                                }
                        }
                        if(c==0)
                                b[k++]=a[i];
                }
        }
        for(i=0;i<k;i++)
                printf("%d ",b[i]);
        printf("\n");
}
```
## 7. Write a program in C to merge two arrays of the same size sorted in descending order.
```c
#include<stdio.h>
void main()
{
        int s,i,j,temp;
        printf("Enter size : ");
        scanf("%d",&s);
        int a[s],b[s],k=0,c[50];
        printf("Enter array A : ");
        for(i=0;i<s;i++)
                scanf("%d",&a[i]);
        printf("Enter array B : ");
        for(i=0;i<s;i++)
                scanf("%d",&b[i]);
        for(i=0;i<s;i++)
                c[k++]=a[i];
        for(j=0;j<s;j++)
                c[k++]=b[j];
        for(i=0;i<k;i++)
        {
                for(j=i+1;j<k;j++)
                {
                        if(c[i]<c[j])
                        {
                                temp=c[i];
                                c[i]=c[j];
                                c[j]=temp;
                        }
                }
        }
        for(i=0;i<k;i++)
                printf("%d ",c[i]);
        printf("\n");
}
```
##  13 Write a program in C to delete an element at a desired position from an array
```c
#include<stdio.h>
void main()
{
        int pos,i,a[8];
        printf("Enter array of 8 elements : ");
        for(i=0;i<8;i++)
                scanf("%d",&a[i]);
        printf("Enter delete index position : ");
        scanf("%d",&pos);
        for(i=pos;i<8;i++)
        {
                a[i]=a[i+1];
        }
        for(i=0;i<7;i++)
                printf("%d ",a[i]);
        printf("\n");
}
```
## 20 Write a program in C to find the transpose of a given matrix
```c
//transpose matrix
#include<stdio.h>
void main()
{
        int a[3][3],t[3][3];
        int i,j;
        printf("Enter 3*3 array matrix: ");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        scanf("%d",&a[i][j]);
        }
        printf("Transpose matrix is :\n");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        t[i][j]=a[j][i];
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%d ",t[i][j]);
                printf("\n");
        }
}
```
## 21. Write a program in C to find the sum of the right diagonals of a matrix
```c
//sum of right diagonal
#include<stdio.h>
void main()
{
        int i,j,sum=0,a[3][3];
        printf("Enter 3*3 matrix is :");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        scanf("%d",&a[i][j]);
        }
        for(i=0;i<3;i++)
                sum+=a[i][3-1-i];
        printf("Sum of right diagonal : %d\n",sum);
}
```
## 22. Write a program in C to find the sum of the left diagonals of a matrix.
```c
#include<stdio.h>
void main()
{
        int sum=0,i,j,a[3][3];
        printf("Enter 3*3 array : ");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        scanf("%d",&a[i][j]);
        }
        for(i=0;i<3;i++)
        {
                sum+=a[i][i];
        }
        printf("Sum of Right diagonal : %d\n",sum);
}
```
## 30. Write a program in C to find the two repeating elements in a given array
```c
#include<stdio.h>
void main()
{
        int i,j,a[10]={1,2,3,4,5,6,2,4,5,3};
        printf("repeated elsements are : ");
        for(i=0;i<10;i++)
        {
                for(j=i+1;j<10;j++)
                {
                        if(a[i]==a[j])
                                printf("%d ",a[i]);
                }
        }
}
```
## 32. Create a function to calculate the average of elements in an array
```c
#include<stdio.h>
float avg(int *a,int);
void main()
{
        int i,j,a[10];
        printf("Enter array 10 elements : ");
        for(i=0;i<10;i++)
                scanf("%d",&a[i]);
        printf("Average of array elements is : %.2f\n",avg(a,10));
}
float avg(int *a,int s)
{
        int i;
        float sum=0;
        float average=0;
        for(i=0;i<s;i++)
                sum+=a[i];
        average=sum/s;
        return average;
}
```
## 34. Implement a function to reverse the elements of an array.
```c
#include<stdio.h>
void rev(int *a,int);
void main()
{
        int i,a[8]={1,2,3,4,5,6,7,8};
        rev(a,8);
        for(i=0;i<8;i++)
                printf("%d ",a[i]);
        printf("\n");

}
void rev(int *a,int s)
{
        int i,j,temp;
        for(i=0,j=s-1;i<j;i++,j--)
        {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }
}
```
## 35. Implement a function to delete an element at a specific position in an array
```c
#include<stdio.h>
#include<stdlib.h>
void del(int *a,int,int);
void main()
{
        int i,a[9]={1,2,3,4,5,6,7,8,9},pos;
        printf("Enter delete index position : ");
        scanf("%d",&pos);
        del(a,9,pos);
        for(i=0;i<9-1;i++)
                printf("%d ",a[i]);
        printf("\n");
}
void del(int *a,int s,int pos)
{
        int i;
        for(i=pos;i<s;i++)
                a[i]=a[i+1];
}
```
## 36. Write a function to find the product of all elements in an array
```c
#include<stdio.h>
int prod(int *a);
void main()
{
        int a[10]={1,2,3,4,5,6,7,8,9,10};
        printf("Product of all elements is : %d\n",prod(a));
}
int prod(int *a)
{
        int i,pro=1;
        for(i=0;i<10;i++)
                pro*=a[i];
        return pro;
}
```
## 37. Print Square of Array Elements in C
```c
#include<stdio.h>
void square(int* a);
void main()
{
        int i,a[10]={1,2,3,4,5,6,7,8,9,10};
        square(a);
        for(i=0;i<10;i++)
                printf("%d ",a[i]);
        printf("\n");
}
void square(int *a)
{
        int i;
        for(i=0;i<10;i++)
                a[i]*=a[i];
}
```
## 38. Print Ascii Values using Array in C
```c
#include<stdio.h>
void main()
{
        char str[]="sreenivasulu";

        int i;
        for(i=0;str[i]!='\0';i++)
                printf("%c ascii value is %d\n",str[i],str[i]);
}
```
## 39. C Program To Find Two Elements whose Sum is Closest to Zero
```c

#include<stdio.h>
void main()
{
        int a[10]={11,2,3,4,5,6,7,8,1,10};
        int i,j,psum=100,sum,d1,d2;
        for(i=0;i<10;i++)
        {
                for(j=i+1;j<10;j++)
                {
                        sum=a[i]+a[j];
                        if(sum<psum)
                        {
                                d1=a[i];
                                d2=a[j];
                                psum=sum;
                        }
                }
        }
        printf("%d and %d two elements min sum is : %d\n",d1,d2,psum);
}
```
## 42. Write a program to write all the elements of 2-D Array into !-D Array in row wise
```c
#include<stdio.h>
void main()
{
        int a[3][3]={1,2,3,4,5,6,7,8,9};
        int b[9],i,j,k=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        b[k++]=a[i][j];
                }
        }
        for(i=0;i<k;i++)
                printf("%d ",b[i]);
        printf("\n");
}
```
## 43. Write a program to write whether a matrix is symmetric or not
```c
#include<stdio.h>
int symmetric(int a[][3]);
void main()
{
        int a[3][3]={1,2,3,2,4,5,3,5,6};
        if(symmetric(a))
                printf("it is not symmetric\n");
        else
                printf("it is symmetric\n");
}
int symmetric(int a[][3])
{
        int i,j;
        int flag=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        if(a[i][j]!=a[j][i])
                        {
                                flag=1;
                                break;
                        }
                }
        }
        return flag;
}
```
## 44. Write a program to check if elements of an array are distinct or not.
```c
#include<stdio.h>
#include<stdbool.h>
bool distinct(int *a);
void main()
{
        int i,a[10];
        printf("Enter array 10 elements : ");
        for(i=0;i<10;i++)
                scanf("%d",&a[i]);
        if(distinct(a))
                printf("This array is distinct\n");
        else
                printf("This array not distinct\n");
}
bool distinct(int *a)
{
        int i,j;
        for(i=0;i<10;i++)
        {
                for(j=i+1;j<10;j++)
                {
                        if(a[i]==a[j])
                                return false;
                }
        }
        return true;
}
```
## 45.Write a program to remove duplicate elements from a sorted array
```c
#include<stdio.h>
void main()
{
        int i,a[8];
        printf("Enter Array of 8 elements : ");
        for(i=0;i<8;i++)
                scanf("%d",&a[i]);
        int flag,j,k=0;
        for(i=0;i<8;i++)
        {
                flag=1;
                for(j=i+1;j<8;j++)
                {
                        if(a[i]==a[j])
                                flag=0;
                }
                if(flag)
                        a[k++]=a[i];
        }
        printf("After removing duplicate elements : ");
        for(i=0;i<k;i++)
                printf("%d ",a[i]);
}
```
## 46.Write a program to find the sum of rows and columns of a 2-d array and store the sums in the same array.
```c
#include<stdio.h>
void main()
{
        int rsum,csum,i,j,a[4][4];
        printf("Enter 4*4 matrix : ");
        for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                        scanf("%d",&a[i][j]);
        }
        int k=4,l=4;
        for(i=0;i<4;i++)
        {
                rsum=0;
                csum=0;
                for(j=0;j<4;j++)
                {
                        rsum+=a[i][j];
                        csum+=a[j][i];
                }
                a[i][k]=rsum;
                a[k][i]=csum;
        }
        for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                        printf("%d ",a[i][j]);
                printf("\n");
        }
}
```
## 47.Write a program to print Spiral Matrix.
```c
#include<stdio.h>
void print(int n,int a[n][n]);
void spiral(int n);
void main()
{
        int n;
        printf("Enter Which Matrix do you want?");
        scanf("%d",&n);
        spiral(n);
}
void print(int n,int a[n][n])
{
        int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                        printf("%4d",a[i][j]);
                printf("\n");
        }
}
void spiral(int n)
{
        int a[n][n];
        int i,num=1;
        int left=0,right=n-1,top=0,bottom=n-1;
        while(left<=right && top<=bottom)
        {
                for(i=left;i<=right;i++)
                        a[top][i]=num++;
                top++;
                for(i=top;i<=bottom;i++)
                        a[i][right]=num++;
                right--;
                if(top<=bottom)
                {
                        for(i=right;i>=left;i--)
                                a[bottom][i]=num++;
                        bottom--;
                }
                if(left<=right)
                {
                        for(i=bottom;i>=top;i--)
                                a[i][left]=num++;
                        left++;
                }
        }
        print(n,a);
}
```
## 48. Write a recursive function that finds the sum of all elements of an array by repeatedly partitioning it into two almost equal parts
```c
#include<stdio.h>
int re_sum(int a[],int,int);
void main()
{
        int a[10]={1,2,3,4,5,6,7,8,9,10};
        int sum=re_sum(a,0,9);
        printf("Sum is %d\n",sum);
}
int re_sum(int a[],int s,int e)
{
        if(s>e)
                return 0;
        if(s==e)
                return a[s];
        int mid=(s+(e-s))/2;
        int left += re_sum(a,s,mid);
        int right += re_sum(a,mid+1,e);
        return left+right;
}
```
## 49. Write a recursive function to find the sum of all even numbers in an array
```c
#include<stdio.h>
int sum(int *a,int);
void main()
{
        int i,a[8];
        printf("Enter array of 8 elements : ");
        for(i=0;i<8;i++)
                scanf("%d",&a[i]);
        printf("Sum of all even numbers in array is : %d\n",sum(a,0));
}
int sum(int *a,int i)
{
        int su=0;
        if(i==8)
                return su;
        if(*a%2==0)
        {
                su=*a;
                su=su+sum(a+1,i+1);
        }
        else
                su=su+sum(a+1,i+1);
        return su;
}
```
## 50.Write a recursive function to find whether the elements of an array are in strict ascending order or not.
```c
#include<stdio.h>
int ascending(int* a,int);
void main()
{
        int i,a[8];
        printf("Enter an array of 8 elements : ");
        for(i=0;i<8;i++)
                scanf("%d",&a[i]);
        if(ascending(a,0))
                printf("array is ascending order \n");
        else
                printf("Not ascending order\n");
}
int ascending(int *a,int i)
{
        if(i==8)
                return 1;
        if(a[0]<a[1])
                return ascending(a+1,i+1);
        else
                return 0;
}
```
## 51. Write a recursive function to reverse the elements of an array
```c
#include<stdio.h>
void print(int a[],int);
void main()
{
        int a[10]={1,2,3,4,5,6,7,8,9,10};
        print(a,0);
}
void print(int a[],int i)
{
        if(i==10)
                return;

        print(a+1,i+1);
        printf("%d ",*a);
}
```


