#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

const int N=100000;

int main()
{
    printf("Enter the 1st Number : ");
    int firstNum;
    scanf("%d", &firstNum);
    printf("Enter the 2nd Number : ");
    int secondNum;
    scanf("%d", &secondNum);

    int prime[N];
    for(int i=0;i<N;i++) prime[i]=1;

    prime[0]=0;
    prime[1]=0;

    for(int i=2;(long long int)i*i<=N;i++)
    {
       if(prime[i]==1)
       {
           for(int j=i*i;j<N;j+=i)
           {
               prime[j]=0;
           }
       }
    }

    for(int i=firstNum;i<=secondNum;i++)
    {
        if(prime[i]==1) printf("%d ",i);
    }

}

