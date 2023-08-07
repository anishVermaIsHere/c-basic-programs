#include<stdio.h>

int a[20];
int i,j,k,n,p;

main()
{
clrscr();
printf("\n enter the size of array");
scanf("%d",&n);

printf("\n enter the value of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

count();
printf("\n the number of times is %d",k);
getch();
}



count()
{
printf("\n enter the no for count");
scanf("%d",&p);

for(i=0; i<n; i++)
{
if(p==a[i])
{
k=p;
}
}

}