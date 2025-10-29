## find wheather a number is Even or ODD
```c
//even or odd
#include<stdio.h>
void main()
{
        int num;
        printf("Enter a Number ");
        scanf("%d",&num);
        if(num&1==0)
                printf("Its a Even \n");
        else
                printf("Its a Odd\n");
}
```
## clear right most bit
```c
//clear rightmost bit
#include<stdio.h>
void display(int num)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(num>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
void main()
{
        int num;
        printf("Enter a Number : ");
        scanf("%d",&num);
        display(num);
        display(num&(num-1));
}
```
## exact power of 2 or not
```c
//exact power of 2 or not
#include<stdio.h>
void display(int num)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(num>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
void main()
{
        int num;
        printf("Enter a Number : ");
        scanf("%d",&num);
        display(num);
        if((num&(num-1))==0)
                printf("It is exact power of 2\n");
        else
                printf("it is not a power of 2\n");

}
```
## count set bits
```c
//count set bits
#include<stdio.h>
void display(int num)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(num>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
void main()
{
        int num,count=0;
        printf("Enter a Number : ");
        scanf("%d",&num);
        display(num);
        while(num)
        {
                if((num&1)!=0)
                        count++;
                num/=2;
        }
        printf("count of set bits is %d\n",count);
}
```
## 
