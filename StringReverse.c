#include<stdio.h>
void main()
{
    char str[100],rstr[100];
    int i,j,lenstr,f=0;

    printf("\nEnter a string \t:");
    scanf("%s",str);

    for(i=0;str[i]!='\0' ;i++);
    lenstr=i;

    for(j=lenstr-1;j!=0;j--)
    {
        rstr[j]=str[j];
    }
    rstr[j]='\0';


}
