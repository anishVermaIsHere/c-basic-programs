main()
{
int i,j,a,m[10];
clrscr();
printf("\n enter the elements");
for(i=0;i<10;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if(m[j]>=m[i]);
{
a=m[j];
m[j]=m[i];
m[i]=a;
}
}}
for(i=0;i<10;i++)
{
printf("%d",m[i]);
printf("\n");
}
getch();
}