##  1. Write a Program to print the address of variables using the address operator.
```c
#include<stdio.h>
void main()
{
        int a=5;
        printf("Address of  a is %p\n",&a);
}
```
## 2. Write a program to print size of pointer variables.
```c
#include<stdio.h>
void main()
{
        int *ptr;
        char *p;
        printf("size of int ptr= %d\t size of char ptr is %d\n",sizeof(ptr),sizeof(p));
}
```
## 3. Write a program to print size of pointer variables and size of values Dereferenced by them.
```c
#include<stdio.h>
void main()
{
        int *ptr;
        printf("size of int ptr is %d\n",sizeof(ptr));
        printf("size of *ptr is %d\n",sizeof(*ptr));
}
```
##  4. Write a program to illustrate the dereferencing of pointers.
```c
#include<stdio.h>
void main()
{
        int a=5;
        int *ptr;
        ptr=&a;
        printf("*ptr=%d and a=%d\n",a,*ptr);
}
```
##  5. C program to illustrate pointer arithmetic
```c
#include<stdio.h>
void main()
{
        int a=10,b=15;
        int *aptr,*bptr;
        aptr=&a;
        bptr=&b;
        printf("sum is : %d\n",*aptr + *bptr);
        printf("difference is : %d\n",*bptr - *aptr);
        printf("Mul is : %d\n",*aptr * *bptr);
}
```
## 6. Write a program to declare an integer variable a, assign it a value, then declare a pointer variable, assign it the address of a, and finally print the value of a using the pointer variable.
```c
#include<stdio.h>
void main()
{
        int a=10;
        int *ptr=&a;
        printf("%d\n",*ptr);
}
```
## 7. Write a program to print postfix/prefix increment/decrement in a pointer variable of base type int*.
```c
#include<stdio.h>
void main()
{
        int a=10;
        int *ptr=&a;
        printf("preincrement is %d\n",++(*ptr));
        printf("predecrement is %d\n",--(*ptr));
        printf("post incre is %d\n",(*ptr)++);
        printf("post decrement is %d\n",(*ptr)--);
}
```
## 8.  Write a Program to print the value and address of  elements of an array using pointers notation.
```c
#include<stdio.h>
void main()
{
        int arr[6]={10,20,30,40,50,60};
        int *ptr=arr;
        int i;
        for(i=0;i<6;i++)
        {
                printf("address of %d element is %p\t",i+1,arr+i);
                printf("value of %d elemnt is %d\n",i+1,*(arr+i));
        }
}
```
## 9. Write a program to print the value of array elements  using pointers and subscript notation.
```c
#include<stdio.h>
void main()
{
        int arr[6]={10,20,30,40,50,60};
        int *ptr=arr;
        int i;
        printf("pointer notation\n");
        for(i=0;i<6;i++)
                printf("value of %d elemnt is %d\n",i+1,*(ptr+i));
        printf("subscript notation\n");
        for(i=0;i<6;i++)
                printf("value of %d elemnt is %d\n",i+1,ptr[i]);
}
```
## 10. Write a program to print the value and address of array elements by subscripting  a pointer  variable.
```c
#include<stdio.h>
void main()
{
        int arr[6]={10,20,30,40,50,60};
        int *ptr=arr;
        int i;
        for(i=0;i<6;i++)
        {
                printf("address of %d element is %p\t",i+1,ptr+i);
                printf("value of %d elemnt is %d\n",i+1,*(ptr+i));
        }
}
```
## 13. program  to print the values  and address  of elements of 2-d array.
```c
#include<stdio.h>
void main()
{
        int arr[][3]={10,20,30,40,50,60};
        int i,j;
        int (*ptr)[3]=arr;
        for(i=0;i<2;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("Adderes is %p\t",((ptr+i)+j));
                        printf("value is %d\n",*((ptr+i)+j));
                }
                printf("\n");
        }
        printf("\n");
}
```
## 16. Write a  simple program for call by value.
```c
#include<stdio.h>
void main()
{
        int a=5;
        printf("call by value after :%d\n",value(a));
}
value(int n)
{
        return n;
}
```
## 17. Write a simple program for call by reference.
```c
#include<stdio.h>
void main()
{
        int a=10;
        printf("After call by reference :%d\n",ref(&a));
}
ref(int* n)
{
        return *n+1;
}
```
## 18. Program to return more than one value from a function using call by reference.
```c
#include<stdio.h>
void main()
{
        int a=5,b=8;
        ref(&a,&b);
        printf("After a=%d\t and b=%d\n",a,b);
}
void ref(int* a,int* b)
{
        *a=*a+1;
        *b=*b+1;
}
```
##  19. Write a program to pass a 1D array to a function.
```c
#include<stdio.h>
void main()
{
        int arr[6]={10,20,30,40,50,60};
        fun(arr);
        int i;
        for(i=0;i<6;i++)
                printf("%d ",arr[i]);
}
void fun(int *a)
{
        int i;
        for(i=0;i<6;i++)
                *(a+i)+=*(a+i);
}
```
##  20. Create a function that swaps two numbers using pointers.
```c
#include<stdio.h>
void main()
{
        int a=4,b=6;
        int *temp,*p=&a,*q=&b;
        *temp=*p;
        *p=*q;
        *q=*temp;
        printf("a=%d\tb=%d\n",a,b);
}
```
