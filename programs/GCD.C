#include<stdio.h>
#include<conio.h>

main()
{
int a,b,i,k,n;
clrscr();

printf("\n enter the no for a & b");

scanf("%d%d",&a,&b);

if(a<b)
{
n=a;
}
else
{
n=b;
}
	for(i=1; i<=n; i++)
	{
		if(a%i==0 && b%i==0)
		k=i;
	}

printf("%d",k);
}