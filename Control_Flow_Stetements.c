** 1.WRITE A C PROGRAM TO ACCEPT TWO INTEGERS AND CHECK WHETHER THEY ARE EQUAL OR NOT? **
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
## 5.ELIGIBLE TO CAST VOTE or Not
```c
//eligible for vote
#include<stdio.h>
void main()
{
        int age;
        printf("Enter age of the candidata : ");
        scanf("%d",&age);
        if(age>17)
                printf("candidate is eligible for vote",\n);
        else
                printf("candidate is not eligible for vote",\n);
}
```
## 6.WRITE A C PROGRAM TO READ THE VALUE OF AN INTEGER M AND DISPLAY THE VALUE OF N IS 1 WHEN M IS LARGER THAN 0, 0 WHEN M IS 0 AND -1 WHEN M IS LESS THAN 0.
```c
#include<stdio.h>
void main()
{
        int n;
        printf("Enter Element N : ");
        scanf("%d",&n);
        if(n>0)
                printf("1\n");
        else
                printf("2\n");
}
```
## 7.FIND THE LARGEST OF THREE NUMBERS
```c
#include<stdio.h>
void main()
{
        int a,b,c;
        printf("Enter Three Values");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c)
                printf("A is greater number\n");
        else if(b>c)
                printf("B is greater number\n");
        else
                printf("C is greater number\n");
}
```
## 8.WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS A VOWEL OR CONSONANT?
```c
#include<stdio.h>
void main()
{
        char ch;
        printf("Enter any element");
        scanf("%c",&ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                printf("%c is Vowel\n",ch);
        else
                printf("%c is consonat\n",ch);
}
```
## 9.CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT
```c
#include<stdio.h>
void main()
{

        char ch;
        printf("Enter any element : ");
        scanf("%c",&ch);
        if((ch>64 && ch<91) || (ch>96 && ch<123))
               printf("%c is a Alphabet\n",ch);
        else
                printf("%c is a Non Alphabet\n",ch);
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
## 50.WRITE A PROGRAM IN C TO FIND THE SUM OF ELEMENTS IN EACH ROW OF A MATRIX
```c
//row sum
#include<stdio.h>
void main()
{
        int a[3][3]={1,9,2,8,3,7,4,6,5};
        int i,j,sum;
        for(i=0;i<3;i++)
        {
                sum=0;
                for(j=0;j<3;j++)
                {
                        sum+=a[i][j];
                }
                printf("%d row of sum is %d\n",i+1,sum);
        }
}
```
## 51.WRITE A PROGRAM IN C TO ADD TWO MATRICES
```c
#include<stdio.h>
void main()
{
        int mat1[3][3]={1,2,3,4,5,6,7,8,9},mat2[3][3]={9,8,7,6,5,4,3,2,1};
        int i,j,mat3[3][3];
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        mat3[i][j]=mat1[i][j]+mat2[i][j];
                }
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%d ",mat3[i][j]);
                printf("\n");
        }
}
```
## 52.WRITE A PROGRAM IN C TO SUBTRACT TWO MATRICES
```c
#include<stdio.h>
void main()
{
        int mat1[3][3]={9,8,7,6,5,4,3,2,1};
        int mat2[3][3]={1,2,3,4,5,6,7,8,9};
        int i,j,mat3[3][3];
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        mat3[i][j]=mat1[i][j]-mat2[i][j];
                }
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%2d ",mat3[i][j]);
                printf("\n");
        }
}
```
## 53.WRITE A PROGRAM IN C TO MULTIPLY TWO MATRICES
```c
#include<stdio.h>
void main()
{
        int a[3][3]={2,3,4,5,6,7,8,9,1};
        int b[3][3]={2,3,4,5,6,7,8,9,1};
        int c[3][3],i,j,k;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        c[i][j]=0;
                        for(k=0;k<3;k++)
                        {
                                c[i][j]+=a[i][k]*b[k][j];
                        }
                }
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%d ",c[i][j]);
        }
}
```
## 54.WRITE A PROGRAM IN C TO PRINT THE ELEMENTS OF AN ARRAY IN REVERSE ORDER
```c
#include<stdio.h>
void main()
{
        int a[10]={10,9,8,7,6,5,4,3,2,1};
        int temp,i,j;
        for(i=0,j=9;i<j;i++,j--)
        {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }
        for(i=0;i<10;i++)
                printf("%d ",a[i]);
}
```
## 55.WRITE A PROGRAM IN C TO CHECK WHETHER TWO ARRAYS ARE EQUAL OR NOT
```c
#include<stdio.h>
void main()
{
        int s,i,flag=0;
        printf("Enter size : ");
        scanf("%d",&s);
        int a[s],b[s];
        for(i=0;i<s;i++)
                scanf("%d",&a[i]);
        for(i=0;i<s;i++)
                scanf("%d",&b[i]);
        for(i=0;i<s;i++)
        {
                if(a[i]!=b[i])
                {
                        flag=1;
                        break;
                }
        }
        if(flag==0)
                printf("Two arrays are Equal\n");
        else
                printf("Not Equal\n");
}
```
## 56.WRITE A PROGRAM IN C TO FIND THE UNION OF TWO ARRAYS
```c
#include<stdio.h>
void main()
{
        int a[6]={1,2,3,4,5,6};
        int b[4]={1,5,7,8};
        int i,j,k=0,flag,temp[5];
        for(i=0;i<6;i++)
        {
                flag=0;
                for(j=0;j<4;j++)
                {
                        if(a[i]==b[j])
                        {
                                flag=1;
                                break;
                        }
                }
                if(flag==0)
                        temp[k++]=a[i];
        }
        for(i=0;i<k;i++)
                printf("%d ",temp[i]);
        printf("\n");
}
```
## 57.WRITE A PROGRAM IN C TO FIND THE INTERSECTION OF TWO ARRAYS
```c
#include<stdio.h>
void main()
{
        int i,flag,j,k=0,a[5],b[4];
        printf("Enter array A of 5 elements: ");
        for(i=0;i<5;i++)
                scanf("%d",&a[i]);
        printf("Enter array B of 4 elemnts: ");
        for(i=0;i<4;i++)
                scanf("%d",&b[i]);
        for(i=0;i<5;i++)
        {
                for(j=0;j<4;j++)
                {
                        if(a[i]==b[j])
                                printf("%d ",a[i]);
                }
        }
        printf("\n");
}
```
## 58.WRITE A PROGRAM IN C TO FIND THE DIFFERENCE OF TWO ARRAYS
```c
#include<stdio.h>
void main()
{
        int mat1[3][3]={9,8,7,6,5,4,3,2,1};
        int mat2[3][3]={1,2,3,4,5,6,7,8,9};
        int i,j,mat3[3][3];
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                        mat3[i][j]=mat1[i][j]-mat2[i][j];
                }
        }
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("%2d ",mat3[i][j]);
                printf("\n");
        }
}
```
## 59.WRITE A PROGRAM IN C TO FIND THE MISSING NUMBER IN AN ARRAY CONTAINING NUMBERS FROM 1 TO N
```c
#include<stdio.h>
void main()
{
        int n,i;
        printf("Enter size N : ");
        scanf("%d",&n);
        int act_sum,expt_sum;
        act_sum=expt_sum=0;
        for(i=1;i<=n;i++)
                expt_sum+=i;
        printf("Enter array elements %d : ",n-1);
        int a[n-1];
        for(i=0;i<n-1;i++)
        {
                scanf("%d",&a[i]);
                act_sum+=a[i];
        }
        int mis=expt_sum-act_sum;
        if(mis>0 && mis<n)
                printf("Missing Number is : %d\n",mis);
        else
                printf("Not find\n");
}
```
## 60.WRITE A PROGRAM IN C TO FIND THE MAJORITY ELEMENT IN AN ARRAY
```c
#include<stdio.h>
void main()
{
        int a[8]={5,8,9,5,6,4,5,8};
        int i=0,j,ele,c,pc=0;
        int temp[8];
        while(i<8)
                temp[i++]=-1;
        for(i=0;i<8;i++)
        {
                if(temp[j]==-1)
                {
                        c=0;
                        for(j=0;j<8;j++)
                        {
                                if(a[i]==a[j])
                                {
                                        c++;
                                        temp[j]=0;
                                }
                        }
                        if(pc<c)
                        {
                                ele=a[i];
                                pc=c;
                        }
                }
        }
        printf("Majority element is %d is %d times\n",ele,c);
}
```
## 61.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS USING NESTED LOOPS?
```c
#include<stdio.h>
void main()
{
        int i,j;
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        printf("* ");
                printf("\n");
        }
}
```
## 62.WRITE A C PROGRAM TO SEARCH FOR AN ELEMENT IN AN ARRAY USING LINEAR SEARCH AND A FOR LOOP
```c
#include<stdio.h>
void main()
{
        int a[10]={1,4,5,2,7,9,0,8,6,3};
        int i,se;
        for(i=0;i<10;i++)
                printf("%d ",a[i]);
        printf("Enter search element : ");
        scanf("%d",&se);
        for(i=0;i<10;i++)
        {
                if(se==a[i])
                {
                        printf("Element found at %d index\n",i);
                        break;
                }
        }
}
```
## 63.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS A PALINDROME IN BOTH DECIMAL AND BINARY REPRESENTATIONS
```c
#include<stdio.h>
void main()
{
        int num;
        printf("Enter a Number : ");
        scanf("%d",&num);
        int rev=0,n=num;
        while(n)
        {
                rev=rev*10+(n%10);
                n/=10;
        }
        n=num;
        int bin=0,r,re=0,a=1;
        while(n)
        {
                r=n%2;
                re=re+a*r;
                a*=10;
                n/=2;
        }
        n=re;
        int br=0;
        while(n)
        {
                br=br*10+(n%10);
                n/=10;
        }
        if(num==rev && re==br)
                printf("Both palindrome\n");
        else
                printf("Both not palindrome\n");

}
```
## 64.WRITE A C PROGRAM TO FIND THE SUM OF FIRST N NATURAL NUMBERS WHICH ARE NOT DIVISIBLE BY 3 OR 5
```c
#include<stdio.h>
void main()
{
        int i,sum=0,n;
        printf("Enter N value : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(i%3==0 || i%5==0)
                        continue;
                else
                        sum+=i;
        }
        printf("Without 3 or 5 divisible\n1 to %d of Sum is %d\n",n,sum);
}
```
## 65.WRITE A C PROGRAM TO FIND THE SUM OF ALL EVEN NUMBERS BETWEEN TWO GIVEN NUMBERS
```c
#include<stdio.h>
void main()
{
        int i,sum=0,n;
        printf("Enter N value : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(i%2==0)
                        sum+=i;
        }
        printf("Sum of even numbers b/w 1 to %d is : %d\n",n,sum);
}
```
## 66.WRITE A C PROGRAM TO FIND THE SUM OF ALL ODD NUMBERS BETWEEN TWO GIVEN NUMBERS
```c
#include<stdio.h>
void main()
{
        int i,n,sum=0;
        printf("Enter N value : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(i%2!=0)
                        sum+=i;
        }
        printf("Odd sum of 1 to %d is %d\n",n,sum);
}
```
## 67.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS A PERFECT SQUARE OR NOT
```c
//perfect square
#include<stdio.h>
#include<math.h>
void main()
{
        int num;
        printf("Enter any Number : ");
        scanf("%d",&num);
        int n=sqrt(num);
        if(n*n==num)
                printf("%d is a perfect Number\n",num);
        else
                printf("%d is not perfect square\n",num);
}
```
## 68.WRITE A C PROGRAM TO CALCULATE THE POWER OF A NUMBER
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
## 69.WRITE A C PROGRAM TO FIND THE ASCII VALUE OF A CHARACTER
```c
#include<stdio.h>
void main()
{
        char ch;
        printf("Enter any character : ");
        scanf("%c",&ch);
        int a;
        if(ch>64 && ch<91)
                a=ch;
        else if (ch>96 && ch<123)
                a=ch;
        else
                printf("Invalid character\n");
        printf("Ascii value is : %d\n",a);
}
```
## 70.WRITE A C PROGRAM TO FIND THE AREA OF A CIRCLE GIVEN ITS RADIUS 
```c
#include<stdio.h>
#define PI 3.14
void main()
{
        int r;
        float area;
        printf("Enter radius : ");
        scanf("%d",&r);
        area = PI*r*r;
        printf("Area of circle is %.2f\n",area);
}
```
## 71.WRITE A C PROGRAM TO FIND THE SUM OF ALL PRIME NUMBERS BETWEEN 1 AND 1000
```c
#include<stdio.h>
#include<math.h>
void main()
{
        int i,j,flag,sum=0;
        printf("1 to 1000 Prime Numbers : ");
        for(i=1;i<=1000;i++)
        {
                flag=0;
                for(j=2;j<sqrt(i);j++)
                {
                        if(i%j==0)
                        {
                                flag=1;
                                break;
                        }
                }
                if(flag==0)
                {
                        sum+=i;
                        printf("%d ",i);
                }
        }
        printf("\n1 to 1000 prime number sum is : %d\n",sum);
}
```
## 72.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A HOLLOW SQUARE SHAPE
```c
//hollow square shape
#include<stdio.h>
void main()
{
        int i,j;
        printf("Hollow Square Shape pattern : \n");
        for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                        if(i==0 || i==3 || j==0 || j==3)
                                printf("* ");
                        else
                                printf("  ");
                }
                printf("\n");
        }
}
```
## 73.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A RIGHT TRIANGLE SHAPE
```c
#include<stdio.h>
void main()
{
        int i,j;
        printf("Enter right angle triangle shape : \n");
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}
```
## 74.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A MIRRORED RIGHT TRIANGLE SHAPE
```c
//mirrored right angle shape
#include<stdio.h>
void main()
{
        int i,j;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                        printf("* ");
                printf("\n");
        }
}
```
## 75.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A PYRAMID SHAPE
```c
//pyramid shape
#include<stdio.h>
void main()
{
        int i,j;
        printf("Pyramid shape : \n");
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                        printf("* ");
                for(j=0;j<i;j++)
                        printf("* ");
                printf("\n");
        }
}
```
## 76.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A MIRRORED PYRAMID SHAPE
```c
//mirrored pyramid
#include<stdio.h>
void main()
{
        int i,j;
        printf("Mirrod pyramid shape : \n");
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                        printf("  ");
                for(j=0;j<4-i;j++)
                        printf("* ");
                for(j=0;j<3-i;j++)
                        printf("* ");
                printf("\n");
        }
}
```
## 77.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A DIAMOND SHAPE
```c
//diamond shape
#include<stdio.h>
void main()
{
        int i,j;
        for(i=1;i<5;i++)
        {
                for(j=1;j<5-i;j++)
                        printf("  ");
                for(j=1;j<=i;j++)
                        printf("* ");
                for(j=1;j<i;j++)
                        printf("* ");
                printf("\n");
        }
        for(i=1;i<4;i++)
        {
                for(j=1;j<=i;j++)
                        printf("  ");
                for(j=1;j<=4-i;j++)
                        printf("* ");
                for(j=1;j<4-i;j++)
                        printf("* ");
                printf("\n");
        }
}
```
## 78.WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A HOLLOW DIAMOND SHAPE
```c
//hollow diamond shape
#include<stdio.h>
void main()
{
        int i,j,k=0;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                {
                        if(j==0)
                                printf("* ");
                        else
                                printf("  ");
                }
                for(j=0;j<=i;j++)
                {
                        if(j==k)
                        {
                                k++;
                                printf("* ");
                        }
                        else
                                printf("  ");
                }
                printf("\n");
        }
        k--;
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                        printf("  ");
                for(j=0;j<4-i;j++)
                {
                        if(j==0)
                                printf("* ");
                        else
                                printf("  ");
                }
                for(j=0;j<=3-i;j++)
                {
                        if(j==k)
                        {
                                k--;
                                printf("* ");
                        }
                        else
                                printf("  ");
                }
                printf("\n");
        }
}
```
## 79.WRITE A C PROGRAM TO PRINT THE PATTERN OF NUMBERS IN A PYRAMID SHAPE
```c
//diamond shape numbers
#include<stdio.h>
void main()
{
        int i,j;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                        printf("%d ",j+1);
                for(j=0;j<=i;j++)
                        printf("%d ",j+1);
                printf("\n");
        }
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                        printf("  ");
                for(j=0;j<4-i;j++)
                        printf("%d ",j+1);
                for(j=0;j<=3-i;j++)
                        printf("%d ",j+1);
                printf("\n");
        }
}
```
## 80.WRITE A C PROGRAM TO PRINT THE PATTERN OF NUMBERS IN A MIRRORED PYRAMID SHAPE
```c
//hollow diamond shape numbers
#include<stdio.h>
void main()
{
        int i,j,k=0;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                {
                        if(j==0)
                                printf("%d ",j);
                        else
                                printf("  ");
                }
                for(j=0;j<=i;j++)
                {
                        if(j==k)
                        {
                                k++;
                                printf("%d ",j);
                        }
                        else
                                printf("  ");
                }
                printf("\n");
        }
        k--;
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                        printf("  ");
                for(j=0;j<4-i;j++)
                {
                        if(j==0)
                                printf("%d ",j);
                        else
                                printf("  ");
                }
                for(j=0;j<=3-i;j++)
                {
                        if(j==k)
                        {
                                k--;
                                printf("%d ",j);
                        }
                        else
                                printf("  ");
                }
                printf("\n");
        }
}
```
## 81.WRITE A C PROGRAM TO PRINT THE PATTERN OF NUMBERS IN A RIGHT TRIANGLE SHAPE
```c
#include<stdio.h>
void main()
{
        int i,j;
        printf("Enter right angle triangle shape : \n");
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                {
                        printf("%d ",j);
                }
                printf("\n");
        }
}
```
## 82.WRITE A C PROGRAM TO PRINT THE PATTERN OF NUMBERS IN A MIRRORED RIGHT TRIANGLE SHAPE
```c

//mirrored right angle shape
#include<stdio.h>
void main()
{
        int i,j;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                        printf("%d ",j);
                printf("\n");
        }
}
```
## 83.WRITE A C PROGRAM TO PRINT THE PATTERN OF ALPHABETS IN A PYRAMID SHAPE
```c

//diamond shape
#include<stdio.h>
void main()
{
        int i,j;
        char ch='a';
        for(i=1;i<5;i++)
        {
                for(j=1;j<5-i;j++)
                        printf("  ");
                for(j=1;j<=i;j++)
                        printf("%c ",ch++);
                for(j=1;j<i;j++)
                        printf("%c ",ch++);
                printf("\n");
        }
        for(i=1;i<4;i++)
        {
                for(j=1;j<=i;j++)
                        printf("  ");
                for(j=1;j<=4-i;j++)
                        printf("%c ",ch++);
                for(j=1;j<4-i;j++)
                        printf("%c ",ch++);
                printf("\n");
        }
}
```
## 84.WRITE A C PROGRAM TO PRINT THE PATTERN OF ALPHABETS IN A MIRRORED PYRAMID SHAPE
```c
//hollow diamond shape
#include<stdio.h>
void main()
{
        char ch='a';
        int i,j,k=0;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                        printf("  ");
                for(j=0;j<=i;j++)
                {
                        if(j==0)
                                printf("%c ",ch++);
                        else
                                printf("  ");
                }
                for(j=0;j<=i;j++)
                {
                        if(j==k)
                        {
                                k++;
                                printf("%c ",ch++);
                        }
                        else
                                printf("  ");
                }
                printf("\n");
        }
        k--;
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                        printf("  ");
                for(j=0;j<4-i;j++)
                {
                        if(j==0)
                                printf("%c ",ch++);
                        else
                                printf("  ");
                }
                for(j=0;j<=3-i;j++)
                {
                        if(j==k)
                        {
                                k--;
                                printf("%c ",ch++);
                        }
                        else
                                printf("  ");
                }
                printf("\n");
        }
}
```
## 85.WRITE A C PROGRAM TO PRINT THE PATTERN OF ALPHABETS IN A RIGHT TRIANGLE SHAPE
```c
#include<stdio.h>
void main()
{
        int i,j;
        char ch='a';
        printf("Enter right angle triangle shape : \n");
        for(i=0;i<4;i++)
        {
                for(j=0;j<=i;j++)
                {
                        printf("%c ",ch++);
                }
                printf("\n");
        }
}
```
## 86.WRITE A C PROGRAM TO FIND THE AREA OF A RECTANGLE GIVEN ITS LENGTH AND BREADTH
```c
//area of rectangle
#include<stdio.h>
void main()
{
        float l,b;
        printf("Enter length and breadth : ");
        scanf("%f%f",&l,&b);
        printf("area of rectangle is : %f\n",l*b);
}
```
## 87.WRITE A C PROGRAM TO FIND THE SUM OF THE CUBES OF THE DIGITS OF A GIVEN NUMBER
```c
//sum of the cubes of the digits of numbers
#include<stdio.h>
#include<math.h>
void main()
{
        int n,num,r,sum=0;
        printf("Enter a number : ");
        scanf("%d",&num);
        n=num;
        while(n)
        {
                r=n%10;
                sum=sum+pow(r,3);
                n/=10;
        }
        printf("%d of digits of cubes sum is %d\n",num,sum);
}
```
## 88.WRITE A C PROGRAM TO FIND THE SUM OF THE EVEN DIGITS AND THE SUM OF THE ODD DIGITS SEPARATELY IN A GIVEN NUMBER
```c
//sum of even digits and sum of odd digits of given number
#include<stdio.h>
void main()
{
        int n,r,num,esum=0,osum=0;
        printf("Enter a number : ");
        scanf("%d",&num);
        n=num;
        while(n)
        {
                r=n%10;
                if(r%2==0)
                        esum+=r;
                else
                        osum+=r;
                n/=10;
        }
        printf("%d number of even sum is : %d\tOdd sum is : %d\n",num,esum,osum);
}
```
