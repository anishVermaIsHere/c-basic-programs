#include<stdio.h>

main()
{
int a[10];
int i,j,n,k;

clrscr();

printf("\n enter the size of array");
scanf("%d",&n);

printf("\n enter the values of array");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
j=a[0];

for(i=1; i<n; i++)
{
if(a[i]>j)
j=a[i];

}

printf("\n the largest integer is %d",j);

k=a[0];
for(i=1; i<n; i++)
{
if(a[i]<k)
k=a[i];

}

printf("\n the smallest integer is %d",k);
}