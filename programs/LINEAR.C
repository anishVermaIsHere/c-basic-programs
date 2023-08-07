#include<stdio.h>

main()
{
int a[20],i,j,n,k,p;
int f;
clrscr();

scanf(" %d",&n);
printf("\n enter the elements in array");
for(i=0; i<n; i++)
{
scanf(" %d",&a[i]);
}

printf("\n enter the number for search");
scanf(" %d",&k);

for(i=0; i<n; i++)
{
	if(a[i]==k)
	{
		f=1;
		p=i;
	}
}

if(f==1)
printf("\n the number is found at position %d",p);
else
printf("\n the number is no found");
getch();
}