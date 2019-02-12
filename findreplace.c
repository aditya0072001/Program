#include<stdio.h>
#include<string.h>
void main()
{
    char string[20],rep[20],find[20];
    int i,j,lenf,lenr,lenstring,k,a;

    printf("Enter a string :\t");
    scanf("%s",string);

    printf("Enter a string to find :\t");
    scanf("%s",find);

    printf("Enter a string to replace :\t");
    scanf("%s",rep);

    lenstring=strlen(string);
    lenr=strlen(rep);
    lenf=strlen(find);

    for(i=0,a=0;i<lenstring-1;i++)
    {
        if(string[i]==find[a])
        {
            for(j=i,k=0;j<lenf-1&& k<lenr-1;j++,k++)
            {
                (string[j]=string[j+lenr-1]);
                string[j]=rep[k];
            }
        }
    }
string[i]='\0';
    printf("\n%s",string);
}
