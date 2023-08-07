main()
{
int a[10],n,i,s=0;      clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf ("%d",&a[i]);
s=s+a[i];
}
printf("%d",s);
for(i=0;i<n;i++)
printf("%d",a[i]);
}