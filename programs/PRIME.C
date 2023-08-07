main()
{
int n,i,k=0;
clrscr();
printf("enter the no.");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
k=1;
break;
}
}
if(k==0)
printf("%d is a prime no",n);
else
printf("%d is not prime no",n);
}