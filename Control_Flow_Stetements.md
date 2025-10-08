## 1.WRITE A C PROGRAM TO ACCEPT TWO INTEGERS AND CHECK WHETHER THEY ARE EQUAL OR NOT?
```c
#include<stdio.h>
void main()
{
        int a,b;
        printf("Enter element a : ");
        scanf("%d",&a);
        printf("Enter element b : ");
        scanf("%d",&b);
        if(a==b)
                printf("a and b are Equal.\n");
        else
                printf("a and b are not Equal.\n");
}
```
## 2.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS EVEN OR ODD?
```c
#include<stdio.h>
void main()
{
        int a;
        printf("Enter any Number : ");
        scanf("%d",&a);
        if(a%2==0)
                printf("%d is a Even\n",a);
        else
                printf("%d is a ODD\n",a);
}
```
## 3.POSITIVE OR NEGATIVE
```c
#include<stdio.h>
void main()
{
        int a;
        printf("Enter any number : ");
        scanf("%d",&a);
        if(a>=0)
                printf("positive number\n");
        else
                printf("negative number\n");
}
```
## 4.LEAP YEAR OR NOT?
```c
#include<stdio.h>
void main()
{
        int year;
        printf("Enter any Year : ");
        scanf("%d",&year);
        if( year%4==0 && year%100!=0 ||year%400==0)
                printf("%d is a leap year\n",year);
        else
                printf("%d is not a leap year\n",year);
}
```

## 10.FIND MINIMUM OR MAXIMUM BETWEEN TWO NUMBERS?
```c
#include<stdio.h>
void main()
{
        int a,b;
        printf("Enter any Number : ");
        scanf("%d%d",&a,&b);
        if(a==b)
                printf("Both are Equal\n");
        else if(a>b)
                printf("%d is maximum and %d is minimum\n",a,b);
        else
                printf("%d is maximum and %d is minimum\n",b,a);
}
```
## 11.TO ENTER WEEK NUMBER AND PRINT DAY OF WEEK
```c
#include<stdio.h>
void main()
{
        int w;
        printf("Enter valid week number : ");
        scanf("%d",&w);
        switch(w)
        {
                case 0 :printf("Sunday\n");
                        break;
                case 1 :printf("Monday\n");
                        break;
                case 2 :printf("Tuesday\n");
                        break;
                case 3 :printf("Wednessday\n");
                        break;
                case 4 :printf("Thursday\n");
                        break;
                case 5 :printf("Friday\n");
                        break;
                case 6 :printf("Saturday\n");
                        break;
                default:
                        printf("invalid Number\n");
        }
}
```
## 12.CHARACTER IS UPPERCASE OR LOWERCASE
```c
#include<stdio.h>
void main()
{
        char ch;
        printf("Enter any alphabet : ");
        scanf("%c",&ch);
        if(ch>64 && ch<91)
                printf("%c is Upper case\n",ch);
        else if(ch>96 && ch<123)
                printf("%c is Lower case\n",ch);
        else
                printf("%c is Non Alphabet\n",ch);
}
```
## 13. TO FIND NUMBER OF DAYS IN MONTH
```c
#include<stdio.h>
void main()
{
        int month;
        printf("Enter any month : ");
        scanf("%d",&month);
        switch(month)
        {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        printf("In this month have 31 Days\n");
                       break;
                case 4: case 6: case 9: case 11:
                        printf("In this month have 30 Days\n");
                        break;
                case 2: printf("In this month have 28 or 29 Days\n");
                        break;
                default:
                        printf("Invalid Month\n");
        }
}
```
## 14. FIND MAXIMUM BETWEEN TWO NUMBERS USING SWITCH CASE
```c
#include<stdio.h>
void main()
{
        int a,b;
        printf("Enter any Two Numbers : ");
        scanf("%d%d",&a,&b);
        switch(a>b)
        {
                case 0: printf("%d is maximum\n",b);
                        break;
                case 1: printf("%d is maximun\n",a);
        }
}
```
## 15.TO PRINT EVEN NUMBERS BETWEEN 1 TO 20 USING A FOR LOOP
```c
#include<stdio.h>
void main()
{
        printf("Even numbers b/w 1 to 20 : ");
        int i;
        for(i=1;i<=20;i++)
        {
                if(i%2==0)
                        printf("%d ",i);
        }
        printf("\n");
}
```
## 16.TO CALCULATE THE SUM OF NUMBERS FROM 1 TO 100 USING A WHILE LOOP
```c
#include<stdio.h>
void main()
{
        int sum=0,i=1;
        while(i<101)
        {
                sum+=i;
                i++;
        }
        printf("sum of 1 to 100 is %d\n",sum);
}
```
## 17.FIND THE FACTORIAL OF A GIVEN NUMBER USING A FOR LOOP?
```c
#include<stdio.h>
void main()
{
        int fact=1,i,n;
        printf("Enter any number : ");
        scanf("%d",&n);
        if(n<0)
                printf("No Factorial for Negative Numbers\n");
        else
        {
                if(n==0)
                        fact=1;
                for(i=1;i<=n;i++)
                        fact*=i;
                printf("factorial od %d is %d\n",n,fact);
        }
}
```
## 18. CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT USING A WHILE LOOP
```c
#include<stdio.h>
void main()
{
        int i=2,c=0,n;
        printf("Enter any number :");
        scanf("%d",&n);
        while(i<n/2)
        {
                if(n%i==0)
                {
                        c=1;
                        break;
                }
                i++;
        }
        if(c==0)
                printf("%d is prime \n",n);
        else
                printf("%d is not prime\n",n);
}
```
## 19. TO FIND THE SUM OF DIGITS OF A NUMBER USING A WHILE LOOP?
```c
#include<stdio.h>
void main()
{
        int num,sum=0;
        printf("enter any number : ");
        scanf("%d",&num);
        int n=num;
        while(n)
        {
                sum+=(n%10);
                n/=10;
        }
        printf("Sum %d of digits is %d\n",num,sum);
}
```
## 20.TO PRINT FIBONACCI SERIES UP TO N TERMS USING A FOR LOOP
```c
#include<stdio.h>
void main()
{
        int i,num,n1=0,n2=1,n3;
        printf("enter upto number : ");
        scanf("%d",&num);
        printf("%d %d ",n1,n2);
        for(i=1;i<num-1;i++)
        {
                n3=n1+n2;
                printf("%d ",n3);
                n1=n2;
                n2=n3;
        }
        printf("\n");
}
```
## 21.TO REVERSE A GIVEN NUMBER USING A WHILE LOOP?
```c
#include<stdio.h>
void main()
{
        int r,rev=0,num;
        printf("Enter a number :");
        scanf("%d",&num);
        while(num)
        {
                r=num%10;
                rev=rev*10+r;
                num/=10;
        }
        printf("Reverse number is %d\n",rev);
}
```
## 22.TO FIND THE LARGEST ELEMENT IN AN ARRAY USING A FOR LOOP
```c
#include<stdio.h>
void main()
{
        int i,max;
        int a[9]={2,4,6,8,9,7,5,3,1};
        max=a[0];
        for(i=1;i<9;i++)
        {
                if(max<a[i])
                      max=a[i];
        }
        printf("In array maximum = %d\n",max);
}
```
## 23.TO FIND THE SMALLEST ELEMENT IN AN ARRAY USING A WHILE LOOP
```c
#include<stdio.h>
void main()
{
        int i=0,min;
        int a[9]={2,4,6,8,9,7,5,3,1};
        min=a[0];
        while(i<9)
        {
                if(min>a[i])
                        min=a[i];
                i++
        }
        printf("In array minimum = %d\n",min);
}
```
## 24.TO PRINT ALL THE ELEMENTS OF AN ARRAY USING A FOR LOOP
```c
#include<stdio.h>
void main()
{
        int i;
        int a[9];
        for(i=0;i<9;i++)
        {
                printf("Enter %d element : ",i+1);
                scanf("%d",&a[i]);
        }
        printf("\n");
        for(i=0;i<9;i++)
                printf("%d ",a[i]);
        printf("\n");
}
```
## 25.TO FIND THE SUM OF ELEMENTS IN AN ARRAY USING A WHILE LOOP
```c
#include<stdio.h>
void main()
{
        int i=0,sum=0;
        int a[10]={10,2,4,6,8,9,7,5,3,1};
        while(i<10)
                sum+=a[i++];
        printf("sum of array is %d\n",sum);
}
```
## 26.COUNT THE NUMBER OF VOWELS IN A GIVEN STRING USING A FOR LOOP?
```c
#include<stdio.h>
void main()
{
        int i,c=0;
        char str[]="sreenivasulu";
        for(i=0;str[i]!='\0';i++)
        {
                if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                        c++;
        }
        printf("count vowels in string is %d\n",c);
}
```
## 27.COUNT THE NUMBER OF WORDS IN A GIVEN STRING USING A WHILE LOOP?
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char str[50]="boya seenu and geetha both are friends";
        int n=strlen(str);
        int c=0,j=0;
        while(str[j]!='\0')
        {
                while(str[j]==' ')
                        j++;
                while(str[j]!=' ' && j<n)
                {
                        putchar(str[j]);
                        j++;
                }
                c++;
                printf("\n");
        }
        printf("count of Words %d\n",c);
}
```
## 28..WRITE A C PROGRAM TO CHECK WHETHER A GIVEN STRING IS A PALINDROME OR NOT USING A FOR LOOP
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char temp,str[10];
        printf("Enter a string : ");
        scanf("%s",str);
        int flag=0,i=0,j=strlen(str)-1;
        for(i,j;i<j;i++,j--)
        {
                if(str[i]!=str[j])
                {
                        flag=1;
                        break;
                }
        }
        if(flag==0)
                printf("%s is palindrome string\n",str);
        else
                printf("%s is not palin string\n",str);
}
```
## 29.WRITE A C PROGRAM TO CONCATENATE TWO STRINGS WITHOUT USING LIBRARY FUNCTIONS USING A WHILE LOOP?
```c
#include<stdio.h>
#include<string.h>
char* scat(char*,char*);
void main()
{
        char str1[30],str2[15];
        printf("Enter two strings : ");
        gets(str1);
        gets(str2);
        int i,l1=strlen(str1);
        int l2=strlen(str2);
        scat(str1,str2);
        /*for(i=0;i<l2;i++)
                str1[l1++]=str2[i]; */
        puts(str1);
        puts(str2);
}
char* scat(char* str1,char* str2)
{
        char* p=str1;
        while(*str1!='\0')
              str++;
        while(*str1=*str2)
        {
              str1++;
              str2++;
        }
        return p;
}
```
## 30.WRITE A C PROGRAM TO FIND THE LENGTH OF A STRING USING A FOR LOOP?
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char str[15];
        printf("Enter a string : ");
        fgets(str,15,stdin);
        int i,n=strlen(str),l=0;
        for(i=0;str[i]!='\0';i++)
                l++;
        printf("length using for loop : %d\n",l);
       printf("length using lib %d\n",n);
}
```
## 31.WRITE A C PROGRAM TO CONVERT A STRING TO UPPERCASE USING A WHILE LOOP?
```c
#include<stdio.h>
void main()
{
        char s[15];
        printf("Enter a string : ");
        fgets(s,15,stdin);
        int i=0;
        while(s[i]!='\0')
        {
                if(s[i]>96 && s[i]<123)
                        s[i]-=32;
                i++;
        }
        puts(s);
}
```
## 32.WRITE A C PROGRAM TO FIND THE POWER OF A NUMBER USING A FOR LOOP?
```c
//power of a num using for loop
#include<stdio.h>
void main()
{
        int i,res=1,base,power;
        printf("Enter base and power : ");
        scanf("%d%d",&base,&power);
        for(i=1;i<=power;i++)
                res*=base;
        printf("%d power of %d is %d\n",base,power,res);
}
```
## 33.WRITE A C PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING A WHILE LOOP?
```c
#include<stdio.h>
void main()
{
        int i=1,fact=1,n;
        printf("Enter a number : ");
        scanf("%d",&n);
        while(i<=n)
        {
                fact*=i;
                i++;
        }
        printf("factorial of %d is %d\n",n,fact);
}
```
## 34.WRITE A C PROGRAM TO FIND THE GCD OF TWO NUMBERS USING A WHILE LOOP
```c
#include<stdio.h>
void main()
{
        int a,b;
        printf("Enter two Numbers : ");
        scanf("%d%d",&a,&b);
        printf("Gcd of %d and %d is : ",a,b);
        while(a!=b)
        {
                if(a>b)
                        a-=b;
                if(b>a)
                        b-=a;
        }
        printf("%d\n",a);
}
```
## 35..WRITE A C PROGRAM TO FIND THE LCM OF TWO NUMBERS USING A FOR LOOP?
```c
#include<stdio.h>
void main()
{
        int max,a,b;
        printf("Enter two numbers : ");
        scanf("%d%d",&a,&b);
        max=(a>b)?a:b;
        for(;1;max++)
        {
                if(max%a==0 && max%b==0)
                        break;
        }
        printf("%d and %d lcm is %d\n",a,b,max);
}
```
## 36.WRITE A C PROGRAM TO PRINT THE MULTIPLICATION TABLE OF A GIVEN NUMBER USING A FOR LOOP
```c
#include<stdio.h>
void main()
{
        int i,num;
        printf("Table number : ");
        scanf("%d",&num);
        for(i=1;i<=10;i++)
        {
                printf("%3d * %3d = %3d\n",num,i,num*i);
        }
}
```
## 37.WRITE A PROGRAM IN C TO PRINT THE ARMSTRONG NUMBERS BETWEEN 1 AND 1000 USING A FOR LOOP?
```c
#include<stdio.h>
#include<math.h>
void main()
{
        int i,res,n,r,c;
        printf("Armstrong numbers 1 to 1000 are : ");
        for(i=1;i<1000;i++)
        {
                c=0;
                n=i;
                while(n)
                {
                        c++;
                        n/=10;
                }
                n=i;
                res=0;
                while(n)
                {
                        r=n%10;
                        res+=pow(r,c);
                        n/=10;
                }
                if(i==res)
                        printf("%d ",i);
        }
        printf("\n");
}
```
## 38.WRITE A PROGRAM IN C TO IMPLEMENT A SIMPLE CALCULATOR USING SWITCH-CASE STATEMENTS?
```c
#include<stdio.h>
#include<stdlib.h>
void main()
{
        int a,b,c,ch;
        while(1)
        {
                printf("1.add\n2.diff\n3.mul\n4.division\n5.rem\n6.exit\n");   
                printf("Enter choice : ");
                scanf("%d",&ch);
                printf("Enter a and b : ");
                scanf("%d%d",&a,&b);
               
                switch(ch)
                {
                        case 1: c=a+b;
                                printf("sum is %d\n",c);
                                break;
                        case 2: c=a-b;
                                printf("diffe is %d\n",c);
                                break;
                        case 3:
                                c=a*b;
                                printf("Mul is %d\n",c);
                                break;
                        case 4: c=a/b;
                                printf("Division is %d\n",c);
                                break;
                        case 5: c=a%b;
                                printf("Rem is %d\n",c);
                                break;
                        case 6: 
                                exit(1);
                        default:
                                printf("Invalid invalid please enter valid choice\n");
                }
        }
}
```
## 39.WRITE A PROGRAM IN C TO CHECK WHETHER A GIVEN NUMBER IS A PALINDROME OR NOT USING WHILE LOOPS AND IF-ELSE STATEMENTS
```c
#include<stdio.h>
void main()
{
        int num,rev=0,temp;
        printf("Enter a Number : ");
        scanf("%d",&num);
        temp=num;
        while(temp)
        {
                rev=rev*10+(temp%10);
                temp/=10;
        }
        if(rev==num)
                printf("%d is palindrome\n",num);
        else
                printf("%d is not palindrome\n",num);
}
```
## 40.WRITE A PROGRAM IN C TO FIND THE SUM OF ELEMENTS IN THE LOWER TRIANGULAR MATRIX USING LOOPS AND IF-ELSE STATEMENTS
```c
#include<stdio.h>
void main()
{
        int a[3][3]={1,4,7,2,5,8,3,6,9};
        int i,j,sum=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<=i;j++)
                {
                        printf("%d ",a[i][j]);
                        sum+=a[i][j];
                }
                printf("\n");
        }
        printf("Sum of Lower Matrix is : %d\n",sum);
}
```
## 41.WRITE A PROGRAM IN C TO FIND THE SUM OF ELEMENTS IN THE UPPER TRIANGULAR MATRIX USING LOOPS AND IF-ELSE STATEMENTS?
```c
#include<stdio.h>
void main()
{
        int a[3][3]={1,4,7,2,5,8,3,6,9};
        int i,j,sum=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<=i;j++)
                        printf("  ");
                for(j=i;j<3;j++)
                {
                        printf("%d ",a[i][j]);
                        sum+=a[i][j];
                }
                printf("\n");
        }
        printf("Sum of Upper triangle is : %d\n",sum);
}
```
## 42.WRITE A PROGRAM IN C TO REMOVE DUPLICATE ELEMENTS FROM AN ARRAY
```c
//remove duplicate elements
#include<stdio.h>
void main()
{
        int a[10]={8,1,3,9,4,5,8,3,5,4};
        int du,uni=0,i,j,temp[10];
        for(i=0;i<10;i++)
        {
                du=0;
                for(j=0;j<uni;j++)
                {
                        if(a[i]==a[j])
                        {
                                du=1;
                                break;
                        }
                }
                if(!du)
                        temp[uni++]=a[i];

        }
        for(i=0;i<uni;i++)
                a[i]=temp[i];
        for(i=0;i<uni;i++)
                printf("%d ",a[i]);
}
```
## 43.WRITE A PROGRAM IN C TO SORT AN ARRAY OF INTEGERS IN ASCENDING ORDER
```c
#include<stdio.h>
void main()
{
        int a[8]={8,75,96,25,15,45,36,69};
        int i,j,temp;
        for(i=0;i<8;i++)
        {
                for(j=i;j<8;j++)
                {
                        if(a[i]>a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        for(i=0;i<8;i++)
                printf("%d ",a[i]);
        printf("\n");
}
```
## 44.WRITE A PROGRAM IN C TO SORT AN ARRAY OF INTEGERS IN DESCENDING ORDER
```c
#include<stdio.h>
void main()
{
        int a[8]={23,54,76,87,13,49,98,37};
        int i,j,temp;
        for(i=0;i<8;i++)
        {
                for(j=i;j<8;j++)
                {
                        if(a[i]<a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        printf("Descending Order : ");
        for(i=0;i<8;i++)
                printf("%d ",a[i]);
        printf("\n");
}
```
## 45.WRITE A PROGRAM IN C TO FIND THE SECOND LARGEST ELEMENT IN AN ARRAY
```c
#include<stdio.h>
void main()
{
        int a[8]={21,34,65,78,93,88,49,55};
        int i,max,smax;
        max=smax=a[0];
        for(i=0;i<8;i++)
        {
                if(max<a[i])
                        max=a[i];
                if(smax<a[i] && max!=a[i])
                        smax=a[i];
        }
        printf("Max=%d second max=%d\n",max,smax);
}
```
## 46.WRITE A PROGRAM IN C TO FIND THE FREQUENCY OF EACH ELEMENT IN AN ARRAY
```c
#include<stdio.h>
void main()
{
        int a[8]={23,54,23,76,87,54,65,23};
        int freq,i=0;
        int j,temp[8];
        while(i<8)
                temp[i++]=-1;

        for(i=0;i<8;i++)
        {
                if(temp[i]==-1)
                {
                        freq=0;
                        for(j=i;j<8;j++)
                        {
                                if(a[i]==a[j])
                                {
                                        freq++;
                                        temp[j]=0;
                                }
                        }
                        printf("%d is : %d\n",a[i],freq);
                }
        }
}
```
## 47.WRITE A PROGRAM IN C TO CHECK WHETHER A MATRIX IS AN IDENTITY MATRIX
```c
#include<stdio.h>
void main()
{
        int a[3][3]={1,0,0,0,1,0,0,0,1};
        int i,j,flag=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        if(i==j)
                        {
                                if(a[i][j]!=1)
                                {
                                        flag=1;
                                        break;
                                }
                        }
                        else
                        {
                                if(a[i][j]!=0)
                                {
                                        flag=1;
                                        break;
                                }
                        }
                }
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%d ",a[i][j]);
                printf("\n");
        }
        if(flag==0)
                printf("Given Matrix is Identity Matrix\n");
        else
                printf("Not Identity matrix\n");
}
```
## 48.WRITE A C PROGRAM TO PRINT ALL THE ODD NUMBERS BETWEEN 1 TO 50 USING A FOR LOOP?
```c
#include<stdio.h>
void main()
{
        int i;
        printf("Odd Numbers between 1 to 50 : ");
        for(i=1;i<50;i++)
        {
                if(i%2!=0)
                        printf("%d ",i);
        }
        printf("\n");
}
```
## 49.WRITE A PROGRAM IN C TO FIND THE SUM OF ELEMENTS IN EACH COLUMN OF A MATRIX 
```c
#include<stdio.h>
void main()
{
        int a[3][3]={2,4,6,8,9,7,5,3,1};
        int i,j,sum;
        for(i=0;i<3;i++)
        {
                sum=0;
                for(j=0;j<3;j++)
                {
                        sum+=a[j][i];
                }
                printf("%d column sum is %d\n",i+1,sum);
        }
}
```
## 
