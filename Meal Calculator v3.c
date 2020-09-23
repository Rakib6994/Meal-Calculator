#include<stdio.h>
int main()
{
    int a[100],b[100];
    int i,sum=0,e,j;
    float m,em,r=0;
    printf("Enter the expenses of the Bazar,When you're done press 00 & Enter.\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==00)
        {
            break;
        }
        sum=sum+a[i];
    }
    printf("Enter the number of meals to add,When you're done press 00 & Enter.\n");
    for(j=0;j<100;j++)
    {
        scanf("%d",&b[j]);
        if(b[j]==00)
        {
            break;
        }
         r=r+b[j];
    }
    float q=sum/r;
    printf("The meal rate is: %.2f\n\n",q);
    Rakib:
    printf("Number of meal you've eaten:\n");
    scanf("%f",&em);
    printf("You have to give %.2f taka\n\n",em*q);
    printf("Enter 1 to re-calculate the bill or any key to exit:\n");
    scanf("%d",&e);
    if(e==1)
    {
        goto Rakib;
    }
    else
        exit(0);

    return 0;

}

