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
