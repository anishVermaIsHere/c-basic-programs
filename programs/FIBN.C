#include<stdio.h>
#include<conio.h>


main()
{

int a=0, b=1,i,j,k,c;

clrscr();


for(i=1; i<=10; i++)
{
c=a+b;
printf(" %d",c);
a=b;

b=c;

}


printf("\n no. of add opn=%d",i-1);

}

