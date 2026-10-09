#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

bool prime(int N)
{
    if(N<2) return false;
    if(N==2) return true;
    if(N%2==0) return false ;
    for(int i=3; (long long int )i*i<=N; i+=2)
    {
        if(N%i==0) return false;
    }
    return true;
}

int main()
{
    printf("Enter the 1st Number : ");
    int firstNum;
    scanf("%d", &firstNum);
    printf("Enter the 2nd Number : ");
    int secondNum;
    scanf("%d", &secondNum);
    for(int i=firstNum; i<=secondNum; i++)
    {
        if(prime(i)) printf("%d ",i);
    }
    printf("\n");

}
