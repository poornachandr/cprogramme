#include<stdio.h>
#include<conio.h>
void main()
{
 int n,count=0;
 ptintf(/n"Enter a number");
 scanf("%d",n);
 while(n!=0)
 {
  n=n/10;
  count++;
 }
 printf(/n"No of digits is"%d",count);
}; 
