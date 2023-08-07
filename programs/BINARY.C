int a[10],n,i,k,no,p,l,u,m;
main()
{
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter number to search");
scanf("%d",&no);
l=0;
u=n-1;
search();
if(k==1)
printf("\n%d present at position %d",a[p],p);
else
printf("not present");
getch();
}
search()
{
for(i=0;i<n;i++)
{
m=(l+u)/2;
if(no ==a[m])
{
k=1;
p=m;
}
if(no>a[m])
l=m+1;
if(no< a[m])
u=m-1;
}}
