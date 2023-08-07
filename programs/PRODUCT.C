/* this progarm for calculation of product of the two matrices*/
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,m,n,a[2][2],b[2][2],c[2][2];
printf("\n enter first matrices");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter second matrices");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}}
printf("\n entries for third matrices");
for(i=0;i<=m;i++)
{
for(j=0;j<=m;j++)
{
c[i][j]=0;
for(k=0;k<=m;k++)
{
c[i][j]=a[i][j]*b[i][j]+c[i][j];
}
}
}
for(i=0;i<=m;i++)
{
for(j=0;j<=m;j++)
{
printf("%d",c[i][j]);
getch();
}
}
}
