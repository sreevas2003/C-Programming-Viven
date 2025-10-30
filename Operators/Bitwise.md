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
## first value of n bits at starting position P is replace with right most n bits of second value
```c
#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
int fun(int x,int y,int p,int n)
{
        int m=~((~0<<n))<<p-n+1;
        x&=~m;
        return x| ((y<<p-n+1)&m);
}

void main()
{
        int x,y,pos,bit;
        printf("Enter X value : ");
        scanf("%i",&x);
        printf("Enter Y value : ");
        scanf("%i",&y);
        display(x);
        display(y);
        printf("Enter position : ");
        scanf("%d",&pos);
        printf("Enter no of bits : ");
        scanf("%d",&bit);

        x=fun(x,y,pos,bit);
        display(x);
}
```
## first value of n bits at starting position P is replace with n bits of second value at same position
```c

#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
int fun(int x,int y,int p,int n)
{
        int m=~((~0<<n))<<p-n+1;
        x&=~m;
        return x| (y&m);
}

void main()
{
        int x,y,pos,bit;
        printf("Enter X value : ");
        scanf("%i",&x);
        printf("Enter Y value : ");
        scanf("%i",&y);
        display(x);
        display(y);
        printf("Enter position : ");
        scanf("%d",&pos);
        printf("Enter no of bits : ");
        scanf("%d",&bit);
        x=fun(x,y,pos,bit);
        display(x);
}
```
## Write a program to manipulate bits from i position to j position
```c
#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
void main()
{
        int num,f,t;
        printf("Enter a Number : ");
        scanf("%i",&num);
        printf("From and to : ");
        scanf("%d%*c%d",&f,&t);
        display(num);
        int m=~(~0<<t-f+1)<<f;
        //to set
        display(num|m);
        //to clear
        display(num&m);
        //to invert
        display(num^m);
}
```
## swap two variables using bitwise operator
```c
#include<stdio.h>
void main()
{
        int x,y;
        printf("Enter X and Y : ");
        scanf("%d%d",&x,&y);
        printf("x=%d and y=%d\n",x,y);
        x=x^y;
        y=x^y;
        x=x^y;
        printf("x=%d and y=%d\n",x,y);
}
```
## find Two's Compliment of a Number
```c
#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
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
        printf("Two's compliment is : ");
        display(~num+1);
        int i;
        for(i=0;i<32;i++)
        {
                if((num&(1<<i))!=0)
                        break;
        }
        for(i=i+1;i<32;i++)
                num=num^1<<i;
        printf("Two's compliment : ");

        display(num);
}
```
## find next highest power of 2
```c

#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
int nexthigh(int n)
{
        if(n&&!(n&(n-1)))
                return n;
        int i=-1;
        while(n)
        {
                n=n>>1;
                i++;
        }
        return 1<<i+1;
}
void main()
{
        int num;
        printf("Enter a Number : ");
        scanf("%d",&num);
        display(num);
        display(nexthigh(num));
        printf("%d\n",nexthigh(num));
}
```
## right and left Rotations of N bits of a Number
```c
#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
int rightrotate(int num,int n)
{
        return ((num>>n)|(num<<32-n));
}
int leftrotate(int num,int n)
{
        return ((num<<n)|(num>>32-n));
}
void main()
{
        int n,num;
        printf("Enter a Number : ");
        scanf("%d",&num);
        display(num);
        printf("Enter rotation bits : ");
        scanf("%d",&n);
        n%=32;
        display(rightrotate(num,n));
        display(leftrotate(num,n));
}
```
## reverse a Number
```c
#include<stdio.h>
void display(int n)
{
        int i;
        for(i=31;i>=0;i--)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
void reverse(int n)
{
        int i;
        for(i=0;i<32;i++)
        {
                printf("%d",(n>>i)&1);
                if(i%8==0 && i!=0)
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
        reverse(num);
}
```

