#include<stdio.h>
#include<conio.h>

main()
{
int n,t,i,j,k,a[10],val=1;

clrscr();
printf("\n enter the array size=");
scanf("%d",&n);

printf("\n enter the elements of array=");
for(i=0; i<n; i++)
{
scan("%d",&a[i]);
}

for(i=0; i<n-1&&val==1; i++)
{
val=0;
for(j=0; j<n-1-i; j++)
{
if(a[i]>a[j+1])
{
val=1;
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}

}

printf("\n the array after pass %d is:\n",i+1);
for(k=0; k<n;k++)
{
printf("\t%d",a[k]);
}
}
printf("\n the final sorted array is");
for(i=0; i<n; i++)
{
printf("\t%d",a[i]);
getch();
}
