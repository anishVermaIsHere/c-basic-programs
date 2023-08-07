main()
{
int n,s;
clrscr();
printf("enter no.");
scanf("%d",&n);
s=fact(n);
printf("%d",s);
}
fact(int n)
{
int i=1,s=1;
printf("result");
while(i<=n)
{
s=s*i;
i++;
}
return(s);
}
