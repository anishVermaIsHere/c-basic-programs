int a[10],i,j,n,c,b[10],p,l,r;
main()
{
scanf("%d",&n);
p=n;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort();
for(j=0;j<p;j++)
printf("%d",b[i]);
}
sort()
{
balance();
for(i=0;i<p;i++)
{
b[n-1]=a[0];
a[0]=a[n-1];
n--;
balance();
}
}

balance()
{
for(j=0;j<p;j++)
{
for(i=0;i<p;i++)
{
l=2*i+1;
r=2*i+2;
if((a[i]>=a[l])&&(a[i]>=a[r]))
continue;
else

if(a[l]>a[r])
{
c=a[i];
a[i]=a[l];
a[l]=c;
}

else
if (a[r]>a[l])
{
c=a[i];
a[i]=a[r];
a[r]=c;
}
}
}
}
