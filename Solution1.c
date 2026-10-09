#include<stdio.h>

int main()
{

    printf("Enter the 1st Number : ");
    int firstNum;
    scanf("%d", &firstNum);
    printf("Enter the 2nd Number : ");
    int secondNum;
    scanf("%d", &secondNum);

    for(int i=firstNum;i<=secondNum;i++)
    {
        int flag=0;

        if(i<2) flag=1;

        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0) printf("%d ",i);
    }
    printf("\n");
}
