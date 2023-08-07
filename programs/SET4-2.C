#include<stdio.h>
main()
{
int a[10],n,i,j,k;
clrscr();

printf("\n enter the size of array");
scanf("%d",&n);

printf("\n enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
}
printf("\n the sorted array are:");
for(i=0;i<n;i++)
printf("\t%d",a[i]);
getch();
}

