/*Write a C Program to check if a given number is a strong number or not.
A strong number is a number in which the sum of the factorial of the digits is equal
to the number itself. Eg:- 145=1!+4!+5!=1+24+120=145*/


#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+fact(rem);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Strong number");
    }
}