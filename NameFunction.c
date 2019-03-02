#include<stdio.h>
#include<stdlib.h>

void table(int n)//Table function
{
    int i;
    for(i=1;i<=10;i++)
        printf("\n%dx%d=%d",n,i,n*i);
}

void factor(int n) //factor function
{
    int i;
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            printf("%d",i);
}
                    
void menu(int choice) //Menu function
{
    int n;
    switch (choice)
    {
        case '1':
            printf("\nEnter a number");
            scanf("%d",&n);
            printf("\nTable is\t:");
            table(n);
            break;
        case '2':
            printf("\nEnter a number");
            scanf("%d",&n);
            printf("\n Factor is/are \t:");
            factor(n); 
            break;   
        default:
            printf("\nOh Wrong input");
            break;
    }
}

void main()
{
    int ch;
    printf("\nEnter 1.for table\n2.for factor");
    scanf("%d",&ch);
    menu(ch);
    printf("\n");
    system("pause");
}
