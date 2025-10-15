## 1. Write a program in C to input a string and print it.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char *name;
        printf("Enter a string : ");
        gets(name);
        printf("%s\n",name);
        printf("enter 2 string : ");
        scanf("%s",name);
        puts(name);
        strcpy(name,"VIVEN");
        puts(name);
}
```
## 2.find length of String without lib function
```c
#include<stdio.h>
void main()
{
        char str[25]="sreenivasulu";
        int i,len=0;
        for(i=0;str[i]!='\0';i++)
                len++;
        printf("Length of string is %d\n",len);
}
```
## 3. Write a program in C to separate individual characters from a string.
```c
#include<stdio.h>
void main()
{
        char name[10];
        printf("Enter String : ");
        gets(name);
        int i=0;
        while(name[i]!='\0')
        {
                putchar(name[i]);
                printf("\t");
                i++;
        }
        printf("\n");
}
```
## 4. Write a program in C to print individual characters of a string in reverse order.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char name[10]="Viven";
        int i;
        int n=strlen(name);
        for(i=n-1;i>=0;i--)
                printf("%c\t",name[i]);
        printf("\n");
}
```
## 5. Write a program in C to count the total number of words in a string.
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int words(char *w);
void main()
{
        char name[50];
        printf("enter string : ");
        gets(name);
        printf("number of words : %d\n",words(name));
}
int words(char *w)
{
        int i,j,c=0;
        for(i=0,j=0;w[j]!='\0';j++)
        {
                while(isspace(w[j]))
                        j++;
                i=j;
                while(w[j]!=' ' && w[j]!='\0')
                {
                        printf("%c",w[j]);
                        j++;
                }
                c++;
                printf("\n");
        }
        return c;
}
```
## 6. Write a program in C to compare two strings without using string library functions.
```c
#include<stdio.h>
int cmp(char* s1,char* s2);
void main()
{
        char str1[10],str2[10];
        printf("Enter two strings : ");
        scanf("%s",str1);
        scanf("%s",str2);
        if(cmp(str1,str2)==0)
                printf("Both are same\n");
        else
                printf("Both are different\n");
}
int cmp(char* s1,char* s2)
{
        while(*s1 && *s2 && *s1==*s2)
        {
                s1++;
                s2++;
        }
        return *s1-*s2;
}
```
## 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
        int sc=0,nc=0,ac=0;
        int i;
        char str[30]="sreevas2003@gmail.com";
        for(i=0;i<strlen(str);i++)
        {
                if(tolower(str[i])>96 && tolower(str[i])<123)
                        ac++;
                else if(str[i]>47 && str[i]<58)
                        nc++;
                else
                        sc++;
        }
        printf("numbers count=%d\nspecial symbol count=%d\nalphabets count=%d\n",nc,sc,ac);
}
```
## 8. Write a program in C to copy one string to another string.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char str1[20]="sreenivasulu";
        char str2[20];
        int i;
        for(i=0;i<strlen(str1);i++)
                str2[i]=str1[i];
        puts(str2);
}
```
## 9. Write a program in C to count the total number of vowels or consonants in a string.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char str[]="sreenivasulu";
        int i,vc=0,cc=0;
        for(i=0;i<strlen(str);i++)
        {
                switch(str[i])
                {
                        case 'a': case 'e': case 'i': case 'o': case 'u':
                        case 'A': case 'E': case 'I': case 'O': case 'U':
                                vc++;
                                break;
                        default:
                                cc++;
                }
        }
        printf("Vowels count =%d\nconsonants count=%d\n",vc,cc);
}
```
## 10. Write a program in C to find the maximum number of characters in a string.
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
        char str[40];
        printf("Enter a string");
        fgets(str,40,stdin);
        int len=strlen(str);
        int i=0,count[len];
        while(i<len)
                count[i++]=0;
        int j,mc=0;
        for(i=0;i<len;i++)
        {
                if(count[i]!=-1)
                {
                        int c=0;
                        for(j=i;j<len;j++)
                        {
                                if(str[i]==str[j])
                                {
                                        c++;
                                        count[j]=-1;
                                }
                        }
                        if(mc<c)
                                mc=c;
                }
        }
        printf("Maximum number of characters is %d\n",mc);
}
```
##  11. Write a C program to sort a string array in ascending order.
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char temp,str[]="sreenivasulu";
    int i,j;
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    puts(str);
}
```
## 12. Write a program in C to read a string from the keyboard and sort it using bubble sort.
```c
#include<stdio.h>
#include<string.h>
void main()
{
    char temp,str[50];
    gets(str);
    int i,j;
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    puts(str);
}
```
## 13. Write a program in C to extract a substring from a given string.
```c
```
## 17. Write a program in C to remove characters from a string except alphabets.
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
        char str[]="sre98eniva25su@lu";
        int j,i=0,n=strlen(str);
        while(i<n)
        {
                if(isalpha(str[i]))
                        i++;
                else
                {
                        j=i;
                        while(j<n)
                        {
                                str[j]=str[j+1];
                                j++;
                        }
                        str[j]='\0';
                        n--;
                }
        }
        puts(str);
}
```
## 18. Write a program in C to find the frequency of characters.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char temp[50],str[]="sreenivasulu";
        int c,j,i=0,n=strlen(str);
        while(i<n)
                temp[i++]=1;

        for(i=0;i<n;i++)
        {
                if(temp[i]==1)
                {
                        c=0;
                        for(j=i;j<n;j++)
                        {
                                if(str[i]==str[j])
                                {
                                        c++;
                                        temp[j]=2;
                                }
                        }
                        printf("%c is %d\n",str[i],c);
                }
        }
}
```
## 19. Write a program in C to combine two strings manually.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char str1[30],str2[30],str3[60];
        printf("Enter string 1:");
        gets(str1);
        printf("Enter string 2 : ");
        gets(str2);
        int j=0,i=0,k=0,n1=strlen(str1),n2=strlen(str2);
        while(i<n1)
                str3[k++]=str1[i++];
        while(j<n2)
                str3[k++]=str2[j++];
        str3[k]='\0';
        for(i=0;i<k;i++)
                putchar(str3[i]);
        printf("\n");
}
```
##  20. Write a program in C to find the largest and smallest words in a string.
```c
#include<stdio.h>
#include<string.h>
void main()
{
        char str[25];
        printf("Enter a string : ");
        gets(str);
        char small,lar;
        small=lar=str[0];
        int i;
        for(i=0;str[i];i++)
        {
                if(small>str[i])
                        small=str[i];
                if(lar<str[i])
                        lar=str[i];
        }
        putchar(small);
        printf("\n");
        putchar(lar);
        printf("\n");
}
```
## 21. Write a program in C to convert a string to uppercase.
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
        char str[50];
        printf("Enter a string : ");
        gets(str);
        int i=0,n=strlen(str);
        while(i<n)
        {
                str[i]=toupper(str[i]);
                i++;
        }
        puts(str);
}
```
## 22. Write a program in C to convert a string to lowercase.
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
        char str[50];
        printf("Enter a string : ");
        gets(str);
        int i=0,n=strlen(str);
        while(i<n)
        {
                printf("%c",tolower(str[i]));
                i++;
        }
        printf("\n");
}
```
##  23. Write a program in C to check whether a character is a Hexadecimal Digit or not.
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
        char str[8];
        printf("enter a num in Hexdecimal : ");
        gets(str);

        int i,n=strlen(str);
        int flag=0;
        for(i=0;i<n;i++)
        {
                if((str[i]>=48 && str[i]<=57) || (toupper(str[i])>64 && toupper(str[i])<='F'))
                        continue;
                else
                {
                        flag=1;
                        break;
                }
        }
        if(flag==0)
                printf("It is in hexa form\n");
        else
                printf("Not in hexa form\n");
}
```
##  24. Write a program in C to check whether a letter is uppercase or not.
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
        char str[30];
        printf("Enter a string :");
        gets(str);
        int flag=0,i,n=strlen(str);
        for(i=0;i<n;i++)
        {
                if(isupper(str[i]))
                        continue;
                else
                {
                        flag=1;
                        break;
                }
        }
        if(flag==1)
                printf("Not in upper case\n");
        else
                printf("Letter in upper case\n");
}
```
## 25. Write a program in C to replace the spaces in a string with a specific character.
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
        char str[100],ch;
        printf("Enter a sentense : ");
        gets(str);
        printf("Enter special character : ");
        scanf("%c",&ch);
        int i,n=strlen(str);
        for(i=0;i<n;i++)
        {
                if(isspace(str[i]))
                        str[i]=ch;
        }
        puts(str);
}
```
##  26. Write a program in C to count the number of punctuation characters present in a string.
```c
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
        char str[100];
        printf("Enter a string : ");
        gets(str);
        int i,c=0,n=strlen(str);
        for(i=0;i<n;i++)
        {
                if(ispunct(str[i]))
                        c++;
        }
        printf("count of punctuatons is %d\n",c);
}
```
## 27. Write a program in C to print only the string before the new line character.
```c

```
## 28. Write a program in C to check whether a letter is lowercase or not.
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
        char ch;
        printf("Enter a character :");
        scanf("%c",&ch);
        if(ch>64 && ch<91)
                printf("letter is Upper\n");
        else
                printf("Not in upper\n");
}
```
## 
